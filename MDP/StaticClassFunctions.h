#pragma once

namespace MDP {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	static ref class StaticClassFunctions
	{
	public:

		static Bitmap^ OpenImage(String ^fileName)
		{
			System::IO::FileStream ^fileStream = gcnew System::IO::FileStream(fileName, System::IO::FileMode::Open);
			System::Drawing::Image ^img = System::Drawing::Image::FromStream(fileStream);
			fileStream->Close();

			Bitmap ^bmp = dynamic_cast<Bitmap^>(img);
			return gcnew Bitmap(bmp);
		}
		
		static String^ Prepare(Bitmap ^image)
		{
			const int size = 768; //256*3
			int *gisto = new int[size]; 

			for (int i = 0; i < size; i++)
			{
				gisto[i] = 0;
			}

			for (int j = 0; j < image->Height; j++)
			{
				for (int i = 0; i < image->Width; i++)
				{
					Color ^color = image->GetPixel(i, j);
					double r = color->R;
					double g = color->G;
					double b = color->B;
					delete(color);

					double mid = 0.299 * r + 0.587 * g + 0.114 * b;

					double distance = Math::Pow(r - mid, 2) + Math::Pow(g - mid, 2) + Math::Pow(b - mid, 2);
					
					//экспериментально полученное значение
					int minDistance = 1600;

					if (distance > minDistance)
					{
						gisto[      color->R]++;
						gisto[256 + color->G]++;
						gisto[512 + color->B]++;
					}
				}
			}

			String^ data = "";
			for (unsigned int i = 0; i < size; i++)
			{
				data += Convert::ToString(gisto[i]) + "|";
			}
			delete(gisto);
			return gcnew String(data);
		}

		static String^ Analyse(String ^data, String ^pathToBase)
		{
			try
			{
				String ^report = "";

				System::IO::DirectoryInfo ^root = gcnew System::IO::DirectoryInfo(pathToBase);		
				array<DirectoryInfo^> ^directories = root->GetDirectories();


				if (directories->Length == 0)
				{
					MessageBox::Show("В выбранной базе еще нет созданных классов семян");
					MessageBox::Show("Классификация не была завершена успешно. Сохранение отчета возможно лишь в качестве создания нового класса");			
					return "";
				}

				for (int i = 0; i < directories->Length; i++)
				{
					array<FileInfo^> ^files = directories[i]->GetFiles();

					if (files->Length == 0)
					{
						MessageBox::Show("Произошла ошибка. В классе " + directories[i]->Name + " в базе отсутствуют сохраненные семена. Программа продолжит работу, но этот класс не будет доступен для работы. Проверьте базу.");
						continue;
					}
					FileInfo ^file = files[0];

					StreamReader ^reader = File::OpenText(file->FullName);
					String^ text = reader->ReadLine();	
					reader->Close();
					array<String^> ^baseElements = text->Split('|');
					array<String^> ^dataElements = data->Split('|');
					
					double distance = 0;
					for (int k = 0; k < dataElements->Length - 1; k++)
					{
						distance += Math::Abs(Convert::ToInt32(baseElements[k])-Convert::ToInt32(dataElements[k]));
					}

					report += Convert::ToString(directories[i]) + "|";
					report += Convert::ToString(distance) + ";";
				}

				MessageBox::Show("Классификация завершена");

				return report;
			}
			catch(Exception ^exception)
			{
				MessageBox::Show("Произошла ошибка во время анализа изображения. Скорее всего вы выбрали неверную папку в качестве базы.");
				MessageBox::Show("Классификация не была завершена успешно. Сохранение отчета возможно лишь в качестве создания нового класса");
				return "";
			}
		}
	};
}
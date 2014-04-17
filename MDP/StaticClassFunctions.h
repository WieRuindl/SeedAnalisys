#include <vector>

namespace MDP {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
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
			vector<int> vector(256*3);

			for (int j = 0; j < image->Height; j++)
			{
				for (int i = 0; i < image->Width; i++)
				{
					Color ^color = image->GetPixel(i, j);
					
					int r = color->R;
					int g = color->G;
					int b = color->B;
					double mid = 0.299 * (double)r + 0.587 * (double)g + 0.114 * (double)b;

					double distance = Math::Pow(r - mid, 2) + Math::Pow(g - mid, 2) + Math::Pow(b - mid, 2);
					
					//экспериментально полученное значение
					int minDistance = 1600;

					if (distance > minDistance)
					{
						vector[      color->R]++;
						vector[256 + color->G]++;
						vector[512 + color->B]++;
					}
				}
			}

			String^ data = "";
			for (unsigned int i = 0; i < vector.size(); i++)
			{
				data += Convert::ToString(vector[i]) + "|";
			}
			return data;
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
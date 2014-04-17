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
		
		static vector<int> Prepare(Bitmap ^image)
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
			return vector;
		}

		static String^ Analyse(vector<int> data, String ^pathToBase)
		{
			try
			{
				String ^result = "";

				System::IO::DirectoryInfo ^root = gcnew System::IO::DirectoryInfo(pathToBase);		
				array<DirectoryInfo^> ^subDirs = root->GetDirectories();

				if (subDirs->Length == 0)
				{
					MessageBox::Show("В выбранной базе еще нет созданных классов семян");
					return "";
				}

				for (int i = 0; i < subDirs->Length; i++)
				{
					array<FileInfo^> ^files = subDirs[i]->GetFiles();

					if (files->Length == 0)
					{
						MessageBox::Show("Произошла ошибка. В классе " + subDirs[i]->Name + " в базе отсутствуют сохраненные семена. Программа продолжит работу, но этот класс не будет доступен");
						continue;
					}

					FileInfo ^file = files[0];

					result += Convert::ToString(subDirs[i]) + "|";

					StreamReader ^reader = File::OpenText(file->FullName);
					String^ str = reader->ReadLine();
					double distance = 0;
					array<String^> ^elements = str->Split('|');

					for (int k = 0; k < data.size(); k++)
					{
						distance += Math::Abs(Convert::ToInt32(elements[k])-data[k]);
					}
					result += Convert::ToString(distance) + ";";
				}
				MessageBox::Show("Классификация завершена");
				return result;
			}
			catch(Exception ^exception)
			{
				MessageBox::Show("Ошибка " + exception->ToString() + ". Скорее всего вы выбрали неправильную папку в качестве базы");
				return "";
			}
		}
	};
}
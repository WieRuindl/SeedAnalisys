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
					int minDistance = 3600;

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

		static Bitmap^ OpenImage(String ^fileName)
		{
			System::IO::FileStream ^fileStream = gcnew System::IO::FileStream(fileName, System::IO::FileMode::Open);
			System::Drawing::Image ^img = System::Drawing::Image::FromStream(fileStream);
			fileStream->Close();

			Bitmap ^bmp = dynamic_cast<Bitmap^>(img);
			return gcnew Bitmap(bmp);
		}

		static Bitmap^ Prepare1(Bitmap ^image)
		{
			Bitmap ^bmp = dynamic_cast<Bitmap^>(image);

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
					int minDistance = 3600;

					if (distance <= minDistance)
					{
						bmp->SetPixel(i, j, Color::Black);
					}
				}
			}

			return gcnew Bitmap(bmp);
		}

		static void Analyse(vector<int>, String ^pathToBase)
		{
			System::IO::DirectoryInfo ^root = gcnew System::IO::DirectoryInfo(pathToBase);

			array<DirectoryInfo^> ^subDirs = root->GetDirectories();

			for (int i = 0; i < subDirs->Length; i++)
			{
				FileInfo ^file = subDirs[i]->GetFiles()[0];
				file->FullName;
			}
		}

		static void Analyse1(String ^pathToBase)
		{

		}
	};
}
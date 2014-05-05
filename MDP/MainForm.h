#pragma once
#include "CreateMenuForm.h"
#include "SaveResultForm.h"
#include "StaticClassFunctions.h"
#include "UnitTests.h"

namespace MDP {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();

			initialDirectory = "C:\\";
			tip = gcnew ToolTip();
			tip->SetToolTip(buttonCreateAlgorithm, "Создание нового алгоритма обработки изображения");
			tip->SetToolTip(buttonLoadAlgorithm, "Загрузка существующего алгоритма обработки изображения");
			tip->SetToolTip(buttonLoadImage, "Выберите изображение для анализа");
			tip->SetToolTip(buttonLoadBase, "Выберите базу изображений для сравнения");
			tip->SetToolTip(buttonAnalyseImage, "Провести анализ изображения");
			tip->SetToolTip(buttonSaveResult, "Сохраните результат анализа");

			//MessageBox::Show(UnitTests::TestPrepare());
		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonAnalyseImage;
	protected: 

	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  buttonLoadAlgorithm;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  buttonLoadImage;

	private: System::Windows::Forms::Button^  buttonCreateAlgorithm;
	private: System::Windows::Forms::Button^  buttonSaveResult;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  buttonLoadBase;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->buttonAnalyseImage = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonLoadAlgorithm = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonLoadImage = (gcnew System::Windows::Forms::Button());
			this->buttonCreateAlgorithm = (gcnew System::Windows::Forms::Button());
			this->buttonSaveResult = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->buttonLoadBase = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonAnalyseImage
			// 
			this->buttonAnalyseImage->Enabled = false;
			this->buttonAnalyseImage->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonAnalyseImage.Image")));
			this->buttonAnalyseImage->Location = System::Drawing::Point(15, 305);
			this->buttonAnalyseImage->Name = L"buttonAnalyseImage";
			this->buttonAnalyseImage->Size = System::Drawing::Size(150, 72);
			this->buttonAnalyseImage->TabIndex = 0;
			this->buttonAnalyseImage->UseVisualStyleBackColor = true;
			this->buttonAnalyseImage->Click += gcnew System::EventHandler(this, &MainForm::buttonAnalyseImage_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Алгоритм:";
			// 
			// buttonLoadAlgorithm
			// 
			this->buttonLoadAlgorithm->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonLoadAlgorithm.Image")));
			this->buttonLoadAlgorithm->Location = System::Drawing::Point(171, 41);
			this->buttonLoadAlgorithm->Name = L"buttonLoadAlgorithm";
			this->buttonLoadAlgorithm->Size = System::Drawing::Size(72, 72);
			this->buttonLoadAlgorithm->TabIndex = 0;
			this->buttonLoadAlgorithm->UseVisualStyleBackColor = true;
			this->buttonLoadAlgorithm->Click += gcnew System::EventHandler(this, &MainForm::buttonLoadAlgorithm_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(211, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Работа над изображением:";
			// 
			// buttonLoadImage
			// 
			this->buttonLoadImage->Enabled = false;
			this->buttonLoadImage->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonLoadImage.Image")));
			this->buttonLoadImage->Location = System::Drawing::Point(15, 227);
			this->buttonLoadImage->Name = L"buttonLoadImage";
			this->buttonLoadImage->Size = System::Drawing::Size(150, 72);
			this->buttonLoadImage->TabIndex = 0;
			this->buttonLoadImage->UseVisualStyleBackColor = true;
			this->buttonLoadImage->Click += gcnew System::EventHandler(this, &MainForm::buttonLoadImage_Click);
			// 
			// buttonCreateAlgorithm
			// 
			this->buttonCreateAlgorithm->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonCreateAlgorithm.Image")));
			this->buttonCreateAlgorithm->Location = System::Drawing::Point(93, 41);
			this->buttonCreateAlgorithm->Name = L"buttonCreateAlgorithm";
			this->buttonCreateAlgorithm->Size = System::Drawing::Size(72, 72);
			this->buttonCreateAlgorithm->TabIndex = 0;
			this->buttonCreateAlgorithm->UseVisualStyleBackColor = true;
			this->buttonCreateAlgorithm->Click += gcnew System::EventHandler(this, &MainForm::buttonCreateAlgorithm_Click);
			// 
			// buttonSaveResult
			// 
			this->buttonSaveResult->Enabled = false;
			this->buttonSaveResult->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonSaveResult.Image")));
			this->buttonSaveResult->Location = System::Drawing::Point(15, 383);
			this->buttonSaveResult->Name = L"buttonSaveResult";
			this->buttonSaveResult->Size = System::Drawing::Size(150, 72);
			this->buttonSaveResult->TabIndex = 0;
			this->buttonSaveResult->UseVisualStyleBackColor = true;
			this->buttonSaveResult->Click += gcnew System::EventHandler(this, &MainForm::buttonSaveResult_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Info;
			this->pictureBox1->Location = System::Drawing::Point(171, 227);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 228);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// buttonLoadBase
			// 
			this->buttonLoadBase->Enabled = false;
			this->buttonLoadBase->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonLoadBase.Image")));
			this->buttonLoadBase->Location = System::Drawing::Point(15, 149);
			this->buttonLoadBase->Name = L"buttonLoadBase";
			this->buttonLoadBase->Size = System::Drawing::Size(150, 72);
			this->buttonLoadBase->TabIndex = 0;
			this->buttonLoadBase->UseVisualStyleBackColor = true;
			this->buttonLoadBase->Click += gcnew System::EventHandler(this, &MainForm::buttonLoadBase_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(329, 466);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonLoadAlgorithm);
			this->Controls->Add(this->buttonSaveResult);
			this->Controls->Add(this->buttonCreateAlgorithm);
			this->Controls->Add(this->buttonLoadBase);
			this->Controls->Add(this->buttonLoadImage);
			this->Controls->Add(this->buttonAnalyseImage);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: 

		ToolTip ^tip;

		//	private: PSGraph ^container;
		String ^initialDirectory;
		String ^pathToFile;
		String ^pathToBase;
		String ^report;
		String ^data;

		System::Void ChangeEnabled()
		{
			buttonLoadBase->Enabled = true;
			//buttonLoadImage->Enabled = true;
			buttonLoadAlgorithm->Enabled = false;
			buttonCreateAlgorithm->Enabled = false;	
		}

		System::Void buttonCreateAlgorithm_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			CreateMenuForm ^createMenuForm = gcnew CreateMenuForm();
			createMenuForm->ShowDialog();

			ChangeEnabled();	
		}

		System::Void buttonLoadAlgorithm_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			OpenFileDialog ^openFileDialog = gcnew OpenFileDialog();
			openFileDialog->Title = "Выберите файл с алгоритмом";
			openFileDialog->Filter = "Algorithm Files|*.pst";
				
			if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				try
				{
					//cotainer = gcnew PSGraph(openFileDialog->FileName);
					ChangeEnabled();						 	 
				}
				catch(Exception ^exception)
				{
					MessageBox::Show("Произошла ошибка" + exception->ToString() + " в buttonLoadAlgorithm_Click =(");
				}
			}
			else
			{
				MessageBox::Show("Вы не выбрали файл!");
			}
		}

		System::Void buttonSaveAlgorithm_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 SaveFileDialog ^saveFileDialog = gcnew SaveFileDialog();
				 saveFileDialog->Title = "Сохраните файл с алгоритмом";
				 saveFileDialog->Filter = "Algorithm Files|*.pst";
				 
				 if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 try
					 {
						 //cotainer->SaveToFile(openFileDialog->FileName);	
						 MessageBox::Show("Алгоритм успешно сохранен!");
					 }
					 catch(Exception^ exception)
					 {
						 MessageBox::Show("Произошла ошибка" + exception->ToString() + " в buttonSaveAlgorithm_Click =(");
					 }					 	
				 }
				 else
				 {
					 MessageBox::Show("Вы не сохранили файл!");
				 }	
			 }
	
		System::Void buttonLoadImage_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			OpenFileDialog ^openFileDialog = gcnew OpenFileDialog();
			openFileDialog->Title = "Выберите изображение";
			openFileDialog->Filter = "Image Files|*.bmp; *.jpg";
			openFileDialog->InitialDirectory = initialDirectory;

			if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				try
				{
					pathToFile = openFileDialog->FileName;
					pictureBox1->Image = StaticClassFunctions::OpenImage(pathToFile);
					
					initialDirectory = Directory::GetParent(openFileDialog->FileName)->FullName;

					buttonAnalyseImage->Enabled = true;
				}
				catch(Exception^ exception)
				{
					MessageBox::Show("Произошла ошибка" + exception->ToString() + " в buttonLoadImage_Click =(");
				}
			}			
		}

		System::Void buttonLoadBase_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			FolderBrowserDialog ^folderBrowserDialog = gcnew FolderBrowserDialog();
			if (folderBrowserDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK )
			{
				try
				{
					pathToBase = folderBrowserDialog->SelectedPath;

					MessageBox::Show("База успешно загружена!");

					buttonLoadBase->Enabled = false;
					buttonLoadImage->Enabled = true;
				}
				catch(Exception^ exception)
				{
					MessageBox::Show("Произошла ошибка" + exception->ToString() + " в buttonLoadImage_Click =(");
				}
			}
			else
			{
				MessageBox::Show("Вы не выбрали Базу!");
			}	
		}

		System::Void buttonAnalyseImage_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			Bitmap ^bmp = dynamic_cast<Bitmap^>(pictureBox1->Image);

			data = StaticClassFunctions::Prepare(bmp);

			report = StaticClassFunctions::Analyse(data, pathToBase);
			
			buttonSaveResult->Enabled = true;
		}

		System::Void buttonSaveResult_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			SaveResultForm ^saveResultForm = gcnew SaveResultForm(pathToBase, data, report);
			saveResultForm->ShowDialog();
			
			buttonAnalyseImage->Enabled = false;
			buttonSaveResult->Enabled = false;
		}	
};
}
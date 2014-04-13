#pragma once
#include "CreateMenuForm.h"
#include "SaveResultForm.h"

namespace MDP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
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
	private: System::Windows::Forms::Button^  buttonSaveAlgorithm;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  buttonLoadImage;

	private: System::Windows::Forms::Button^  buttonCreateAlgorithm;
	private: System::Windows::Forms::Button^  buttonSaveResult;


	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->buttonAnalyseImage = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonLoadAlgorithm = (gcnew System::Windows::Forms::Button());
			this->buttonSaveAlgorithm = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonLoadImage = (gcnew System::Windows::Forms::Button());
			this->buttonCreateAlgorithm = (gcnew System::Windows::Forms::Button());
			this->buttonSaveResult = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
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
			this->buttonAnalyseImage->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
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
			this->buttonLoadAlgorithm->Location = System::Drawing::Point(171, 28);
			this->buttonLoadAlgorithm->Name = L"buttonLoadAlgorithm";
			this->buttonLoadAlgorithm->Size = System::Drawing::Size(72, 72);
			this->buttonLoadAlgorithm->TabIndex = 0;
			this->buttonLoadAlgorithm->UseVisualStyleBackColor = true;
			this->buttonLoadAlgorithm->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// buttonSaveAlgorithm
			// 
			this->buttonSaveAlgorithm->Enabled = false;
			this->buttonSaveAlgorithm->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonSaveAlgorithm.Image")));
			this->buttonSaveAlgorithm->Location = System::Drawing::Point(93, 116);
			this->buttonSaveAlgorithm->Name = L"buttonSaveAlgorithm";
			this->buttonSaveAlgorithm->Size = System::Drawing::Size(150, 72);
			this->buttonSaveAlgorithm->TabIndex = 0;
			this->buttonSaveAlgorithm->UseVisualStyleBackColor = true;
			this->buttonSaveAlgorithm->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 208);
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
			this->buttonLoadImage->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// buttonCreateAlgorithm
			// 
			this->buttonCreateAlgorithm->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonCreateAlgorithm.Image")));
			this->buttonCreateAlgorithm->Location = System::Drawing::Point(93, 28);
			this->buttonCreateAlgorithm->Name = L"buttonCreateAlgorithm";
			this->buttonCreateAlgorithm->Size = System::Drawing::Size(72, 72);
			this->buttonCreateAlgorithm->TabIndex = 0;
			this->buttonCreateAlgorithm->UseVisualStyleBackColor = true;
			this->buttonCreateAlgorithm->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
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
			this->buttonSaveResult->Click += gcnew System::EventHandler(this, &MainForm::button6_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox1->Location = System::Drawing::Point(171, 227);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 228);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(329, 488);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonSaveAlgorithm);
			this->Controls->Add(this->buttonLoadAlgorithm);
			this->Controls->Add(this->buttonSaveResult);
			this->Controls->Add(this->buttonCreateAlgorithm);
			this->Controls->Add(this->buttonLoadImage);
			this->Controls->Add(this->buttonAnalyseImage);
			this->Name = L"MainForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SetActive()
			 {			 
				 buttonSaveAlgorithm->Enabled = true; 
				 buttonLoadImage->Enabled = true;
			 }

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 CreateMenuForm ^createMenuForm = gcnew CreateMenuForm();
				 createMenuForm->ShowDialog();
				 SetActive();
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 OpenFileDialog ^openFileDialog = gcnew OpenFileDialog();
				 openFileDialog->Filter = ".bmp|*.bmp|.jpg|*.jpg";
				 
				 if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 System::IO::FileStream ^fileStream = gcnew System::IO::FileStream(openFileDialog->FileName, System::IO::FileMode::Open);
					 System::Drawing::Image ^img = System::Drawing::Image::FromStream(fileStream);
					 fileStream->Close();

					 pictureBox1->Image = img;

					 buttonAnalyseImage->Enabled = true;				 
				 }
				 else
				 {
					 MessageBox::Show("Вы не выбрали изображение!");
				 }
			 }

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 MessageBox::Show("Здесь будет функция обработки изображения");
				 buttonSaveResult->Enabled = true;
			 }
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 SaveResultForm ^saveResultForm = gcnew SaveResultForm();
				 saveResultForm->ShowDialog();
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 MessageBox::Show("Здесь будет функция загрузки алгоритма");
				 SetActive();
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
				 MessageBox::Show("Здесь будет функция сохранения алгоритма");
			 }
};
}


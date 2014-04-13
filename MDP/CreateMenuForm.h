#pragma once

namespace MDP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CreateMenuForm
	/// </summary>
	public ref class CreateMenuForm : public System::Windows::Forms::Form
	{
	public:
		CreateMenuForm()
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
		~CreateMenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::ListBox^  listBoxFunctions;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->listBoxFunctions = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(15, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 39);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Загрузить изображение";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 70);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 39);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Предобработка";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(15, 115);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 39);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Анализ и сравнение";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(15, 159);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 39);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Формирование результата";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(15, 224);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(228, 40);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Создать алгоритм и вернуться в меню";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// listBoxFunctions
			// 
			this->listBoxFunctions->FormattingEnabled = true;
			this->listBoxFunctions->Location = System::Drawing::Point(121, 25);
			this->listBoxFunctions->Name = L"listBoxFunctions";
			this->listBoxFunctions->Size = System::Drawing::Size(122, 173);
			this->listBoxFunctions->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(118, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 16);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Функции этапа:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 6);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 16);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Этапы:";
			// 
			// CreateMenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(261, 276);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBoxFunctions);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"CreateMenuForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

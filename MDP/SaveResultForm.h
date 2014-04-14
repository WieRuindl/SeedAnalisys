#pragma once

namespace MDP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SaveResultForm
	/// </summary>
	public ref class SaveResultForm : public System::Windows::Forms::Form
	{
	public:
		SaveResultForm(void)
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
		~SaveResultForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^  listBoxClassNames;
	protected: 

	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBoxClassName;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  buttonSaveInClass;
	private: System::Windows::Forms::Button^  buttonCreateNewClass;



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
			this->listBoxClassNames = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxClassName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->buttonSaveInClass = (gcnew System::Windows::Forms::Button());
			this->buttonCreateNewClass = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBoxClassNames
			// 
			this->listBoxClassNames->FormattingEnabled = true;
			this->listBoxClassNames->Location = System::Drawing::Point(12, 28);
			this->listBoxClassNames->Name = L"listBoxClassNames";
			this->listBoxClassNames->Size = System::Drawing::Size(181, 134);
			this->listBoxClassNames->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"������������ ������:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 184);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(170, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"������� ����� �����:";
			// 
			// textBoxClassName
			// 
			this->textBoxClassName->Location = System::Drawing::Point(110, 208);
			this->textBoxClassName->Multiline = true;
			this->textBoxClassName->Name = L"textBoxClassName";
			this->textBoxClassName->Size = System::Drawing::Size(83, 25);
			this->textBoxClassName->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 209);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"��� ������";
			// 
			// buttonSaveInClass
			// 
			this->buttonSaveInClass->Location = System::Drawing::Point(199, 112);
			this->buttonSaveInClass->Name = L"buttonSaveInClass";
			this->buttonSaveInClass->Size = System::Drawing::Size(100, 50);
			this->buttonSaveInClass->TabIndex = 5;
			this->buttonSaveInClass->Text = L"��������� � ��������� �����";
			this->buttonSaveInClass->UseVisualStyleBackColor = true;
			// 
			// buttonCreateNewClass
			// 
			this->buttonCreateNewClass->Location = System::Drawing::Point(199, 208);
			this->buttonCreateNewClass->Name = L"buttonCreateNewClass";
			this->buttonCreateNewClass->Size = System::Drawing::Size(100, 25);
			this->buttonCreateNewClass->TabIndex = 6;
			this->buttonCreateNewClass->Text = L"�������";
			this->buttonCreateNewClass->UseVisualStyleBackColor = true;
			// 
			// SaveResultForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(310, 246);
			this->Controls->Add(this->buttonCreateNewClass);
			this->Controls->Add(this->buttonSaveInClass);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBoxClassName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBoxClassNames);
			this->Name = L"SaveResultForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}

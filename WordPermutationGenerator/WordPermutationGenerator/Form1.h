#pragma once
#include "Permutation.h"
#include <iostream>
#include <thread>
#include <string>
#include <fstream>
#include <mutex>

namespace CppCLRWinformsProjekt {
	using namespace System;
	using namespace std;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:






	private: System::Windows::Forms::RichTextBox^ rtxtperms;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ lblOutput;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnGenerate;
	private: System::Windows::Forms::TextBox^ txtWord;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ lblLoading;





	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->rtxtperms = (gcnew System::Windows::Forms::RichTextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblOutput = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtWord = (gcnew System::Windows::Forms::TextBox());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnGenerate = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->lblLoading = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// rtxtperms
			// 
			this->rtxtperms->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->rtxtperms->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rtxtperms->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->rtxtperms->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtxtperms->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->rtxtperms->Location = System::Drawing::Point(0, 162);
			this->rtxtperms->Name = L"rtxtperms";
			this->rtxtperms->ReadOnly = true;
			this->rtxtperms->Size = System::Drawing::Size(456, 407);
			this->rtxtperms->TabIndex = 4;
			this->rtxtperms->Text = L"";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->lblOutput);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->txtWord);
			this->panel1->Controls->Add(this->btnClear);
			this->panel1->Controls->Add(this->btnGenerate);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(456, 156);
			this->panel1->TabIndex = 5;
			// 
			// lblOutput
			// 
			this->lblOutput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->lblOutput->AutoSize = true;
			this->lblOutput->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOutput->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblOutput->Location = System::Drawing::Point(64, 120);
			this->lblOutput->Name = L"lblOutput";
			this->lblOutput->Size = System::Drawing::Size(115, 19);
			this->lblOutput->TabIndex = 6;
			this->lblOutput->Text = L"No Calculations";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(64, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(112, 22);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Enter Word:";
			// 
			// txtWord
			// 
			this->txtWord->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtWord->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->txtWord->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtWord->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtWord->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->txtWord->Location = System::Drawing::Point(201, 34);
			this->txtWord->Name = L"txtWord";
			this->txtWord->Size = System::Drawing::Size(191, 29);
			this->txtWord->TabIndex = 5;
			// 
			// btnClear
			// 
			this->btnClear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnClear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnClear->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnClear->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(292, 111);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(100, 30);
			this->btnClear->TabIndex = 3;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &Form1::BtnClear_Click_1);
			// 
			// btnGenerate
			// 
			this->btnGenerate->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->btnGenerate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnGenerate->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnGenerate->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btnGenerate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGenerate->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGenerate->Location = System::Drawing::Point(292, 73);
			this->btnGenerate->Name = L"btnGenerate";
			this->btnGenerate->Size = System::Drawing::Size(100, 30);
			this->btnGenerate->TabIndex = 4;
			this->btnGenerate->Text = L"Generate";
			this->btnGenerate->UseVisualStyleBackColor = false;
			this->btnGenerate->Click += gcnew System::EventHandler(this, &Form1::BtnGenerate_Click);
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->Controls->Add(this->lblLoading);
			this->panel2->Enabled = false;
			this->panel2->Location = System::Drawing::Point(139, 199);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(200, 100);
			this->panel2->TabIndex = 6;
			this->panel2->UseWaitCursor = true;
			// 
			// lblLoading
			// 
			this->lblLoading->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->lblLoading->AutoSize = true;
			this->lblLoading->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblLoading->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblLoading->Location = System::Drawing::Point(23, 39);
			this->lblLoading->Name = L"lblLoading";
			this->lblLoading->Size = System::Drawing::Size(159, 19);
			this->lblLoading->TabIndex = 6;
			this->lblLoading->Text = L"Loading...Please Wait!";
			this->lblLoading->UseWaitCursor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(456, 569);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->rtxtperms);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Word Permutation Generator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:  System::Void BtnGenerate_Click(System::Object ^ sender, System::EventArgs ^ e) {
		wordlist.CurrentLocation = NULL;
		rtxtperms->Text = "";
		String^ word = txtWord->Text->ToString();
		string str;
		str = "";
		word = word->ToUpper();
		lblOutput->Text = "Status: Calculating! Don't Click Anywhere.";
		for (int i = 0; i < word->Length; i++)
		{
			str += word[i];
		}
		Form::Enabled = false;
		panel2->BringToFront();

		try
		{
			if (str.length() <= 7) {

				permute(str, "");
				wordlist.compare();
			}
			Node* tempNode = wordlist.CurrentLocation;

			while (tempNode != NULL)
			{
				if (str.length() <= 7) {
					String^ data = gcnew String(tempNode->GetData().c_str());
					rtxtperms->Text += data + " ";
					tempNode = tempNode->GetNext();
				}
				else
				{
					rtxtperms->Text = "Word must b of lenth 7";
					break;
				}
			}
		}
		catch (const std::exception&)
		{

		}
		lblOutput->Text = "Permutation for " + word->ToUpper() + ": " + wordlist.CountList().ToString();


		panel2->SendToBack();
		Form::Enabled = true;

	}
	private: System::Void Form1_Load(System::Object ^ sender, System::EventArgs ^ e) {
		panel2->SendToBack();
	}
	private: System::Void BtnClear_Click_1(System::Object ^ sender, System::EventArgs ^ e) {

		rtxtperms->Text = "";

		lblOutput->Text = "No Calculations";
		txtWord->Text = "";
	}
	};
}

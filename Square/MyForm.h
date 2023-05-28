#pragma once
using namespace System::Collections::Generic;
namespace Square {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form {
	public:
		MyForm(void) {
			InitializeComponent();
			submitButton->Enabled = false;
			nextButton->Enabled = false;
		}
	protected:
		~MyForm() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ Size_RB_GroupBox;
	private: System::Windows::Forms::RadioButton^ smallSize;
	private: System::Windows::Forms::RadioButton^ mediumSize;
	private: System::Windows::Forms::RadioButton^ largeSize;

	private: System::Windows::Forms::Button^ createButton;
	private: System::Windows::Forms::Button^ nextButton;
	private: System::Windows::Forms::DataGridView^ viewSquares;

	private: System::Windows::Forms::GroupBox^ Colors_B_GroupBox;
	private: System::Windows::Forms::Button^ buttonRed;
	private: System::Windows::Forms::Button^ buttonGrey;
	private: System::Windows::Forms::Button^ buttonPink;
	private: System::Windows::Forms::Button^ buttonYellow;
	private: System::Windows::Forms::Button^ buttonOrange;
	private: System::Windows::Forms::Button^ buttonBlue;
	private: System::Windows::Forms::Button^ buttonGreen;
	private: System::Windows::Forms::Label^ maxColorsText;

	private: System::Windows::Forms::GroupBox^ Colors_AB_GroupBox;
	private: System::Windows::Forms::Button^ submitButton;

	private: System::Windows::Forms::NumericUpDown^ N_Value;
	private: System::Windows::Forms::GroupBox^ N_Value_GroupBox;

	private: System::Windows::Forms::Button^ clearButton;
	private: System::Windows::Forms::Button^ N_Value_Help;



	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		void InitializeComponent(void) {
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->Size_RB_GroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->largeSize = (gcnew System::Windows::Forms::RadioButton());
			this->smallSize = (gcnew System::Windows::Forms::RadioButton());
			this->mediumSize = (gcnew System::Windows::Forms::RadioButton());
			this->createButton = (gcnew System::Windows::Forms::Button());
			this->viewSquares = (gcnew System::Windows::Forms::DataGridView());
			this->buttonRed = (gcnew System::Windows::Forms::Button());
			this->Colors_B_GroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->submitButton = (gcnew System::Windows::Forms::Button());
			this->maxColorsText = (gcnew System::Windows::Forms::Label());
			this->buttonGrey = (gcnew System::Windows::Forms::Button());
			this->buttonPink = (gcnew System::Windows::Forms::Button());
			this->buttonYellow = (gcnew System::Windows::Forms::Button());
			this->buttonOrange = (gcnew System::Windows::Forms::Button());
			this->buttonBlue = (gcnew System::Windows::Forms::Button());
			this->buttonGreen = (gcnew System::Windows::Forms::Button());
			this->nextButton = (gcnew System::Windows::Forms::Button());
			this->N_Value = (gcnew System::Windows::Forms::NumericUpDown());
			this->N_Value_GroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->N_Value_Help = (gcnew System::Windows::Forms::Button());
			this->Colors_AB_GroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->clearButton = (gcnew System::Windows::Forms::Button());
			this->Size_RB_GroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->viewSquares))->BeginInit();
			this->Colors_B_GroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->N_Value))->BeginInit();
			this->N_Value_GroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// Size_RB_GroupBox
			// 
			this->Size_RB_GroupBox->Controls->Add(this->largeSize);
			this->Size_RB_GroupBox->Controls->Add(this->smallSize);
			this->Size_RB_GroupBox->Controls->Add(this->mediumSize);
			this->Size_RB_GroupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Size_RB_GroupBox->Location = System::Drawing::Point(674, 58);
			this->Size_RB_GroupBox->Name = L"Size_RB_GroupBox";
			this->Size_RB_GroupBox->Size = System::Drawing::Size(194, 118);
			this->Size_RB_GroupBox->TabIndex = 1;
			this->Size_RB_GroupBox->TabStop = false;
			this->Size_RB_GroupBox->Text = L"Squares size:";
			// 
			// largeSize
			// 
			this->largeSize->AutoSize = true;
			this->largeSize->Location = System::Drawing::Point(14, 83);
			this->largeSize->Name = L"largeSize";
			this->largeSize->Size = System::Drawing::Size(65, 20);
			this->largeSize->TabIndex = 4;
			this->largeSize->TabStop = true;
			this->largeSize->Text = L"Large";
			this->largeSize->UseVisualStyleBackColor = true;
			// 
			// smallSize
			// 
			this->smallSize->AutoSize = true;
			this->smallSize->Location = System::Drawing::Point(14, 31);
			this->smallSize->Name = L"smallSize";
			this->smallSize->Size = System::Drawing::Size(64, 20);
			this->smallSize->TabIndex = 2;
			this->smallSize->TabStop = true;
			this->smallSize->Text = L"Small";
			this->smallSize->UseVisualStyleBackColor = true;
			// 
			// mediumSize
			// 
			this->mediumSize->AutoSize = true;
			this->mediumSize->Location = System::Drawing::Point(14, 57);
			this->mediumSize->Name = L"mediumSize";
			this->mediumSize->Size = System::Drawing::Size(79, 20);
			this->mediumSize->TabIndex = 3;
			this->mediumSize->TabStop = true;
			this->mediumSize->Text = L"Medium";
			this->mediumSize->UseVisualStyleBackColor = true;
			// 
			// createButton
			// 
			this->createButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->createButton->Location = System::Drawing::Point(781, 449);
			this->createButton->Name = L"createButton";
			this->createButton->Size = System::Drawing::Size(87, 38);
			this->createButton->TabIndex = 5;
			this->createButton->Text = L"Create";
			this->createButton->UseVisualStyleBackColor = true;
			this->createButton->Click += gcnew System::EventHandler(this, &MyForm::createButton_Click);
			// 
			// viewSquares
			// 
			this->viewSquares->BackgroundColor = System::Drawing::SystemColors::Control;
			this->viewSquares->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->viewSquares->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->viewSquares->ColumnHeadersHeight = 46;
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->viewSquares->DefaultCellStyle = dataGridViewCellStyle6;
			this->viewSquares->Location = System::Drawing::Point(33, 58);
			this->viewSquares->Name = L"viewSquares";
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->viewSquares->RowHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->viewSquares->RowHeadersWidth = 82;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->viewSquares->RowsDefaultCellStyle = dataGridViewCellStyle8;
			this->viewSquares->Size = System::Drawing::Size(620, 486);
			this->viewSquares->TabIndex = 6;
			// 
			// buttonRed
			// 
			this->buttonRed->BackColor = System::Drawing::Color::Red;
			this->buttonRed->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonRed->Location = System::Drawing::Point(6, 34);
			this->buttonRed->Name = L"buttonRed";
			this->buttonRed->Size = System::Drawing::Size(30, 29);
			this->buttonRed->TabIndex = 7;
			this->buttonRed->Text = L"0";
			this->buttonRed->UseVisualStyleBackColor = false;
			this->buttonRed->Click += gcnew System::EventHandler(this, &MyForm::buttonRed_Click);
			// 
			// Colors_B_GroupBox
			// 
			this->Colors_B_GroupBox->Controls->Add(this->submitButton);
			this->Colors_B_GroupBox->Controls->Add(this->maxColorsText);
			this->Colors_B_GroupBox->Controls->Add(this->buttonGrey);
			this->Colors_B_GroupBox->Controls->Add(this->buttonPink);
			this->Colors_B_GroupBox->Controls->Add(this->buttonYellow);
			this->Colors_B_GroupBox->Controls->Add(this->buttonOrange);
			this->Colors_B_GroupBox->Controls->Add(this->buttonBlue);
			this->Colors_B_GroupBox->Controls->Add(this->buttonGreen);
			this->Colors_B_GroupBox->Controls->Add(this->buttonRed);
			this->Colors_B_GroupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Colors_B_GroupBox->Location = System::Drawing::Point(674, 186);
			this->Colors_B_GroupBox->Name = L"Colors_B_GroupBox";
			this->Colors_B_GroupBox->Size = System::Drawing::Size(194, 138);
			this->Colors_B_GroupBox->TabIndex = 8;
			this->Colors_B_GroupBox->TabStop = false;
			this->Colors_B_GroupBox->Text = L"Available colors:";
			// 
			// submitButton
			// 
			this->submitButton->Location = System::Drawing::Point(114, 107);
			this->submitButton->Name = L"submitButton";
			this->submitButton->Size = System::Drawing::Size(73, 22);
			this->submitButton->TabIndex = 13;
			this->submitButton->Text = L"Submit";
			this->submitButton->UseVisualStyleBackColor = true;
			this->submitButton->Click += gcnew System::EventHandler(this, &MyForm::submitButton_Click);
			// 
			// maxColorsText
			// 
			this->maxColorsText->AutoSize = true;
			this->maxColorsText->Location = System::Drawing::Point(8, 110);
			this->maxColorsText->Name = L"maxColorsText";
			this->maxColorsText->Size = System::Drawing::Size(56, 16);
			this->maxColorsText->TabIndex = 14;
			this->maxColorsText->Text = L"Max - 5";
			// 
			// buttonGrey
			// 
			this->buttonGrey->BackColor = System::Drawing::Color::Silver;
			this->buttonGrey->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonGrey->Location = System::Drawing::Point(114, 69);
			this->buttonGrey->Name = L"buttonGrey";
			this->buttonGrey->Size = System::Drawing::Size(30, 29);
			this->buttonGrey->TabIndex = 13;
			this->buttonGrey->Text = L"6";
			this->buttonGrey->UseVisualStyleBackColor = false;
			this->buttonGrey->Click += gcnew System::EventHandler(this, &MyForm::buttonGrey_Click);
			// 
			// buttonPink
			// 
			this->buttonPink->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->buttonPink->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonPink->Location = System::Drawing::Point(42, 69);
			this->buttonPink->Name = L"buttonPink";
			this->buttonPink->Size = System::Drawing::Size(30, 29);
			this->buttonPink->TabIndex = 12;
			this->buttonPink->Text = L"5";
			this->buttonPink->UseVisualStyleBackColor = false;
			this->buttonPink->Click += gcnew System::EventHandler(this, &MyForm::buttonPink_Click);
			// 
			// buttonYellow
			// 
			this->buttonYellow->BackColor = System::Drawing::Color::Yellow;
			this->buttonYellow->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonYellow->Location = System::Drawing::Point(150, 34);
			this->buttonYellow->Name = L"buttonYellow";
			this->buttonYellow->Size = System::Drawing::Size(30, 29);
			this->buttonYellow->TabIndex = 11;
			this->buttonYellow->Text = L"4";
			this->buttonYellow->UseVisualStyleBackColor = false;
			this->buttonYellow->Click += gcnew System::EventHandler(this, &MyForm::buttonYellow_Click);
			// 
			// buttonOrange
			// 
			this->buttonOrange->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttonOrange->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonOrange->Location = System::Drawing::Point(114, 34);
			this->buttonOrange->Name = L"buttonOrange";
			this->buttonOrange->Size = System::Drawing::Size(30, 29);
			this->buttonOrange->TabIndex = 10;
			this->buttonOrange->Text = L"3";
			this->buttonOrange->UseVisualStyleBackColor = false;
			this->buttonOrange->Click += gcnew System::EventHandler(this, &MyForm::buttonOrange_Click);
			// 
			// buttonBlue
			// 
			this->buttonBlue->BackColor = System::Drawing::Color::Blue;
			this->buttonBlue->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonBlue->Location = System::Drawing::Point(78, 34);
			this->buttonBlue->Name = L"buttonBlue";
			this->buttonBlue->Size = System::Drawing::Size(30, 29);
			this->buttonBlue->TabIndex = 9;
			this->buttonBlue->Text = L"2";
			this->buttonBlue->UseVisualStyleBackColor = false;
			this->buttonBlue->Click += gcnew System::EventHandler(this, &MyForm::buttonBlue_Click);
			// 
			// buttonGreen
			// 
			this->buttonGreen->BackColor = System::Drawing::Color::Green;
			this->buttonGreen->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonGreen->Location = System::Drawing::Point(42, 34);
			this->buttonGreen->Name = L"buttonGreen";
			this->buttonGreen->Size = System::Drawing::Size(30, 29);
			this->buttonGreen->TabIndex = 8;
			this->buttonGreen->Text = L"1";
			this->buttonGreen->UseVisualStyleBackColor = false;
			this->buttonGreen->Click += gcnew System::EventHandler(this, &MyForm::buttonGreen_Click);
			// 
			// nextButton
			// 
			this->nextButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nextButton->Location = System::Drawing::Point(33, 550);
			this->nextButton->Name = L"nextButton";
			this->nextButton->Size = System::Drawing::Size(164, 38);
			this->nextButton->TabIndex = 10;
			this->nextButton->Text = L"Step ->";
			this->nextButton->UseVisualStyleBackColor = true;
			this->nextButton->Click += gcnew System::EventHandler(this, &MyForm::nextButton_Click);
			// 
			// N_Value
			// 
			this->N_Value->Location = System::Drawing::Point(36, 22);
			this->N_Value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 0 });
			this->N_Value->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->N_Value->Name = L"N_Value";
			this->N_Value->Size = System::Drawing::Size(59, 22);
			this->N_Value->TabIndex = 12;
			this->N_Value->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// N_Value_GroupBox
			// 
			this->N_Value_GroupBox->Controls->Add(this->N_Value_Help);
			this->N_Value_GroupBox->Controls->Add(this->N_Value);
			this->N_Value_GroupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->N_Value_GroupBox->Location = System::Drawing::Point(674, 440);
			this->N_Value_GroupBox->Name = L"N_Value_GroupBox";
			this->N_Value_GroupBox->Size = System::Drawing::Size(101, 55);
			this->N_Value_GroupBox->TabIndex = 13;
			this->N_Value_GroupBox->TabStop = false;
			this->N_Value_GroupBox->Text = L"N-value:";
			// 
			// N_Value_Help
			// 
			this->N_Value_Help->Location = System::Drawing::Point(6, 20);
			this->N_Value_Help->Margin = System::Windows::Forms::Padding(2);
			this->N_Value_Help->Name = L"N_Value_Help";
			this->N_Value_Help->Size = System::Drawing::Size(26, 25);
			this->N_Value_Help->TabIndex = 14;
			this->N_Value_Help->Text = L"\?";
			this->N_Value_Help->UseVisualStyleBackColor = true;
			this->N_Value_Help->Click += gcnew System::EventHandler(this, &MyForm::N_Value_Help_Click);
			// 
			// Colors_AB_GroupBox
			// 
			this->Colors_AB_GroupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Colors_AB_GroupBox->Location = System::Drawing::Point(674, 330);
			this->Colors_AB_GroupBox->Name = L"Colors_AB_GroupBox";
			this->Colors_AB_GroupBox->Size = System::Drawing::Size(194, 104);
			this->Colors_AB_GroupBox->TabIndex = 5;
			this->Colors_AB_GroupBox->TabStop = false;
			this->Colors_AB_GroupBox->Text = L"Selected colors";
			// 
			// clearButton
			// 
			this->clearButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clearButton->Location = System::Drawing::Point(554, 550);
			this->clearButton->Name = L"clearButton";
			this->clearButton->Size = System::Drawing::Size(99, 38);
			this->clearButton->TabIndex = 12;
			this->clearButton->Text = L"Clear";
			this->clearButton->UseVisualStyleBackColor = true;
			this->clearButton->Click += gcnew System::EventHandler(this, &MyForm::clearButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(914, 601);
			this->Controls->Add(this->createButton);
			this->Controls->Add(this->Colors_AB_GroupBox);
			this->Controls->Add(this->N_Value_GroupBox);
			this->Controls->Add(this->Size_RB_GroupBox);
			this->Controls->Add(this->Colors_B_GroupBox);
			this->Controls->Add(this->clearButton);
			this->Controls->Add(this->nextButton);
			this->Controls->Add(this->viewSquares);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(930, 640);
			this->MinimumSize = System::Drawing::Size(930, 640);
			this->Name = L"MyForm";
			this->Text = L"Square";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Size_RB_GroupBox->ResumeLayout(false);
			this->Size_RB_GroupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->viewSquares))->EndInit();
			this->Colors_B_GroupBox->ResumeLayout(false);
			this->Colors_B_GroupBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->N_Value))->EndInit();
			this->N_Value_GroupBox->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void createButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void nextButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: void Square::MyForm::ShowSquares();
	private: void Square::MyForm::ChangeSquareColor();
	private: void Square::MyForm::ClearTable();
	private: System::Void clearButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: void Square::MyForm::ClearSelectedButtons(GroupBox^ groupBox);
	private: List<Button^>^ Square::MyForm::ButtonArray();
	private: void Square::MyForm::DisableColorButtons();
	private: void Square::MyForm::EnableColorButtons();
	private: Void Square::MyForm::buttonRed_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void Square::MyForm::buttonGreen_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void Square::MyForm::buttonBlue_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void Square::MyForm::buttonOrange_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void Square::MyForm::buttonYellow_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void Square::MyForm::buttonPink_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void Square::MyForm::buttonGrey_Click(System::Object^ sender, System::EventArgs^ e);
	private: Void Square::MyForm::submitButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void N_Value_Help_Click(System::Object^ sender, System::EventArgs^ e);
};
}
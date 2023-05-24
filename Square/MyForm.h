#pragma once

namespace Square {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			prevButton->Enabled = false;
			nextButton->Enabled = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ largeSize;

	private: System::Windows::Forms::RadioButton^ smallSize;
	private: System::Windows::Forms::RadioButton^ mediumSize;
	private: System::Windows::Forms::Button^ createButton;
	private: System::Windows::Forms::DataGridView^ viewSquares;
	private: System::Windows::Forms::Button^ buttonRed;


	private: System::Windows::Forms::GroupBox^ groupBox2;



	private: System::Windows::Forms::Button^ buttonGrey;

	private: System::Windows::Forms::Button^ buttonPink;

	private: System::Windows::Forms::Button^ buttonYellow;

	private: System::Windows::Forms::Button^ buttonOrange;

	private: System::Windows::Forms::Button^ buttonBlue;

	private: System::Windows::Forms::Button^ buttonGreen;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ nextButton;
	private: System::Windows::Forms::Button^ prevButton;
	private: System::Windows::Forms::NumericUpDown^ N_Value;

	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox4;






	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->largeSize = (gcnew System::Windows::Forms::RadioButton());
			this->smallSize = (gcnew System::Windows::Forms::RadioButton());
			this->mediumSize = (gcnew System::Windows::Forms::RadioButton());
			this->createButton = (gcnew System::Windows::Forms::Button());
			this->viewSquares = (gcnew System::Windows::Forms::DataGridView());
			this->buttonRed = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonGrey = (gcnew System::Windows::Forms::Button());
			this->buttonPink = (gcnew System::Windows::Forms::Button());
			this->buttonYellow = (gcnew System::Windows::Forms::Button());
			this->buttonOrange = (gcnew System::Windows::Forms::Button());
			this->buttonBlue = (gcnew System::Windows::Forms::Button());
			this->buttonGreen = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->nextButton = (gcnew System::Windows::Forms::Button());
			this->prevButton = (gcnew System::Windows::Forms::Button());
			this->N_Value = (gcnew System::Windows::Forms::NumericUpDown());
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->viewSquares))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->N_Value))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aboutToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1053, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(53, 29);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->exitToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(65, 29);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->largeSize);
			this->groupBox1->Controls->Add(this->smallSize);
			this->groupBox1->Controls->Add(this->mediumSize);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(27, 19);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(256, 212);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Squares size:";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// largeSize
			// 
			this->largeSize->AutoSize = true;
			this->largeSize->Location = System::Drawing::Point(39, 116);
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
			this->smallSize->Location = System::Drawing::Point(39, 43);
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
			this->mediumSize->Location = System::Drawing::Point(39, 79);
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
			this->createButton->Location = System::Drawing::Point(247, 474);
			this->createButton->Name = L"createButton";
			this->createButton->Size = System::Drawing::Size(75, 23);
			this->createButton->TabIndex = 5;
			this->createButton->Text = L"Create";
			this->createButton->UseVisualStyleBackColor = true;
			this->createButton->Click += gcnew System::EventHandler(this, &MyForm::createButton_Click);
			// 
			// viewSquares
			// 
			this->viewSquares->BackgroundColor = System::Drawing::SystemColors::Control;
			this->viewSquares->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle5->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->viewSquares->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle5;
			this->viewSquares->Location = System::Drawing::Point(75, 58);
			this->viewSquares->Name = L"viewSquares";
			this->viewSquares->Size = System::Drawing::Size(588, 486);
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
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->buttonGrey);
			this->groupBox2->Controls->Add(this->buttonPink);
			this->groupBox2->Controls->Add(this->buttonYellow);
			this->groupBox2->Controls->Add(this->buttonOrange);
			this->groupBox2->Controls->Add(this->buttonBlue);
			this->groupBox2->Controls->Add(this->buttonGreen);
			this->groupBox2->Controls->Add(this->buttonRed);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(16, 237);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(194, 138);
			this->groupBox2->TabIndex = 8;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Available colors:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(59, 110);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Max - 5";
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
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Control;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(16, 388);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(225, 109);
			this->dataGridView1->TabIndex = 9;
			// 
			// nextButton
			// 
			this->nextButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nextButton->Location = System::Drawing::Point(342, 550);
			this->nextButton->Name = L"nextButton";
			this->nextButton->Size = System::Drawing::Size(129, 42);
			this->nextButton->TabIndex = 10;
			this->nextButton->Text = L"Next";
			this->nextButton->UseVisualStyleBackColor = true;
			this->nextButton->Click += gcnew System::EventHandler(this, &MyForm::nextButton_Click);
			// 
			// prevButton
			// 
			this->prevButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->prevButton->Location = System::Drawing::Point(186, 550);
			this->prevButton->Name = L"prevButton";
			this->prevButton->Size = System::Drawing::Size(129, 42);
			this->prevButton->TabIndex = 11;
			this->prevButton->Text = L"Previous";
			this->prevButton->UseVisualStyleBackColor = true;
			// 
			// N_Value
			// 
			this->N_Value->Location = System::Drawing::Point(16, 19);
			this->N_Value->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 0 });
			this->N_Value->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->N_Value->Name = L"N_Value";
			this->N_Value->Size = System::Drawing::Size(54, 22);
			this->N_Value->TabIndex = 12;
			this->N_Value->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->N_Value);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(216, 253);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(93, 47);
			this->groupBox3->TabIndex = 13;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"N-value:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(15, 388);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 16);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Selected colors";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->groupBox1);
			this->groupBox4->Controls->Add(this->createButton);
			this->groupBox4->Controls->Add(this->groupBox2);
			this->groupBox4->Controls->Add(this->groupBox3);
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Controls->Add(this->dataGridView1);
			this->groupBox4->Location = System::Drawing::Point(684, 47);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(330, 507);
			this->groupBox4->TabIndex = 5;
			this->groupBox4->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1053, 600);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->prevButton);
			this->Controls->Add(this->nextButton);
			this->Controls->Add(this->viewSquares);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Square";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->viewSquares))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->N_Value))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e);

	private: System::Void createButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void nextButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: void Square::MyForm::ShowSquares();
	private: void Square::MyForm::ChangeSquareColor();
};
}

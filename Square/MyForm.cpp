#include "MyForm.h"
#include <cstdlib>
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;

const int SQR_SIZE = 5;
int sqr[SQR_SIZE][SQR_SIZE];


[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Square::MyForm form;
	Application::Run(% form);
}

System::Void Square::MyForm::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
	return System::Void();
}
System::Void Square::MyForm::aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Group project for Soft Skills discipline!", "NUZP");
	return System::Void();
}

System::Void Square::MyForm::groupBox1_Enter(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Square::MyForm::createButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	for (int i = 0; i < SQR_SIZE; i++) {
		for (int j = 0; j < SQR_SIZE; j++) {
			sqr[i][j]= std::rand() % 7;
		}
	}
	
	viewSquares->RowCount = SQR_SIZE;
	viewSquares->ColumnCount = SQR_SIZE;

	ShowSquares();

	return System::Void();
}

void Square::MyForm::ShowSquares() {

	viewSquares->Rows->Clear();
	viewSquares->Columns->Clear();

	int squareSize = smallSize->Checked ? 20 : (mediumSize->Checked ? 50 : (largeSize->Checked ? 80 : 0));

	for (int i = 0; i < 5; i++) {
		viewSquares->Columns->Add(gcnew DataGridViewTextBoxColumn());
		viewSquares->Columns[i]->Width = squareSize;
		viewSquares->Rows->Add();
		viewSquares->Rows[i]->Height = squareSize;
	}

	viewSquares->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;

	for (int i = 0; i < SQR_SIZE; i++) {
		for (int j = 0; j < SQR_SIZE; j++) {
			viewSquares->TopLeftHeaderCell->Value = "Squares:";
			viewSquares->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
			viewSquares->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);

			switch (sqr[i][j]) {
			case 0:
				viewSquares->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::Red;
				break;
			case 1:
				viewSquares->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::Green;
				break;
			case 2:
				viewSquares->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::Blue;
				break;
			case 3:
				viewSquares->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::Orange;
				break;
			case 4:
				viewSquares->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::Yellow;
				break;
			case 5:
				viewSquares->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::Pink;
				break;
			case 6:
				viewSquares->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::Gray;
				break;
			default:
				viewSquares->Rows[i]->Cells[j]->Style->BackColor = System::Drawing::Color::White;
				break;
			}

			viewSquares->Rows[i]->Cells[j]->Value = sqr[i][j];
		}
	}
}
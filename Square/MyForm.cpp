#include "MyForm.h"
#include <cstdlib>
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;

const int SQR_SIZE = 5;
int sqr[SQR_SIZE][SQR_SIZE];
<<<<<<< HEAD
int maxSelectedButtons = 5; // Максимальное количество выбранных кнопок
int selectedButtonCount = 0; // Счетчик выбранных кнопок
=======
>>>>>>> b714df6336b47ff17621f6dd16e36c2de022d70c

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

System::Void Square::MyForm::createButton_Click(System::Object^ sender, System::EventArgs^ e) {
	std::srand(static_cast<unsigned int>(std::time(nullptr)));

	for (int i = 0; i < SQR_SIZE; i++) {
		for (int j = 0; j < SQR_SIZE; j++) {
			sqr[i][j]= std::rand() % 7;
		}
	}
	viewSquares->RowCount = SQR_SIZE;
	viewSquares->ColumnCount = SQR_SIZE;
	

	ShowSquares();
	nextButton->Enabled = true;

	return System::Void();
}

<<<<<<< HEAD
System::Void Square::MyForm::buttonRed_Click(System::Object^ sender, System::EventArgs^ e)
{
	Button^ clickedButton = dynamic_cast<Button^>(sender);

	// Создаем новую ячейку в dataGridView1
	DataGridViewTextBoxCell^ cell = gcnew DataGridViewTextBoxCell();
	cell->Value = clickedButton->Text;

	// Устанавливаем стиль ячейки для отображения цвета
	DataGridViewCellStyle^ cellStyle = gcnew DataGridViewCellStyle();
	cellStyle->BackColor = System::Drawing::Color::Red;
	cell->Style = cellStyle;

			// Добавляем столбцы в dataGridView1
		for (int i = 0; i < SQR_SIZE; i++) {
			dataGridView1->Columns->Add(gcnew DataGridViewTextBoxColumn());
		}
	

	int rowIndex = dataGridView1->Rows->Add();

	// Устанавливаем ячейку в первый доступный столбец
	int columnIndex = 0;
	dataGridView1->Rows[rowIndex]->Cells[columnIndex] = cell;

	// Деактивируем нажатую кнопку
	clickedButton->Enabled = false;

	// Проверяем количество нажатых кнопок в groupBox2
	int clickedButtonCount = 0;
	for (int i = 0; i < groupBox2->Controls->Count; i++)
	{
		if (dynamic_cast<Button^>(groupBox2->Controls[i]) != nullptr && !groupBox2->Controls[i]->Enabled)
			clickedButtonCount++;
	}

	// Если количество нажатых кнопок достигло 5, деактивируем остальные кнопки
	if (clickedButtonCount == 5)
	{
		for (int i = 0; i < groupBox2->Controls->Count; i++)
		{
			if (dynamic_cast<Button^>(groupBox2->Controls[i]) != nullptr && groupBox2->Controls[i]->Enabled)
				groupBox2->Controls[i]->Enabled = false;
		}
	}

	// Подгоняем размеры ячеек к размеру поля dataGridView1
	dataGridView1->AutoResizeRows();
	dataGridView1->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::AllCells);
}
System::Void Square::MyForm::buttonGreen_Click(System::Object^ sender, System::EventArgs^ e)
{
	Button^ clickedButton = dynamic_cast<Button^>(sender);

	// Создаем новую ячейку в dataGridView1
	DataGridViewTextBoxCell^ cell = gcnew DataGridViewTextBoxCell();
	cell->Value = clickedButton->Text;

	// Устанавливаем стиль ячейки для отображения цвета
	DataGridViewCellStyle^ cellStyle = gcnew DataGridViewCellStyle();
	cellStyle->BackColor = System::Drawing::Color::Green;
	cell->Style = cellStyle;

		// Добавляем столбцы в dataGridView1
		for (int i = 0; i < SQR_SIZE; i++) {
			dataGridView1->Columns->Add(gcnew DataGridViewTextBoxColumn());
		}
	
	int rowIndex = dataGridView1->Rows->Add();

	// Устанавливаем ячейку в первый доступный столбец
	int columnIndex = 0;
	dataGridView1->Rows[rowIndex]->Cells[columnIndex] = cell;

	// Деактивируем нажатую кнопку
	clickedButton->Enabled = false;

	// Проверяем количество нажатых кнопок в groupBox2
	int clickedButtonCount = 0;
	for (int i = 0; i < groupBox2->Controls->Count; i++)
	{
		if (dynamic_cast<Button^>(groupBox2->Controls[i]) != nullptr && !groupBox2->Controls[i]->Enabled)
			clickedButtonCount++;
	}

	// Если количество нажатых кнопок достигло 5, деактивируем остальные кнопки
	if (clickedButtonCount == 5)
	{
		for (int i = 0; i < groupBox2->Controls->Count; i++)
		{
			if (dynamic_cast<Button^>(groupBox2->Controls[i]) != nullptr && groupBox2->Controls[i]->Enabled)
				groupBox2->Controls[i]->Enabled = false;
		}
	}

	// Подгоняем размеры ячеек к размеру поля dataGridView1
	dataGridView1->AutoResizeRows();
	dataGridView1->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::AllCells);
}

System::Void Square::MyForm::buttonBlue_Click(System::Object^ sender, System::EventArgs^ e)
{
	Button^ clickedButton = dynamic_cast<Button^>(sender);

	// Создаем новую ячейку в dataGridView1
	DataGridViewTextBoxCell^ cell = gcnew DataGridViewTextBoxCell();
	cell->Value = clickedButton->Text;

	// Устанавливаем стиль ячейки для отображения цвета
	DataGridViewCellStyle^ cellStyle = gcnew DataGridViewCellStyle();
	cellStyle->BackColor = System::Drawing::Color::Blue;
	cell->Style = cellStyle;


		// Добавляем столбцы в dataGridView1
		for (int i = 0; i < SQR_SIZE; i++) {
			dataGridView1->Columns->Add(gcnew DataGridViewTextBoxColumn());
		}

		int rowIndex = dataGridView1->Rows->Add();

	// Устанавливаем ячейку в первый доступный столбец
	int columnIndex = 0;
	dataGridView1->Rows[rowIndex]->Cells[columnIndex] = cell;

	// Деактивируем нажатую кнопку
	clickedButton->Enabled = false;

	// Проверяем количество нажатых кнопок в groupBox2
	int clickedButtonCount = 0;
	for (int i = 0; i < groupBox2->Controls->Count; i++)
	{
		if (dynamic_cast<Button^>(groupBox2->Controls[i]) != nullptr && !groupBox2->Controls[i]->Enabled)
			clickedButtonCount++;
	}

	// Если количество нажатых кнопок достигло 5, деактивируем остальные кнопки
	if (clickedButtonCount == 5)
	{
		for (int i = 0; i < groupBox2->Controls->Count; i++)
		{
			if (dynamic_cast<Button^>(groupBox2->Controls[i]) != nullptr && groupBox2->Controls[i]->Enabled)
				groupBox2->Controls[i]->Enabled = false;
		}
	}

	// Подгоняем размеры ячеек к размеру поля dataGridView1
	dataGridView1->AutoResizeRows();
	dataGridView1->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::AllCells);
}

System::Void Square::MyForm::buttonOrange_Click(System::Object^ sender, System::EventArgs^ e)
{
	Button^ clickedButton = dynamic_cast<Button^>(sender);

	// Создаем новую ячейку в dataGridView1
	DataGridViewTextBoxCell^ cell = gcnew DataGridViewTextBoxCell();
	cell->Value = clickedButton->Text;

	// Устанавливаем стиль ячейки для отображения цвета
	DataGridViewCellStyle^ cellStyle = gcnew DataGridViewCellStyle();
	cellStyle->BackColor = System::Drawing::Color::Orange;
	cell->Style = cellStyle;


		// Добавляем столбцы в dataGridView1
		for (int i = 0; i < SQR_SIZE; i++) {
			dataGridView1->Columns->Add(gcnew DataGridViewTextBoxColumn());
		}


	int rowIndex = dataGridView1->Rows->Add();

	// Устанавливаем ячейку в первый доступный столбец
	int columnIndex = 0;
	dataGridView1->Rows[rowIndex]->Cells[columnIndex] = cell;

	// Деактивируем нажатую кнопку
	clickedButton->Enabled = false;

	// Проверяем количество нажатых кнопок в groupBox2
	int clickedButtonCount = 0;
	for (int i = 0; i < groupBox2->Controls->Count; i++)
	{
		if (dynamic_cast<Button^>(groupBox2->Controls[i]) != nullptr && !groupBox2->Controls[i]->Enabled)
			clickedButtonCount++;
	}

	// Если количество нажатых кнопок достигло 5, деактивируем остальные кнопки
	if (clickedButtonCount == 5)
	{
		for (int i = 0; i < groupBox2->Controls->Count; i++)
		{
			if (dynamic_cast<Button^>(groupBox2->Controls[i]) != nullptr && groupBox2->Controls[i]->Enabled)
				groupBox2->Controls[i]->Enabled = false;
		}
	}

	// Подгоняем размеры ячеек к размеру поля dataGridView1
	dataGridView1->AutoResizeRows();
	dataGridView1->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::AllCells);
}

System::Void Square::MyForm::buttonYellow_Click(System::Object^ sender, System::EventArgs^ e)
{
	Button^ clickedButton = dynamic_cast<Button^>(sender);

	// Создаем новую ячейку в dataGridView1
	DataGridViewTextBoxCell^ cell = gcnew DataGridViewTextBoxCell();
	cell->Value = clickedButton->Text;

	// Устанавливаем стиль ячейки для отображения цвета
	DataGridViewCellStyle^ cellStyle = gcnew DataGridViewCellStyle();
	cellStyle->BackColor = System::Drawing::Color::Yellow;
	cell->Style = cellStyle;

		// Добавляем столбцы в dataGridView1
		for (int i = 0; i < SQR_SIZE; i++) {
			dataGridView1->Columns->Add(gcnew DataGridViewTextBoxColumn());
		}

	int rowIndex = dataGridView1->Rows->Add();

	// Устанавливаем ячейку в первый доступный столбец
	int columnIndex = 0;
	dataGridView1->Rows[rowIndex]->Cells[columnIndex] = cell;

	// Деактивируем нажатую кнопку
	clickedButton->Enabled = false;

	// Проверяем количество нажатых кнопок в groupBox2
	int clickedButtonCount = 0;
	for (int i = 0; i < groupBox2->Controls->Count; i++)
	{
		if (dynamic_cast<Button^>(groupBox2->Controls[i]) != nullptr && !groupBox2->Controls[i]->Enabled)
			clickedButtonCount++;
	}

	// Если количество нажатых кнопок достигло 5, деактивируем остальные кнопки
	if (clickedButtonCount == 5)
	{
		for (int i = 0; i < groupBox2->Controls->Count; i++)
		{
			if (dynamic_cast<Button^>(groupBox2->Controls[i]) != nullptr && groupBox2->Controls[i]->Enabled)
				groupBox2->Controls[i]->Enabled = false;
		}
	}

	// Подгоняем размеры ячеек к размеру поля dataGridView1
	dataGridView1->AutoResizeRows();
	dataGridView1->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::AllCells);
}

System::Void Square::MyForm::buttonPink_Click(System::Object^ sender, System::EventArgs^ e)
{
	Button^ clickedButton = dynamic_cast<Button^>(sender);

	// Создаем новую ячейку в dataGridView1
	DataGridViewTextBoxCell^ cell = gcnew DataGridViewTextBoxCell();
	cell->Value = clickedButton->Text;

	// Устанавливаем стиль ячейки для отображения цвета
	DataGridViewCellStyle^ cellStyle = gcnew DataGridViewCellStyle();
	cellStyle->BackColor = System::Drawing::Color::Pink;
	cell->Style = cellStyle;

	// Добавляем столбцы в dataGridView1
		for (int i = 0; i < SQR_SIZE; i++) {
			dataGridView1->Columns->Add(gcnew DataGridViewTextBoxColumn());
		}


	int rowIndex = dataGridView1->Rows->Add();

	// Устанавливаем ячейку в первый доступный столбец
	int columnIndex = 0;
	dataGridView1->Rows[rowIndex]->Cells[columnIndex] = cell;

	// Деактивируем нажатую кнопку
	clickedButton->Enabled = false;

	// Проверяем количество нажатых кнопок в groupBox2
	int clickedButtonCount = 0;
	for (int i = 0; i < groupBox2->Controls->Count; i++)
	{
		if (dynamic_cast<Button^>(groupBox2->Controls[i]) != nullptr && !groupBox2->Controls[i]->Enabled)
			clickedButtonCount++;
	}

	// Если количество нажатых кнопок достигло 5, деактивируем остальные кнопки
	if (clickedButtonCount == 5)
	{
		for (int i = 0; i < groupBox2->Controls->Count; i++)
		{
			if (dynamic_cast<Button^>(groupBox2->Controls[i]) != nullptr && groupBox2->Controls[i]->Enabled)
				groupBox2->Controls[i]->Enabled = false;
		}
	}

	// Подгоняем размеры ячеек к размеру поля dataGridView1
	dataGridView1->AutoResizeRows();
	dataGridView1->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::AllCells);
}

System::Void Square::MyForm::buttonGrey_Click(System::Object^ sender, System::EventArgs^ e)
{
	Button^ clickedButton = dynamic_cast<Button^>(sender);

	// Создаем новую ячейку в dataGridView1
	DataGridViewTextBoxCell^ cell = gcnew DataGridViewTextBoxCell();
	cell->Value = clickedButton->Text;

	// Устанавливаем стиль ячейки для отображения цвета
	DataGridViewCellStyle^ cellStyle = gcnew DataGridViewCellStyle();
	cellStyle->BackColor = System::Drawing::Color::Gray;
	cell->Style = cellStyle;


		// Добавляем столбцы в dataGridView1
		for (int i = 0; i < SQR_SIZE; i++) {
			dataGridView1->Columns->Add(gcnew DataGridViewTextBoxColumn());
		}


	int rowIndex = dataGridView1->Rows->Add();

	// Устанавливаем ячейку в первый доступный столбец
	int columnIndex = 0;
	dataGridView1->Rows[rowIndex]->Cells[columnIndex] = cell;

	// Деактивируем нажатую кнопку
	clickedButton->Enabled = false;

	// Проверяем количество нажатых кнопок в groupBox2
	int clickedButtonCount = 0;
	for (int i = 0; i < groupBox2->Controls->Count; i++)
	{
		if (dynamic_cast<Button^>(groupBox2->Controls[i]) != nullptr && !groupBox2->Controls[i]->Enabled)
			clickedButtonCount++;
	}

	// Если количество нажатых кнопок достигло 5, деактивируем остальные кнопки
	if (clickedButtonCount == 5)
	{
		for (int i = 0; i < groupBox2->Controls->Count; i++)
		{
			if (dynamic_cast<Button^>(groupBox2->Controls[i]) != nullptr && groupBox2->Controls[i]->Enabled)
				groupBox2->Controls[i]->Enabled = false;
		}
	}

	// Подгоняем размеры ячеек к размеру поля dataGridView1
	dataGridView1->AutoResizeRows();
	dataGridView1->AutoResizeColumns(DataGridViewAutoSizeColumnsMode::AllCells);
}


=======
System::Void Square::MyForm::nextButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (nextButton) {
		ChangeSquareColor();
		ShowSquares();
	}
	return System::Void();
}

System::Void Square::MyForm::clearButton_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearTable();
	return System::Void();
}

>>>>>>> b714df6336b47ff17621f6dd16e36c2de022d70c
void Square::MyForm::ShowSquares() {
	ClearTable();
	int squareSize = smallSize->Checked ? 20 : (mediumSize->Checked ? 50 : (largeSize->Checked ? 80 : 0));

	for (int i = 0; i < SQR_SIZE; i++) {
		viewSquares->Columns->Add(gcnew DataGridViewTextBoxColumn());
		viewSquares->Columns[i]->Width = squareSize;
		viewSquares->Rows->Add();
		viewSquares->Rows[i]->Height = squareSize;
	}

	viewSquares->RowHeadersWidthSizeMode = DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;

	for (int i = 0; i < SQR_SIZE; i++) {
		for (int j = 0; j < SQR_SIZE; j++) {
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
<<<<<<< HEAD
=======

			viewSquares->Rows[i]->Cells[j]->Value = sqr[i][j];
			nextButton->Enabled = true;
>>>>>>> b714df6336b47ff17621f6dd16e36c2de022d70c
		}
	}
}

void Square::MyForm::ChangeSquareColor() {
	bool hasSteps = false;
	const int N = (int)N_Value->Value;
	for (int row = 0; row < SQR_SIZE; row++) {
		for (int col = 0; col < SQR_SIZE; col++) {
			int count = 0;
			for (int i = row - 1; i <= row + 1; i++) {
				for (int j = col - 1; j <= col + 1; j++) {
					if (i >= 0 && i < SQR_SIZE && j >= 0 && j < SQR_SIZE && (i != row || j != col)) {
						if (sqr[row][col] == sqr[i][j] - 1) {
							count++;
						}
					}
				}
			}
			if (count == N) {
				hasSteps = true;
				sqr[row][col]++;
			}
		}
	}
	if (!hasSteps) {
		MessageBox::Show("No more steps available.\nChange N-value or create another table", "Info",MessageBoxButtons::OK);
	}
}
void Square::MyForm::ClearTable() {
	viewSquares->Rows->Clear();
	viewSquares->Columns->Clear();
	nextButton->Enabled = false;
}

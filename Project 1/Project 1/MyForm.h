#pragma once
#include "ImageToArray.h";
#include "ArrayToFromFile.h";
#include <vector>;


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace Runtime::InteropServices;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	public: System::Windows::Forms::PictureBox^  pictureBox1;
	private:
	public: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	public:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBox3;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(8, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 55);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Открыть обучающий файл";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(79, 110);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(153, 20);
			this->textBox1->TabIndex = 1;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->Size = System::Drawing::Size(557, 568);
			this->dataGridView1->TabIndex = 2;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1145, 600);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1137, 574);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Загрузка данных";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(8, 158);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 55);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Vector";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(141, 6);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 55);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Открыть эксперементальный файл";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->splitContainer2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1137, 574);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Матрица 0 и 1";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(3, 3);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->label3);
			this->splitContainer2->Panel1->Controls->Add(this->dataGridView1);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->dataGridView2);
			this->splitContainer2->Panel2->Controls->Add(this->label4);
			this->splitContainer2->Size = System::Drawing::Size(1131, 568);
			this->splitContainer2->SplitterDistance = 557;
			this->splitContainer2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Dock = System::Windows::Forms::DockStyle::Top;
			this->label3->Location = System::Drawing::Point(0, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(177, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Матрица исходного изображения";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::DisplayedCells;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->Location = System::Drawing::Point(0, 13);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->Size = System::Drawing::Size(570, 555);
			this->dataGridView2->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Dock = System::Windows::Forms::DockStyle::Top;
			this->label4->Location = System::Drawing::Point(0, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Матрица исходного ЧБ";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->splitContainer1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1137, 574);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Изображения";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox1);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->pictureBox3);
			this->splitContainer1->Panel2->Controls->Add(this->label2);
			this->splitContainer1->Panel2->Controls->Add(this->pictureBox2);
			this->splitContainer1->Size = System::Drawing::Size(1137, 574);
			this->splitContainer1->SplitterDistance = 568;
			this->splitContainer1->TabIndex = 8;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(568, 561);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Исходное изображение";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(35, 249);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(324, 184);
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Dock = System::Windows::Forms::DockStyle::Top;
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"ЧБ изображение";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(565, 574);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1145, 600);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel1->PerformLayout();
			this->splitContainer2->Panel2->ResumeLayout(false);
			this->splitContainer2->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			this->splitContainer1->Panel2->ResumeLayout(false);
			this->splitContainer1->Panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}


#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//textBox1->Text = "TEST1";
		//MyForm1^ MyFrm1=gcnew MyForm1;

		//загрузка картинки 
		System::String^ FileName;
		openFileDialog1->Title = "Select picture ";
		openFileDialog1->Multiselect = false;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			FileName = openFileDialog1->FileName->ToString();
			pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
			label1->Text = FileName;
		}
		pictureBox1->Refresh();
		this->Refresh();

		//Создаём BMP-картинку и загружаем её в пикчабокс1
		Bitmap ^myBitmap = gcnew Bitmap(pictureBox1->Image);

		//Загружаем ЧБ фото
		pictureBox2->Image = ImageToArray::BWImage(myBitmap);
		pictureBox2->Refresh();

		//массив пикселей
		//исходного изображения
		int **ArrPixIN = new int *[pictureBox1->Image->Width];
		for (int i = 0; i <pictureBox1->Image->Width; ++i)
		{
			ArrPixIN[i] = new int[pictureBox1->Image->Height];
		}
		//ЧБ изображения
		int **ArrPixBW = new int *[pictureBox2->Image->Width];
		for (int i = 0; i <pictureBox2->Image->Width; ++i)
		{
			ArrPixBW[i] = new int[pictureBox2->Image->Height];
		}

		//Для оптимизации создаём отдельно ячейки в датагриде
		//датагрид1-исходного изображения
		for (int x = 0; x <pictureBox1->Image->Width; x++)
		{
			//добавление столбцов и заголовков к ним
			dataGridView1->Columns->Add(x.ToString(), "");
			dataGridView1->Columns[x]->HeaderText = Convert::ToString(x + 1);
		}
		for (int y = 0; y <pictureBox1->Image->Height; y++)
		{
			//добавление строк и заголовков к ним
			dataGridView1->Rows->Add();
			dataGridView1->Rows[y]->HeaderCell->Value = Convert::ToString(y + 1);
		}
		
		//датагрид2-ЧБ изображения
		for (int x = 0; x <pictureBox2->Image->Width; x++)
		{
			//добавление столбцов и заголовков к ним
			dataGridView2->Columns->Add(x.ToString(), "");
			dataGridView2->Columns[x]->HeaderText = Convert::ToString(x + 1);
		}
		for (int y = 0; y <pictureBox2->Image->Height; y++)
		{
			//добавление строк и заголовков к ним
			dataGridView2->Rows->Add();
			dataGridView2->Rows[y]->HeaderCell->Value = Convert::ToString(y + 1);
		}

		//Заполнение датагридов
		//Датагрид1
		ArrPixIN= ImageToArray::ImgToArr(myBitmap, ArrPixIN);//предаём картинку методу класса ImageToArray и возврат массива 0 и 1
		//разбиение изображения на RGB-канал и заполнение датагрида
		for (int x = 0; x <pictureBox1->Image->Width; x++)
		{
			for (int y = 0; y <pictureBox1->Image->Height; y++)
			{
				dataGridView1->Rows[y]->Cells[x]->Value = ArrPixIN[x][y];

				////рабочий фрагмент
				//dataGridView1->Rows->Add();
				//ArrPix[y][x] = Convert::ToInt16(Color(myBitmap->GetPixel(y, x)).R) >=230 && Convert::ToInt16(Color(myBitmap->GetPixel(y, x)).G) >= 230 && Convert::ToInt16(Color(myBitmap->GetPixel(y, x)).B) >= 230 ? 0 : 1;
				//label1->Text = Convert::ToString(myBitmap->GetPixel(y, x));
				//	dataGridView1->Rows[y]->Cells[x]->Value = ArrPix[y][x];
			}
		}
		//Датагрид2
		ArrPixBW = ImageToArray::BWImageToArray(myBitmap, ArrPixBW);//предаём картинку методу класса ImageToArray и возврат массива 0 и 1
														  //разбиение изображения на RGB-канал и заполнение датагрида
		for (int x = 0; x <pictureBox2->Image->Width; x++)
		{
			for (int y = 0; y < pictureBox2->Image->Height; y++)
			{
				dataGridView2->Rows[y]->Cells[x]->Value = ArrPixBW[x][y];

				////Закрашивание (тестовое)
				//if (Convert::ToInt16(dataGridView2->Rows[y]->Cells[x]->Value) == 1) {
				//	dataGridView2->Rows[y]->Cells[x]->Style->BackColor = Color().Black;
				//}

				////рабочий фрагмент
				//dataGridView1->Rows->Add();
				//ArrPix[y][x] = Convert::ToInt16(Color(myBitmap->GetPixel(y, x)).R) >=230 && Convert::ToInt16(Color(myBitmap->GetPixel(y, x)).G) >= 230 && Convert::ToInt16(Color(myBitmap->GetPixel(y, x)).B) >= 230 ? 0 : 1;
				//label1->Text = Convert::ToString(myBitmap->GetPixel(y, x));
				//	dataGridView1->Rows[y]->Cells[x]->Value = ArrPix[y][x];
			}
		}
		//MyFrm1->Show();
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	//загрузка картинки 
	System::String^ FileName;
	openFileDialog1->Title = "Select picture ";
	openFileDialog1->Multiselect = false;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		FileName = openFileDialog1->FileName->ToString();
		pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
		label1->Text = FileName;
	}
	pictureBox1->Refresh();
	this->Refresh();

	//Создаём BMP-картинку и загружаем её в пикчабокс1
	Bitmap ^myBitmap = gcnew Bitmap(pictureBox1->Image);

	//Загружаем ЧБ фото
	pictureBox2->Image = ImageToArray::BWImage(myBitmap);
	pictureBox2->Refresh();

	//массив пикселей
	//исходного изображения
	int **ArrPixIN = new int *[pictureBox1->Image->Width];
	for (int i = 0; i <pictureBox1->Image->Width; ++i)
	{
		ArrPixIN[i] = new int[pictureBox1->Image->Height];
	}
	//ЧБ изображения
	int **ArrPixBW = new int *[pictureBox2->Image->Width];
	for (int i = 0; i <pictureBox2->Image->Width; ++i)
	{
		ArrPixBW[i] = new int[pictureBox2->Image->Height];
	}

	//Для оптимизации создаём отдельно ячейки в датагриде
	//датагрид1-исходного изображения
	for (int x = 0; x <pictureBox1->Image->Width; x++)
	{
		//добавление столбцов и заголовков к ним
		dataGridView1->Columns->Add(x.ToString(), "");
		dataGridView1->Columns[x]->HeaderText = Convert::ToString(x + 1);
	}
	for (int y = 0; y <pictureBox1->Image->Height; y++)
	{
		//добавление строк и заголовков к ним
		dataGridView1->Rows->Add();
		dataGridView1->Rows[y]->HeaderCell->Value = Convert::ToString(y + 1);
	}

	//датагрид2-ЧБ изображения
	for (int x = 0; x <pictureBox2->Image->Width; x++)
	{
		//добавление столбцов и заголовков к ним
		dataGridView2->Columns->Add(x.ToString(), "");
		dataGridView2->Columns[x]->HeaderText = Convert::ToString(x + 1);
	}
	for (int y = 0; y <pictureBox2->Image->Height; y++)
	{
		//добавление строк и заголовков к ним
		dataGridView2->Rows->Add();
		dataGridView2->Rows[y]->HeaderCell->Value = Convert::ToString(y + 1);
	}

	//Заполнение датагридов
	//Датагрид1
	ArrPixIN = ImageToArray::ImgToArr(myBitmap, ArrPixIN);//предаём картинку методу класса ImageToArray и возврат массива 0 и 1
														  //разбиение изображения на RGB-канал и заполнение датагрида
	for (int x = 0; x <pictureBox1->Image->Width; x++)
	{
		for (int y = 0; y <pictureBox1->Image->Height; y++)
		{
			dataGridView1->Rows[y]->Cells[x]->Value = ArrPixIN[x][y];
		}
	}
	//Датагрид2
	ArrPixBW = ImageToArray::BWImageToArray(myBitmap, ArrPixBW);//предаём картинку методу класса ImageToArray и возврат массива 0 и 1
																//разбиение изображения на RGB-канал и заполнение датагрида
	for (int x = 0; x <pictureBox2->Image->Width; x++)
	{
		for (int y = 0; y < pictureBox2->Image->Height; y++)
		{
			dataGridView2->Rows[y]->Cells[x]->Value = ArrPixBW[x][y];
		}
	}
	//MyFrm1->Show();

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//загрузка картинки 
	System::String^ FileName;
	openFileDialog1->Title = "Select picture ";
	openFileDialog1->Multiselect = false;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		FileName = openFileDialog1->FileName->ToString();
		pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
		label1->Text = FileName;
	}
	pictureBox1->Refresh();
	this->Refresh();

	//Создаём BMP-картинку и загружаем её в пикчабокс1
	Bitmap ^myBitmap = gcnew Bitmap(pictureBox1->Image);

	//Загружаем ЧБ фото
	pictureBox2->Image = ImageToArray::BWImage(myBitmap);
	pictureBox2->Refresh();

	//создаём вектор входного изображения
	vector<vector<int>> inputvec(pictureBox1->Image->Width, vector <int>(pictureBox2->Image->Height));
	vector<vector<int>> blackwhitevec(pictureBox1->Image->Width, vector <int>(pictureBox2->Image->Height));

	//Для оптимизации создаём отдельно ячейки в датагриде
	//датагрид1-исходного изображения
	for (int x = 0; x <pictureBox1->Image->Width; x++)
	{
		//добавление столбцов и заголовков к ним
		dataGridView1->Columns->Add(x.ToString(), "");
		dataGridView1->Columns[x]->HeaderText = Convert::ToString(x + 1);
	}
	for (int y = 0; y <pictureBox1->Image->Height; y++)
	{
		//добавление строк и заголовков к ним
		dataGridView1->Rows->Add();
		dataGridView1->Rows[y]->HeaderCell->Value = Convert::ToString(y + 1);
	}

	//датагрид2-ЧБ изображения
	for (int x = 0; x <pictureBox2->Image->Width; x++)
	{
		//добавление столбцов и заголовков к ним
		dataGridView2->Columns->Add(x.ToString(), "");
		dataGridView2->Columns[x]->HeaderText = Convert::ToString(x + 1);
	}
	for (int y = 0; y <pictureBox2->Image->Height; y++)
	{
		//добавление строк и заголовков к ним
		dataGridView2->Rows->Add();
		dataGridView2->Rows[y]->HeaderCell->Value = Convert::ToString(y + 1);
	}

	//Заполнение датагридов

	//через вектора
	inputvec = ImageToArray::ImgToVec(myBitmap, inputvec);//предаём картинку методу класса ImageToArray и возврат массива 0 и 1
														  //разбиение изображения на RGB-канал и заполнение датагрида

	for (int x = 0; x < pictureBox1->Image->Width; x++)
	{
		for (int y = 0; y <pictureBox1->Image->Height; y++)
		{
			dataGridView1->Rows[y]->Cells[x]->Value = inputvec[x][y];
		}
	}
	//Датагрид2
	blackwhitevec = ImageToArray::BWImageToVector(myBitmap, blackwhitevec);//предаём картинку методу класса ImageToArray и возврат массива 0 и 1
																		   //разбиение изображения на RGB-канал и заполнение датагрида

	for (int x = 0; x <pictureBox2->Image->Width; x++)
	{
		for (int y = 0; y < pictureBox2->Image->Height; y++)
		{
			//f << "Test";
			dataGridView2->Rows[y]->Cells[x]->Value = blackwhitevec[x][y];
		}
	}

	ArrayToFromFile::VecToFile(blackwhitevec, pictureBox2->Image->Width, pictureBox2->Image->Height);
	//получение из файла вектор чб изображения и получение из этого вектора изображения

	ifstream f;
	f.open("1.txt");

	//тестово
	vector<vector<int>> invec(pictureBox2->Image->Width, vector <int>(pictureBox2->Image->Height));
	//vector<vector<int>> invec(268, vector <int>(268));

	invec = ArrayToFromFile::FileToVec(f);

	//тестовое задание нового размера на основе предыдущей картинки
	Bitmap ^image = gcnew Bitmap(pictureBox2->Image->Width, pictureBox2->Image->Height);
	//Bitmap ^image = gcnew Bitmap(268,268);


	int averageValueColor = 0;

	//в циклах в случае чего заменить на 268
	for (int x = 0; x < pictureBox2->Image->Width; x++)
	{
		for (int y = 0; y < pictureBox2->Image->Height; y++)
		{
			//узнаём средне рифметическое
			averageValueColor = invec[x][y] == 48 ? 0 : 255;
			//делаем картинку ЧБ
			image->SetPixel(x, y, Color::FromArgb(averageValueColor, averageValueColor, averageValueColor));
		}
	}

	pictureBox3->Image = image;
	pictureBox3->Refresh();
}

};
}

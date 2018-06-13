#pragma once
#include <msclr\marshal_cppstd.h>; //для маршлинга строк
#include <msclr\marshal_atl.h>; //в моём случае конвернтация из System::String в std::string
#include "ImageToArray.h";
#include "ArrayToFromFile.h";
#include <vector>;
#include "Create_Image.h";
#include "MyForm1.h";
#include "MyForm2.h";
#include "recognize.h";


namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	//тоже для маршлинга
	using namespace Runtime::InteropServices;
	using namespace msclr::interop;

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


	private: System::Windows::Forms::DataGridView^  dataGridView1;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;

	public: System::Windows::Forms::PictureBox^  pictureBox1;
	private:
	public: System::Windows::Forms::Label^  label1;

	public: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	public:
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog2;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Label^  label6;

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog3;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::SplitContainer^  splitContainer1;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  samplepic;

	private: System::Windows::Forms::ToolStripMenuItem^  averageMatrix;
	private: System::Windows::Forms::ToolStripMenuItem^  createAVmatrix;
	private: System::Windows::Forms::ToolStripMenuItem^  работаСИзображениемToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  loadOnePic;
	private: System::Windows::Forms::ToolStripMenuItem^  loadManyPic;
	private: System::Windows::Forms::ToolStripMenuItem^  pooling;
	private: System::Windows::Forms::ToolStripMenuItem^  GaussianBlur;
	private: System::Windows::Forms::ToolStripMenuItem^  genPic;
	private: System::Windows::Forms::ToolStripMenuItem^  genOnePic;
	private: System::Windows::Forms::ToolStripMenuItem^  genManyPic;
	private: System::Windows::Forms::ToolStripMenuItem^  работаСВесамиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  createWeightMat;
	private: System::Windows::Forms::ToolStripMenuItem^  loadWeightMat;







	private: System::ComponentModel::IContainer^  components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
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
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog2 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->openFileDialog3 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->samplepic = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->averageMatrix = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createAVmatrix = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->работаСИзображениемToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loadOnePic = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loadManyPic = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pooling = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->GaussianBlur = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->genPic = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->genOnePic = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->genManyPic = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->работаСВесамиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->createWeightMat = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loadWeightMat = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
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
			this->dataGridView1->Size = System::Drawing::Size(557, 544);
			this->dataGridView1->TabIndex = 2;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Multiselect = true;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 24);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1145, 576);
			this->tabControl1->TabIndex = 3;
			// 
			// tabPage1
			// 
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->Controls->Add(this->button15);
			this->tabPage1->Controls->Add(this->button12);
			this->tabPage1->Controls->Add(this->button11);
			this->tabPage1->Controls->Add(this->button10);
			this->tabPage1->Controls->Add(this->button9);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->richTextBox1);
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1137, 550);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Главная";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(29, 178);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(152, 34);
			this->button15->TabIndex = 18;
			this->button15->Text = L"Создать матрицу средних значений на пиксель";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Visible = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(29, 99);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(152, 62);
			this->button12->TabIndex = 15;
			this->button12->Text = L" Попробовать найти порок с использованием матрицы средних значений";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Visible = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(925, 233);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(116, 36);
			this->button11->TabIndex = 14;
			this->button11->Text = L"Гауссовский фильтр";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Visible = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(925, 178);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(117, 38);
			this->button10->TabIndex = 13;
			this->button10->Text = L"Пулинг изображения";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(215, 127);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(116, 34);
			this->button9->TabIndex = 12;
			this->button9->Text = L"Попробовать найти порок";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(930, 80);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(111, 30);
			this->button8->TabIndex = 11;
			this->button8->Text = L"Загрузить веса";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Visible = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(931, 26);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(111, 35);
			this->button7->TabIndex = 10;
			this->button7->Text = L"Зарандомить веса";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Visible = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(389, 322);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(155, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Список загруженных файлов";
			this->label6->Visible = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(392, 358);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(353, 157);
			this->richTextBox1->TabIndex = 7;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Visible = false;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(925, 380);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(116, 40);
			this->button6->TabIndex = 6;
			this->button6->Text = L"Загрузить изображения";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(925, 322);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(116, 52);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Сгенерировать несколько картинок";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(925, 275);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(118, 41);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Нарисовать картинку";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(925, 117);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(114, 55);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Загрузить 1 картинку используя Vector";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->Controls->Add(this->splitContainer2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1137, 550);
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
			this->splitContainer2->Size = System::Drawing::Size(1131, 544);
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
			this->dataGridView2->Size = System::Drawing::Size(570, 531);
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
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->Controls->Add(this->splitContainer1);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1137, 550);
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
			this->splitContainer1->Panel2->Controls->Add(this->pictureBox2);
			this->splitContainer1->Size = System::Drawing::Size(1137, 550);
			this->splitContainer1->SplitterDistance = 568;
			this->splitContainer1->TabIndex = 8;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(568, 550);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(127, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Исходное изображение";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(3, 341);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(274, 184);
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(565, 550);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// openFileDialog2
			// 
			this->openFileDialog2->FileName = L"openFileDialog1";
			this->openFileDialog2->Multiselect = true;
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// openFileDialog3
			// 
			this->openFileDialog3->FileName = L"openFileDialog1";
			this->openFileDialog3->Multiselect = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem1,
					this->работаСИзображениемToolStripMenuItem, this->работаСВесамиToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1145, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			this->menuStrip1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::menuStrip1_MouseClick);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->samplepic,
					this->averageMatrix, this->createAVmatrix
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(97, 20);
			this->toolStripMenuItem1->Text = L"Поиск порока";
			// 
			// samplepic
			// 
			this->samplepic->Name = L"samplepic";
			this->samplepic->Size = System::Drawing::Size(269, 22);
			this->samplepic->Text = L"Через сравнение снимка образца";
			this->samplepic->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// averageMatrix
			// 
			this->averageMatrix->Name = L"averageMatrix";
			this->averageMatrix->Size = System::Drawing::Size(269, 22);
			this->averageMatrix->Text = L"Через матрицу средних значений";
			this->averageMatrix->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// createAVmatrix
			// 
			this->createAVmatrix->Name = L"createAVmatrix";
			this->createAVmatrix->Size = System::Drawing::Size(269, 22);
			this->createAVmatrix->Text = L"Создать матрицу средних значений";
			this->createAVmatrix->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// работаСИзображениемToolStripMenuItem
			// 
			this->работаСИзображениемToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->loadOnePic,
					this->loadManyPic, this->pooling, this->GaussianBlur, this->genPic
			});
			this->работаСИзображениемToolStripMenuItem->Name = L"работаСИзображениемToolStripMenuItem";
			this->работаСИзображениемToolStripMenuItem->Size = System::Drawing::Size(152, 20);
			this->работаСИзображениемToolStripMenuItem->Text = L"Работа с изображением";
			// 
			// loadOnePic
			// 
			this->loadOnePic->Name = L"loadOnePic";
			this->loadOnePic->Size = System::Drawing::Size(267, 22);
			this->loadOnePic->Text = L"Загрузить одно изображение";
			this->loadOnePic->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// loadManyPic
			// 
			this->loadManyPic->Name = L"loadManyPic";
			this->loadManyPic->Size = System::Drawing::Size(267, 22);
			this->loadManyPic->Text = L"Загрузить несколько изображений";
			this->loadManyPic->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// pooling
			// 
			this->pooling->Name = L"pooling";
			this->pooling->Size = System::Drawing::Size(267, 22);
			this->pooling->Text = L"Уменьшение изображения";
			this->pooling->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// GaussianBlur
			// 
			this->GaussianBlur->Name = L"GaussianBlur";
			this->GaussianBlur->Size = System::Drawing::Size(267, 22);
			this->GaussianBlur->Text = L"Фильтр Гаусса";
			this->GaussianBlur->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// genPic
			// 
			this->genPic->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->genOnePic, this->genManyPic });
			this->genPic->Name = L"genPic";
			this->genPic->Size = System::Drawing::Size(267, 22);
			this->genPic->Text = L"Генерация изображений";
			// 
			// genOnePic
			// 
			this->genOnePic->Name = L"genOnePic";
			this->genOnePic->Size = System::Drawing::Size(276, 22);
			this->genOnePic->Text = L"Генерация одного изображения";
			this->genOnePic->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// genManyPic
			// 
			this->genManyPic->Name = L"genManyPic";
			this->genManyPic->Size = System::Drawing::Size(276, 22);
			this->genManyPic->Text = L"Генерация нескольких изображений";
			this->genManyPic->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// работаСВесамиToolStripMenuItem
			// 
			this->работаСВесамиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->createWeightMat,
					this->loadWeightMat
			});
			this->работаСВесамиToolStripMenuItem->Name = L"работаСВесамиToolStripMenuItem";
			this->работаСВесамиToolStripMenuItem->Size = System::Drawing::Size(109, 20);
			this->работаСВесамиToolStripMenuItem->Text = L"Работа с весами";
			// 
			// createWeightMat
			// 
			this->createWeightMat->Name = L"createWeightMat";
			this->createWeightMat->Size = System::Drawing::Size(212, 22);
			this->createWeightMat->Text = L"Создать матрицу весов";
			this->createWeightMat->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// loadWeightMat
			// 
			this->loadWeightMat->Name = L"loadWeightMat";
			this->loadWeightMat->Size = System::Drawing::Size(212, 22);
			this->loadWeightMat->Text = L"Загрузить матрицу весов";
			this->loadWeightMat->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1145, 600);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Главное окно";
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
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
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
		MyForm2 ^ progress = gcnew MyForm2();
		progress->progressBar1->Maximum = 1;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			FileName = openFileDialog1->FileName->ToString();
			pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
			progress->Show();
			progress->Text = ("Идёт обработка изображения. Пожалуйста подождите");
			label1->Text = FileName;
		
			pictureBox1->Refresh();
			this->Refresh();

			//Создаём BMP-картинку и загружаем её в пикчабокс1
			Bitmap ^myBitmap = gcnew Bitmap(pictureBox1->Image);

			//Загружаем ЧБ фото
			pictureBox2->Image = ImageToArray::BWImage(myBitmap);
			pictureBox2->Refresh();

			//создаём вектор входного изображения
			//vector<vector<int>*> *inputvec = new vector(pictureBox1->Image->Width, vector<int>(pictureBox2->Image->Height)); (pictureBox1->Image->Width, vector <int>(pictureBox2->Image->Height));

			vector<vector<int>> inputvec(pictureBox1->Image->Width, vector <int>(pictureBox2->Image->Height));
			vector<vector<int>> blackwhitevec(pictureBox1->Image->Width, vector <int>(pictureBox2->Image->Height));

			//Для оптимизации создаём отдельно ячейки в датагриде
			//датагрид1-исходного изображения и датагрид 2-ЧБ изображения 
			for (int x = 0; x < pictureBox1->Image->Width; x++)
				{
				//добавление столбцов и заголовков к ним
				dataGridView1->Columns->Add(x.ToString(), "");
				dataGridView1->Columns[x]->HeaderText = Convert::ToString(x + 1);

				dataGridView2->Columns->Add(x.ToString(), "");
				dataGridView2->Columns[x]->HeaderText = Convert::ToString(x + 1);
				}
				for (int y = 0; y < pictureBox1->Image->Height; y++)
					{
						//добавление строк и заголовков к ним
					dataGridView1->Rows->Add();
					dataGridView1->Rows[y]->HeaderCell->Value = Convert::ToString(y + 1);

					dataGridView2->Rows->Add();
					dataGridView2->Rows[y]->HeaderCell->Value = Convert::ToString(y + 1);
					}

			//датагрид2-ЧБ изображения
			//for (int x = 0; x <pictureBox2->Image->Width; x++)
			//{
			//	//добавление столбцов и заголовков к ним
			//	dataGridView2->Columns->Add(x.ToString(), "");
			//	dataGridView2->Columns[x]->HeaderText = Convert::ToString(x + 1);
			//}
			//for (int y = 0; y <pictureBox2->Image->Height; y++)
			//{
			//	//добавление строк и заголовков к ним
			//	dataGridView2->Rows->Add();
			//	dataGridView2->Rows[y]->HeaderCell->Value = Convert::ToString(y + 1);
			//}

			//Заполнение датагридов

			//через вектора
			inputvec = ImageToArray::InpVecBin(myBitmap);//предаём картинку методу класса ImageToArray и возврат массива 0 и 1
															  //разбиение изображения на RGB-канал и заполнение датагрида

															  //Датагрид2
			blackwhitevec = ImageToArray::BWImageToVector(myBitmap);//предаём картинку методу класса ImageToArray и возврат массива 0 и 1
																			   //разбиение изображения на RGB-канал и заполнение датагрида

			for (int x = 0; x < pictureBox1->Image->Width; x++)
				{
					for (int y = 0; y < pictureBox1->Image->Height; y++)
						{
						dataGridView1->Rows[y]->Cells[x]->Value = inputvec[x][y];

						dataGridView2->Rows[y]->Cells[x]->Value = blackwhitevec[x][y];
						}
				}
			////Датагрид2
			//blackwhitevec = ImageToArray::BWImageToVector(myBitmap, blackwhitevec);//предаём картинку методу класса ImageToArray и возврат массива 0 и 1
			//																	   //разбиение изображения на RGB-канал и заполнение датагрида

			//for (int x = 0; x <pictureBox2->Image->Width; x++)
			//{
			//	for (int y = 0; y < pictureBox2->Image->Height; y++)
			//	{
			//		//f << "Test";
			//		dataGridView2->Rows[y]->Cells[x]->Value = blackwhitevec[x][y];
			//	}
			//}

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
			pictureBox3->Visible = true;
			pictureBox3->Image = image;
			pictureBox3->Refresh();
			progress->progressBar1->PerformStep();
			progress->Close();
			MessageBox::Show("Обработка завершена");
			tabControl1->SelectedTab = tabPage3;
	}
}

private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap ^image = gcnew Bitmap(100, 100);
	image=Create_Image::Cr_image();
	image->Save("test1.bmp");
	MessageBox::Show("Картинка нарисована");
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm1 ^ genimg = gcnew MyForm1();//отображаем форму генерации картинок
	//Display frmAbout as a modal dialog
	genimg->ShowDialog();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	//загрузка картинки 
	openFileDialog2->Multiselect = true;
	System::String^ FileName;
	openFileDialog2->Title = "Выберите изображения";
	//openFileDialog2->Multiselect = false;
	//vector<Bitmap^> ImagesVec;
	Bitmap^ * InputImages;
	//cli::array<Bitmap^>^ Images;
	int i=0;
	MyForm2 ^ progress = gcnew MyForm2();
	progress->progressBar1->Maximum = openFileDialog2->FileNames->Length - 1;
	if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		FileName = openFileDialog2->FileName->ToString();
		//pictureBox1->Image = Image::FromFile(openFileDialog2->FileName);
		label1->Text = FileName;
		for each (FileName in openFileDialog2->FileNames)
		{
			progress->Show();
			progress->Text = ("Идёт зыгрузка изображений. Загружено " + i.ToString() + " из " + openFileDialog2->FileNames->Length.ToString());
			richTextBox1->AppendText(FileName + Environment::NewLine);
			//Bitmap^ file = gcnew Bitmap(500,500);
			//Images->;
			imageList1->Images->Add(Image::FromFile(FileName));
			//ImagesVec.push_back(openFileDialog2->OpenFile);
			//openFileDialog2->FileName= openFileDialog2->FileNames;
			pictureBox1->Image = Image::FromFile(FileName);
			//Images->Add(Image::FromFile(file));
			InputImages[i]->FromFile(FileName);// = Image::FromFile(file);
			progress->progressBar1->PerformStep();
			i++;
			//ImagesVec->push_back(Image::FromFile(file));
		}
		label6->Visible = true;
		richTextBox1->Visible = true;
		//pictureBox1->Image = InputImages[10];
		//pictureBox2->Image = imageList1->Images[10];

		//ImagesVec->push_back(Image::FromFile(file));
		//Images->Add;
		progress->Close();
		MessageBox::Show("Изображения загружены");
	}

}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	recognize::Randomize_weights();
	MessageBox::Show("Матрица весов создана");
}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		//загрузка весов из файла 
		ifstream in;
		in.open("random_weights.txt");//открываем файл для вывода инфы из файла в прогу
		char dig;//символ в файле, может принимать значенио 0 или 1 или размер вектора
		int x, y;//размеры вектора
		string str;//переменная для записи числа()
		if (!in.is_open()) // если файл не открыт
			cout << "Файл не может быть открыт!\n"; // сообщить об этом
		else
		{
		//узнаём размеры вектора из файла------------
		for (int f = 0; f < 2; f++)//это цикл для пробега по 2 первым строкам в файле(эти строки хранят размерность вектора) 
		{
			
				//in >> dig;//посимвольно считываем размер
				if (f == 0) {
					while (dig != '\n') {
						in >> dig;//посимвольно считываем размер
						str += dig;
						y = std::stoi(str);
						//f++;
						break;
					}
					
				}//из символов получаем строку и конвертируем в число
				
				else { 
					dig = ' ';
					str = ' ';
					while (dig != '\n') {
						in >> dig;//посимвольно считываем размер
						str += dig;
						x = std::stoi(str);
						f++;
						break;
					}
				}//это и будет размерность вектора
				
			
		}
	}
	vector<vector<double>> inweights(x, vector <double>(y));
	inweights = recognize::FileToVecWieights();
	/*label5->Text=Convert::ToString(y);
	label6->Text = Convert::ToString(x);*/

	for (int i = 0; i <x; i++)
	{
		//добавление столбцов и заголовков к ним
		dataGridView1->Columns->Add(i.ToString(), "");
		dataGridView1->Columns[i]->HeaderText = Convert::ToString(i + 1);
	}
	for (int j = 0; j <y; j++)
	{
		//добавление строк и заголовков к ним
		dataGridView1->Rows->Add();
		dataGridView1->Rows[j]->HeaderCell->Value = Convert::ToString(j + 1);
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j <y; j++)
		{
			dataGridView1->Rows[j]->Cells[i]->Value = inweights[j][i];
		}
	}
	MessageBox::Show("Матрица весов загружена");
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	System::String^ FileName;
	openFileDialog2->Title = "Выберите снимок образца ";
	openFileDialog2->Multiselect = false;
	openFileDialog3->Title = "Выберите сравниваемый снимок ";
	openFileDialog3->Multiselect = false;
	MyForm2 ^ progress = gcnew MyForm2();

	if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		FileName = openFileDialog2->FileName->ToString();
		pictureBox2->Image = Image::FromFile(openFileDialog2->FileName);
		Bitmap ^refimage = gcnew Bitmap(Image::FromFile(openFileDialog2->FileName));
		//label1->Text = FileName;
		if (openFileDialog3->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			FileName = openFileDialog3->FileName->ToString();
			Bitmap ^inimage = gcnew Bitmap(Image::FromFile(openFileDialog3->FileName));
			progress->progressBar1->Maximum = 1;
			progress->Show();
			progress->Text = ("Идёт обработка изображений. Пожалуйста подождите.");
			pictureBox1->Image = recognize::Recognized_Image(inimage, refimage);
			//pictureBox2->Image = Image::FromFile(openFileDialog3->FileName);

			//label1->Text = FileName;
			progress->Close();
			tabControl1->SelectedTab = tabPage3;
			MessageBox::Show("Обработка завершена");
		}
	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	//загрузка картинки 
	System::String^ FileName;
	openFileDialog1->Title = "Select picture ";
	openFileDialog1->Multiselect = false;
	MyForm2 ^ progress = gcnew MyForm2();
	progress->progressBar1->Maximum = 1;
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		FileName = openFileDialog1->FileName->ToString();
		progress->Show();
		progress->Text = ("Идёт обработка изображения. Пожалуйста подождите");
		pictureBox1->Image = Image::FromFile(openFileDialog1->FileName);
		label1->Text = FileName;
	
		pictureBox1->Refresh();
		this->Refresh();

		//Создаём BMP-картинку и загружаем её в пикчабокс1
		Bitmap ^myBitmap = gcnew Bitmap(pictureBox1->Image);

		//Загружаем ЧБ фото
		pictureBox2->Image = recognize::Max_Poling(myBitmap);
		pictureBox2->Refresh();
		progress->progressBar1->PerformStep();
		progress->Close();
		MessageBox::Show("Обработка завершена");
		tabControl1->SelectedTab = tabPage3;
	}
}

private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {

	//загрузка картинки 
	System::String^ SFileName;
	openFileDialog2->Title = "Select pictures ";
	//openFileDialog2->Multiselect = false;
	//vector<Bitmap^> ImagesVec;
	Bitmap^ * InputImages;
	string str;
	MyForm2 ^ progress = gcnew MyForm2();
	progress->progressBar1->Maximum = 1;
	//cli::array<Bitmap^>^ Images;
	if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		SFileName = openFileDialog2->FileName->ToString();
		//pictureBox1->Image = Image::FromFile(openFileDialog2->FileName);
		progress->Show();
		progress->Text = ("Идёт обработка изображений. Пожалуйста подождите.");

		label1->Text = SFileName;
		//маршлим строку
		msclr::interop::marshal_context context;
		str = context.marshal_as<std::string>(SFileName);
		//System::Runtime::InteropServices::Marshal::StringToCoTaskMemUni(FileName);
		recognize::Gaussian(str);
		pictureBox2->Image = Image::FromFile(openFileDialog2->FileName);
		pictureBox1->Image = Image::FromFile("gaussian.bmp");
		progress->progressBar1->PerformStep();
		progress->Close();
		MessageBox::Show("Обработка завершена");
		tabControl1->SelectedTab = tabPage3;
	}
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	//надо будет в качестве теста запилить логирование отклонений:
	//матрица среднего значения/значение пикселя * 100%

	System::String^ FileName;
	openFileDialog1->Title = "Выберите сравниваемый снимок ";
	openFileDialog1->Multiselect = false;

	MyForm2 ^ progress = gcnew MyForm2();
	progress->progressBar1->Maximum = 1;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		FileName = openFileDialog1->FileName->ToString();
		//pictureBox2->Image = Image::FromFile(openFileDialog2->FileName);
		//Bitmap ^refimage = gcnew Bitmap(Image::FromFile(openFileDialog2->FileName));

		//label1->Text = FileName;
		progress->Show();
		progress->Text = ("Идёт обработка изображения. Пожалуйста подождите ");
		Bitmap ^inimage = gcnew Bitmap(Image::FromFile(FileName));
		pictureBox2->Image = Image::FromFile("AVG_IMG.bmp");
		vector<std::vector<int>> FINAL_AVG_COLOR;
		ifstream f;
		f.open("AVG.txt");
		FINAL_AVG_COLOR = ArrayToFromFile::Avg_FileToVec(f);
		//тестовое задание нового размера на основе предыдущей картинки
		//Bitmap ^image = gcnew Bitmap(FINAL_AVG_COLOR.size(), FINAL_AVG_COLOR[0].size());
		//for (int x = 0; x < image->Width; x++)
		//{
		//	for (int y = 0; y < image->Height; y++)
		//	{
		//		//делаем картинку ЧБ
		//		image->SetPixel(x, y, Color::FromArgb(FINAL_AVG_COLOR[x][y], FINAL_AVG_COLOR[x][y], FINAL_AVG_COLOR[x][y]));
		//	}
		//}
		//image->Save("AVG_IMG.bmp");
		recognize::Difference(FINAL_AVG_COLOR, inimage);
		pictureBox1->Image = Image::FromFile("dam_map_1.bmp");
		progress->progressBar1->PerformStep();
		MessageBox::Show("Обработка завершена");
		tabControl1->SelectedTab = tabPage3;
	}
	progress->Close();
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	//загрузка картинки 
	openFileDialog1->Multiselect = true;
	System::String^ FileName;//имя файла
	openFileDialog1->Title = "Выберите снимки образца ";
	vector<std::vector<int>> AVG_COLOR;//вектор пикселей входного изображения
	vector<std::vector<int>> TEMP_AVG_COLOR;//вектор для суммирования
	vector<std::vector<int>> FINAL_AVG_COLOR;//вектор средних значений
	MyForm2 ^ progress = gcnew MyForm2();
	int counter = 0;//счётчик изображений
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		progress->progressBar1->Maximum = openFileDialog1->FileNames->Length - 1;
		FileName = openFileDialog1->FileName->ToString();
		progress->Show();
		
		for each (FileName in openFileDialog1->FileNames)//в цикле каждый раз создаём новую картинку и суммируем значения для пикселя
		{
			Bitmap ^image = gcnew Bitmap(Image::FromFile(FileName));
			if (TEMP_AVG_COLOR.capacity() == 0) //задаём размер вектору, так как он нулевой
			{ 
				TEMP_AVG_COLOR.resize(image->Width); 
				for (int s = 0; s < image->Height; s++) 
				{TEMP_AVG_COLOR[s].resize(image->Height);} 
			}
			AVG_COLOR = ImageToArray::ImgToVec(image);//получаем вектор пикселей изображения
			for (int i = 0;  i <AVG_COLOR.size(); i++)
			{
				for (int j = 0; j < AVG_COLOR.size(); j++)
				{TEMP_AVG_COLOR[i][j] += AVG_COLOR[i][j];}//суммируем значения на пиксель
			}
			progress->progressBar1->PerformStep();
			counter++;//увеличиваем счётчик картинок
			progress->Text = ("Идёт обработка изображений. Обработано " + counter.ToString() + " из " + openFileDialog1->FileNames->Length.ToString());
			//label6->Text = ("Идёт обработка изображений. Обработано " + counter.ToString() + " из " + openFileDialog1->FileNames->Length.ToString());
			//progress->label1->Text = ("Идёт обработка изображений. Обработано " + counter.ToString() + " из " + openFileDialog1->FileNames->Length.ToString());
			
		}
		//progressBar1->Maximum = (AVG_COLOR.size()+ AVG_COLOR.size())*counter;

		FINAL_AVG_COLOR = ImageToArray::AVG_Color(TEMP_AVG_COLOR, counter);//получаем вектор средних значений
		ArrayToFromFile::Avg_VecToFile(FINAL_AVG_COLOR);//записываем в файл
		Bitmap ^image = gcnew Bitmap(FINAL_AVG_COLOR.size(), FINAL_AVG_COLOR[0].size());//наложенные друг на друга картинки
		for (int x = 0; x < image->Width; x++)
		{
			for (int y = 0; y < image->Height; y++)
			{
				image->SetPixel(x, y, Color::FromArgb(FINAL_AVG_COLOR[x][y], FINAL_AVG_COLOR[x][y], FINAL_AVG_COLOR[x][y]));
			}
		}
		image->Save("AVG_IMG.bmp");//сохраняем картинку
								   //progressBar1->Value = 0;
		progress->Close();
		MessageBox::Show("Матрица создана");
	}	

}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	//std::vector<Bitmap> pbitmaps;

}






private: System::Void tabPage1_Click(System::Object^  sender, System::EventArgs^  e) {
}
//private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
//}
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
	pictureBox3->Visible = false;
	label6->Visible = false;
	richTextBox1->Visible = false;
}
private: System::Void menuStrip1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	pictureBox3->Visible = false;
	label6->Visible = false;
	richTextBox1->Visible = false;
}
};
}

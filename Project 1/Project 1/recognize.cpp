#include "recognize.h"



vector<std::vector<double>> recognize::Randomize_weights()
{
	int t = 4 + 2;//количеств строк
	srand(time(NULL));
	//создаём вектор рандомных весов
	ofstream f;
	f.open("ranom_weights.txt");
	vector<std::vector<double>> rand_weights(6, vector <double>(5));
	//rand_weights.resize(4,  std::vector<double>(500 * 500));
	f.precision(2);
	f.fixed;
	for (int i = 0; i < t; i++) {//строки

		//запись размеров вектора-------
		if (i == 0) { f << 4 << "\n"; i++; f << 5 << "\n"; i++; }
		//------------------------------
		if (i >= 3) { f << "\n"; }

		for (int j = 0; j < (5); j++) {//столбцы
			rand_weights[i][j] = (double)(rand()) / RAND_MAX;
			f <<rand_weights[i][j]<<"|";
		}
		//if (i < 3) { f << "\n"; }	
	}
	f.close();
	return rand_weights;
}

std::vector<std::vector<double>> recognize::FileToVecWieights()//загрузка весов из файла
{
	ifstream in;
	in.open("ranom_weights.txt");//открываем файл для вывода инфы из файла в прогу
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
					x = std::stoi(str);
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
					y = std::stoi(str);
					f++;
					break;
				}
			}//это и будет размерность вектора
		}
		vector<vector<double>> blackwhitevec(x, vector <double>(y));//получив размер вектора создаём его
															  //-------------------------------------------
		int t = x + 2;//для ограничителя
		for (int i = 2; i < t; i++)//игнорим 2 первые строки, так как они задают размер вектора
		{
			for (int j = 0; j < y; j++)
			{
				dig = ' ';
				str = ' ';
				while (dig != '|') 
				{
				in >> dig;
				if (dig == '|') { break; }
				str += dig;
				
				//break;
				}
				blackwhitevec[i-2][j] = stod(str);
			}
		}
		in.close(); // закрываем файл
		return blackwhitevec;
	}
}

Bitmap ^ recognize::Recognized_Image(Bitmap ^ inimg, Bitmap ^ refimg)
{
	Bitmap ^inimage = gcnew Bitmap(inimg);//входное изображение
	Bitmap ^refimage = gcnew Bitmap(refimg);//образец
	Bitmap ^clone_inimage = gcnew Bitmap(inimg);//клонируем входное изображени для обозначения порока
	int inaverageValueColor = 0;	//среднее арифметическое значения RGB для каждого пикселя
	int refaverageValueColor = 0;	//среднее арифметическое значения RGB для каждого пикселя
	int bx=NULL, by= NULL, ex= NULL, ey= NULL;//координаты выделяющего порок прямоугольника
	for (int y = 0; y < inimg->Height; y++)
	{
		for (int x = 0; x < inimg->Width; x++)
		{
			//узнаём средне рифметическое
			inaverageValueColor = (Convert::ToInt16(Color(inimg->GetPixel(x, y)).R) + Convert::ToInt16(Color(inimg->GetPixel(x, y)).G) + Convert::ToInt16(Color(inimg->GetPixel(x, y)).B)) / 3;
			refaverageValueColor = (Convert::ToInt16(Color(refimg->GetPixel(x, y)).R) + Convert::ToInt16(Color(refimg->GetPixel(x, y)).G) + Convert::ToInt16(Color(refimg->GetPixel(x, y)).B)) / 3;
			//делаем картинку ЧБ
			//image->SetPixel(x, y, Color::FromArgb(inaverageValueColor, inaverageValueColor, inaverageValueColor));
			if (inaverageValueColor!= refaverageValueColor)
			{
				if (bx == NULL || bx>x) { bx = x; }//верхний x
				if(by==NULL){by = y;}//верхний у
				if (ex == NULL || ex<x) { ex = x; }//нижний x
				if (ey == NULL || ey<y) { ey = y; }//нижний y
			}
		}
	}
	Graphics ^ g = Graphics::FromImage(clone_inimage);//создаём объект Graphics
	Pen ^ blackPen = gcnew Pen(Color::Green, 5);
	g->DrawRectangle(blackPen, bx-5, by-5, ex-bx+5+5, ey-by+5+5);
	return clone_inimage;
}

Bitmap ^ recognize::Max_Poling(Bitmap ^ inimg)
{
	Bitmap ^ rezimg = gcnew Bitmap(inimg->Width/2, inimg->Height / 2);
	int i=0;//итераторы для выходного вектора
	double a11, a12, a21, a22;
	std::vector<double> temp_of_grid(vector <double>(4));//временные данные в сетке
	vector<std::vector<double>> result_of_poling((inimg->Height/2), vector <double>(inimg->Width / 2));//результат пулинга
	std::vector<double> temp_of_poling(vector <double>((inimg->Width / 2)*(inimg->Height / 2)));//для хранения максимальных значений исходного вектора
	vector<std::vector<double>> AVG_Color((inimg->Height), vector <double>(inimg->Width));
	AVG_Color = ImageToArray::AVG_Color(inimg);//вектор средних цветов для пулинга
	//исходный вектор
	for (int y = 0; y < inimg->Height; y+=2)
	{
		for (int x = 0; x < inimg->Width; x+=2)
		{
			temp_of_grid.clear();
			temp_of_grid.push_back(AVG_Color[y][x]);
			temp_of_grid.push_back(AVG_Color[y][x+1]);
			temp_of_grid.push_back(AVG_Color[y+1][x]);
			temp_of_grid.push_back(AVG_Color[y+1][x + 1]);
			temp_of_poling[i]=(*std::max_element(temp_of_grid.begin(), temp_of_grid.end()));
			i++;
		}
	}
	int z = 0;
	for (int y = 0; y < inimg->Height/2; y ++)
	{
		for (int x = 0; x < inimg->Width/2; x ++)
		{
			result_of_poling[y][x] = temp_of_poling[z];
			z++;
			rezimg->SetPixel(y, x, Color::FromArgb(result_of_poling[y][x], result_of_poling[y][x], result_of_poling[y][x]));
		}
	}
	rezimg->Save("polled.bmp");
	return rezimg;
	//throw gcnew System::NotImplementedException();
	// TODO: вставьте здесь оператор return
}

 void recognize::Gaussian(std::string FileName)
{
	//Bitmap ^inimage = gcnew Bitmap(inimg);//входное изображение

	Mat  src; 
	int  DELAY_BLUR = 100;
	int  MAX_KERNEL_LENGTH = 31;
	Mat  dst;
	src = imread(FileName, 1);
	dst = src.clone();
	/// Применение гауссовского размытия 
	for (int i = 1; i < MAX_KERNEL_LENGTH; i = i + 2)
	{
		GaussianBlur(src, dst, cv::Size(i, i), 0, 0);
	}
	imwrite("gaussian.bmp", dst);
	//throw gcnew System::NotImplementedException();
	//// TODO: вставьте здесь оператор return
}

recognize::recognize()
{
}

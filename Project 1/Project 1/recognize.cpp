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

std::vector<std::vector<double>> recognize::FileToVecWieights()//этот метод ещё не реализован!!!
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

recognize::recognize()
{
}

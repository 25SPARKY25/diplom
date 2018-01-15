#include "recognize.h"



vector<std::vector<double>> recognize::Randomize_weights()
{
	srand(time(NULL));
	//создаём вектор рандомных весов
	ofstream f;
	f.open("ranom_weights.txt");
	vector<std::vector<double>> rand_weights(4, vector <double>(5));
	//rand_weights.resize(4,  std::vector<double>(500 * 500));
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < (5); j++) {
			rand_weights[i][j] = (double)(rand()) / RAND_MAX;
			f <<rand_weights[i][j]<<" ";
		}
		if (i < 3) { f << "\n"; }	
	}
	f.close();
	return rand_weights;
}

std::vector<std::vector<double>> recognize::FileToVecWieights(std::ifstream & f)//этот метод ещё не реализован!!!
{
	ifstream in;
	in.open("1.txt");//открываем файл для вывода инфы из файла в прогу
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
			for (int z = 0; z < 3; z++)//этот цикл для считывания числа из строки
			{
				in >> dig;//посимвольно считываем размер
				if (f == 0) { str += dig; y = std::stoi(str); }//из символов получаем строку и конвертируем в число
				else { dig = ' '; str += dig; x = std::stoi(str); }//это и будет размерность вектора
			}
		}
		vector<vector<int>> blackwhitevec(x, vector <int>(y));//получив размер вектора создаём его
															  //-------------------------------------------
		int t = x + 2;//для ограничителя
		for (int i = 2; i < t; i++)//игнорим 2 первые строки, так как они задают размер вектора
		{
			for (int j = 0; j < y; j++)
			{
				in >> dig;
				blackwhitevec[j][i - 2] = Convert::ToInt16(dig);
			}
		}
		in.close(); // закрываем файл
		return blackwhitevec;
	}
}

recognize::recognize()
{
}

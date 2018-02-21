#include "ArrayToFromFile.h"

using namespace std;

 void ArrayToFromFile::VecToFile(std::vector<std::vector<int>> blackwhitevec,  int x, int y)
{
	ofstream f;
	f.open("1.txt");
	int t = x + 2;
	if (f.is_open()) {
		for (int i = 0; i < t; i++)
		{
			//запись размеров вектора-------
			if (i == 0) { f << y << "\n"; i++; f << x << "\n"; i++; }
			//if (i == 1 && i != 0) { f << x << "\n"; i++; }
			//------------------------------
			if (i>=3){ f << "\n"; }
			//if (i == 0)
			//{
			//	f << y << " " << x;//попробуем записать размер вектора в файл перво строкой, 
			//					   //чтобы можно было восстанавливать картины разных размеров
			//}
			//f << "\n";
			for (int j = 0; j < y; j++)
			{
				f << blackwhitevec[i-2][j]; 
			}
		}
	}
	f.close();
}

 void ArrayToFromFile::Avg_VecToFile(std::vector<std::vector<int>> Sum_Avg_Vec)
 {
	 ofstream f;
	 f.open("AVG.txt");
	 int t = Sum_Avg_Vec.size() + 2;
	 if (f.is_open()) {
		 for (int i = 0; i < t; i++)
		 {
			 //запись размеров вектора-------
			 if (i == 0) { f << Sum_Avg_Vec.size() << "\n"; i++; f << Sum_Avg_Vec.size(); i++; }
			 //if (i == 1 && i != 0) { f << x << "\n"; i++; }
			 //------------------------------
			// if (i >= 3) { f << "\n"; }
			 //if (i == 0)
			 //{
			 //	f << y << " " << x;//попробуем записать размер вектора в файл перво строкой, 
			 //					   //чтобы можно было восстанавливать картины разных размеров
			 //}
			 //f << "\n";
			 for (int j = 0; j < Sum_Avg_Vec.size(); j++)
			 {
				 f << "\n" << Sum_Avg_Vec[i - 2][j];
			 }
		 }
	 }
	 f.close();
 }

 std::vector<std::vector<int>> ArrayToFromFile::Avg_FileToVec(std::ifstream & ff)
 {
	// ifstream in;
	 //in.open("AVG.txt");//открываем файл для вывода инфы из файла в прогу
	 char dig;//символ в файле, может принимать значенио 0 или 1 или размер вектора
	 int x, y;//размеры вектора
	 string str;//переменная для записи числа()
	 if (!ff.is_open()) // если файл не открыт
		 cout << "Файл не может быть открыт!\n"; // сообщить об этом
	 else
	 {
		 //узнаём размеры вектора из файла------------
		 for (int f = 0; f < 2; f++)//это цикл для пробега по 2 первым строкам в файле(эти строки хранят размерность вектора) 
		 {
			 str = "";
			 while (getline(ff, str)) {
				 str = str;
				 break;
			 }
			 if (f == 0) { y = std::stoi(str); }//из символов получаем строку и конвертируем в число
			 if (f == 1) { x = std::stoi(str); }
		 }
		 vector<vector<int>> output_avg(x, vector <int>(y));//получив размер вектора создаём его
															   //-------------------------------------------
		 int t = x + 2;//для ограничителя
		 for (int i = 2; i < t; i++)//игнорим 2 первые строки, так как они задают размер вектора
		 {
			 for (int j = 0; j < y; j++)
			 {
				 str = "";
				 while (getline(ff, str)) {
					 str = str;
					 break;
				 }
				 output_avg[i - 2][j] = std::stoi(str);
			 }
		 }
		 ff.close(); // закрываем файл
		 return output_avg;
	 }
 }

 std::vector<std::vector<int>> ArrayToFromFile::FileToVec(std::ifstream &f)
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
			 str = "";
			 while (getline(in, str)) {
				 str = str;
				 break;
			 }
					 if (f == 0) {  y = std::stoi(str); }//из символов получаем строку и конвертируем в число
					 if (f == 1) {  x = std::stoi(str); }
		 }
		 vector<vector<int>> blackwhitevec(x, vector <int>(y));//получив размер вектора создаём его
		 //-------------------------------------------
		 int t = x + 2;//для ограничителя
		 for (int i = 2; i < t; i++)//игнорим 2 первые строки, так как они задают размер вектора
		 {
			 for (int j = 0; j < y; j++)
			 {
				 in >> dig;
				 blackwhitevec[i-2][j]=Convert::ToInt16(dig);
			 }
		 }
		 in.close(); // закрываем файл
		 return blackwhitevec;
	 }
 }

ArrayToFromFile::ArrayToFromFile()
{
}

ArrayToFromFile::~ArrayToFromFile()
{
}
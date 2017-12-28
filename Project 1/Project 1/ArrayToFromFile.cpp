#include "ArrayToFromFile.h"

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
				f << blackwhitevec[j][i-2]; 
			}
		}
	}

	f.close();
}

 std::vector<std::vector<int>> ArrayToFromFile::FileToVec(std::ifstream &f)
 {
	 char dig;//символ в файле, может принимать значенио 0 или 1
	 int x, y;//размеры вектора
	 int t = x + 2;
	 vector<vector<int>> blackwhitevec(268, vector <int>(268));
	 if (!f.is_open()) // если файл не открыт
		 cout << "Файл не может быть открыт!\n"; // сообщить об этом
	 else		
	 {
		 //узнаём размеры вектора из файла------------
		 for (int z = 0; z < 2; z++)
		 {
			 f >> dig;
			 if (z==0) { y = Convert::ToInt16(dig); }
			 else { x = Convert::ToInt16(dig); } 
		 }
		 //-------------------------------------------
		 for (int i = 2; i < t; i++)
		 {
			 for (int j = 0; j < y; j++)
			 {
				 //f << "Test";
				 f >> dig;
				 blackwhitevec[j][i-2]=Convert::ToInt16(dig);
			 }
		 }
		 f.close(); // закрываем файл
	 }
	 return blackwhitevec;
 }

ArrayToFromFile::ArrayToFromFile()
{
}

ArrayToFromFile::~ArrayToFromFile()
{
}
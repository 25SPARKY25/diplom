#include "ArrayToFromFile.h"

 void ArrayToFromFile::VecToFile(std::vector<std::vector<int>> blackwhitevec,  int x, int y)
{
	ofstream f;
	f.open("1.txt");
	if (f.is_open()) {
		for (int i = 0; i < x; i++)
		{
			if (i!=0){ f << "\n"; }
			for (int j = 0; j < y; j++)
			{
				//f << "Test";
				f << blackwhitevec[j][i];
			}
		}
	}

	f.close();
}

 std::vector<std::vector<int>> ArrayToFromFile::FileToVec(std::ifstream &f)
 {
	 char dig;//символ в файле, может принимать значенио 0 или 1
	 vector<vector<int>> blackwhitevec(268, vector <int>(268));
	 if (!f.is_open()) // если файл не открыт
		 cout << "Файл не может быть открыт!\n"; // сообщить об этом
	 else		
	 {
		 for (int i = 0; i < 100; i++)
		 {
			 for (int j = 0; j < 100; j++)
			 {
				 //f << "Test";
				 f >> dig;
				 blackwhitevec[j][i]=Convert::ToInt16(dig);
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
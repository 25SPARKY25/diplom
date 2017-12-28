#include "ArrayToFromFile.h"

 void ArrayToFromFile::VecToFile(std::vector<std::vector<int>> blackwhitevec,  int x, int y)
{
	ofstream f;
	f.open("1.txt");
	if (f.is_open()) {
		for (int i = 0; i < (x+2); i++)
		{
			if (i!=0){ f << "\n"; }
			//if (i == 0)
			//{
			//	f << y << " " << x;//��������� �������� ������ ������� � ���� ����� �������, 
			//					   //����� ����� ���� ��������������� ������� ������ ��������
			//}
			//f << "\n";
			for (int j = 0; j < y; j++)
			{
				//������ �������� �������-------
				if (i == 0) { f << y << "\n"; i++; }
				if (i == 1 && i!=0) { f << x << "\n"; i++;}
				//------------------------------
				//f << "Test";
				else {f << blackwhitevec[j][i]; }
			}
		}
	}

	f.close();
}

 std::vector<std::vector<int>> ArrayToFromFile::FileToVec(std::ifstream &f)
 {
	 char dig;//������ � �����, ����� ��������� �������� 0 ��� 1
	 int x, y;//������� �������
	 vector<vector<int>> blackwhitevec(268, vector <int>(268));
	 if (!f.is_open()) // ���� ���� �� ������
		 cout << "���� �� ����� ���� ������!\n"; // �������� �� ����
	 else		
	 {
		 //����� ������� ������� �� �����------------
		 for (int z = 0; z < 2; z++)
		 {
			 f >> dig;
			 if (z==0) { y = Convert::ToInt16(dig); }
			 else { x = Convert::ToInt16(dig); } 
		 }
		 //-------------------------------------------
		 for (int i = 2; i < (x+2); i++)
		 {
			 for (int j = 0; j < y; j++)
			 {
				 //f << "Test";
				 f >> dig;
				 blackwhitevec[j][i]=Convert::ToInt16(dig);
			 }
		 }
		 f.close(); // ��������� ����
	 }
	 return blackwhitevec;
 }

ArrayToFromFile::ArrayToFromFile()
{
}

ArrayToFromFile::~ArrayToFromFile()
{
}
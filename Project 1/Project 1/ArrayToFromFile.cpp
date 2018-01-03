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
			//������ �������� �������-------
			if (i == 0) { f << y << "\n"; i++; f << x << "\n"; i++; }
			//if (i == 1 && i != 0) { f << x << "\n"; i++; }
			//------------------------------
			if (i>=3){ f << "\n"; }
			//if (i == 0)
			//{
			//	f << y << " " << x;//��������� �������� ������ ������� � ���� ����� �������, 
			//					   //����� ����� ���� ��������������� ������� ������ ��������
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
	 ifstream in;
	 in.open("1.txt");//��������� ���� ��� ������ ���� �� ����� � �����
	 char dig;//������ � �����, ����� ��������� �������� 0 ��� 1 ��� ������ �������
	 int x, y;//������� �������
	 string str;//���������� ��� ������ �����()
	 if (!in.is_open()) // ���� ���� �� ������
		 cout << "���� �� ����� ���� ������!\n"; // �������� �� ����
	 else		
	 {
		 //����� ������� ������� �� �����------------
		 for (int f = 0; f < 2; f++)//��� ���� ��� ������� �� 2 ������ ������� � �����(��� ������ ������ ����������� �������) 
		 {
			 for (int z = 0; z < 3; z++)//���� ���� ��� ���������� ����� �� ������
			 {
					 in >> dig;//����������� ��������� ������
					 if (f == 0) { str += dig; y = std::stoi(str); }//�� �������� �������� ������ � ������������ � �����
					 else { dig = ' '; str += dig; x = std::stoi(str); }//��� � ����� ����������� �������
			 }
		 }
		 vector<vector<int>> blackwhitevec(x, vector <int>(y));//������� ������ ������� ������ ���
		 //-------------------------------------------
		 int t = x + 2;//��� ������������
		 for (int i = 2; i < t; i++)//������� 2 ������ ������, ��� ��� ��� ������ ������ �������
		 {
			 for (int j = 0; j < y; j++)
			 {
				 in >> dig;
				 blackwhitevec[j][i-2]=Convert::ToInt16(dig);
			 }
		 }
		 in.close(); // ��������� ����
		 return blackwhitevec;
	 }
 }

ArrayToFromFile::ArrayToFromFile()
{
}

ArrayToFromFile::~ArrayToFromFile()
{
}
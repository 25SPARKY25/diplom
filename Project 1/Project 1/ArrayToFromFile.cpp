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
			 //������ �������� �������-------
			 if (i == 0) { f << Sum_Avg_Vec.size() << "\n"; i++; f << Sum_Avg_Vec.size(); i++; }
			 //if (i == 1 && i != 0) { f << x << "\n"; i++; }
			 //------------------------------
			// if (i >= 3) { f << "\n"; }
			 //if (i == 0)
			 //{
			 //	f << y << " " << x;//��������� �������� ������ ������� � ���� ����� �������, 
			 //					   //����� ����� ���� ��������������� ������� ������ ��������
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

 void ArrayToFromFile::Difference(std::vector<std::vector<int>> Sum_Avg_Vec, Bitmap ^ img)
 {
	 vector<std::vector<int>> refvec = ImageToArray::ImgToVec(img);
	// vector<std::vector<int>> sumvec = Sum_Avg_Vec;
	 ofstream f;
	 f.open("Difference.txt");
	 int t = Sum_Avg_Vec.size() + 2;
	 double templ = 0;
	 double max, min = 0;
	 if (f.is_open()) {
		 for (int i = 0; i < t; i++)
		 {
			 //������ �������� �������-------
			 if (i == 0) { f << Sum_Avg_Vec.size() << "\n"; i++; f << Sum_Avg_Vec.size(); i++; }
			 for (int j = 0; j < Sum_Avg_Vec.size(); j++)
			 {
				 if (Sum_Avg_Vec[i - 2][j] >= refvec[i - 2][j]){
					 templ = (Convert::ToDouble(Sum_Avg_Vec[i - 2][j] - refvec[i - 2][j]) / Convert::ToDouble(Sum_Avg_Vec[i - 2][j])) * 100;
					 f << "\n" << templ;
				 }
				 else
				 {
					 templ = (Convert::ToDouble(refvec[i - 2][j] - Sum_Avg_Vec[i - 2][j]) / Convert::ToDouble(refvec[i - 2][j])) * 100;
					 f << "\n" << templ;
				 }
				 if (max <= templ) { max = templ; }
				 if (min >= templ) { min = templ; }
			 }
		 }
	 }
	 f << "\n" << "min=" << min;
	 f << "\n" << "max=" << max;
	 f.close();
 }

 std::vector<std::vector<int>> ArrayToFromFile::Avg_FileToVec(std::ifstream & ff)
 {
	// ifstream in;
	 //in.open("AVG.txt");//��������� ���� ��� ������ ���� �� ����� � �����
	 char dig;//������ � �����, ����� ��������� �������� 0 ��� 1 ��� ������ �������
	 int x, y;//������� �������
	 string str;//���������� ��� ������ �����()
	 if (!ff.is_open()) // ���� ���� �� ������
		 cout << "���� �� ����� ���� ������!\n"; // �������� �� ����
	 else
	 {
		 //����� ������� ������� �� �����------------
		 for (int f = 0; f < 2; f++)//��� ���� ��� ������� �� 2 ������ ������� � �����(��� ������ ������ ����������� �������) 
		 {
			 str = "";
			 while (getline(ff, str)) {
				 str = str;
				 break;
			 }
			 if (f == 0) { y = std::stoi(str); }//�� �������� �������� ������ � ������������ � �����
			 if (f == 1) { x = std::stoi(str); }
		 }
		 vector<vector<int>> output_avg(x, vector <int>(y));//������� ������ ������� ������ ���
															   //-------------------------------------------
		 int t = x + 2;//��� ������������
		 for (int i = 2; i < t; i++)//������� 2 ������ ������, ��� ��� ��� ������ ������ �������
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
		 ff.close(); // ��������� ����
		 return output_avg;
	 }
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
			 str = "";
			 while (getline(in, str)) {
				 str = str;
				 break;
			 }
					 if (f == 0) {  y = std::stoi(str); }//�� �������� �������� ������ � ������������ � �����
					 if (f == 1) {  x = std::stoi(str); }
		 }
		 vector<vector<int>> blackwhitevec(x, vector <int>(y));//������� ������ ������� ������ ���
		 //-------------------------------------------
		 int t = x + 2;//��� ������������
		 for (int i = 2; i < t; i++)//������� 2 ������ ������, ��� ��� ��� ������ ������ �������
		 {
			 for (int j = 0; j < y; j++)
			 {
				 in >> dig;
				 blackwhitevec[i-2][j]=Convert::ToInt16(dig);
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
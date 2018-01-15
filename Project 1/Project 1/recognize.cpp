#include "recognize.h"



vector<std::vector<double>> recognize::Randomize_weights()
{
	srand(time(NULL));
	//������ ������ ��������� �����
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

std::vector<std::vector<double>> recognize::FileToVecWieights(std::ifstream & f)//���� ����� ��� �� ����������!!!
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
				blackwhitevec[j][i - 2] = Convert::ToInt16(dig);
			}
		}
		in.close(); // ��������� ����
		return blackwhitevec;
	}
}

recognize::recognize()
{
}

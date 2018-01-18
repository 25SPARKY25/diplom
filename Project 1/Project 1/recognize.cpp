#include "recognize.h"



vector<std::vector<double>> recognize::Randomize_weights()
{
	int t = 4 + 2;//��������� �����
	srand(time(NULL));
	//������ ������ ��������� �����
	ofstream f;
	f.open("ranom_weights.txt");
	vector<std::vector<double>> rand_weights(6, vector <double>(5));
	//rand_weights.resize(4,  std::vector<double>(500 * 500));
	f.precision(2);
	f.fixed;
	for (int i = 0; i < t; i++) {//������

		//������ �������� �������-------
		if (i == 0) { f << 4 << "\n"; i++; f << 5 << "\n"; i++; }
		//------------------------------
		if (i >= 3) { f << "\n"; }

		for (int j = 0; j < (5); j++) {//�������
			rand_weights[i][j] = (double)(rand()) / RAND_MAX;
			f <<rand_weights[i][j]<<"|";
		}
		//if (i < 3) { f << "\n"; }	
	}
	f.close();
	return rand_weights;
}

std::vector<std::vector<double>> recognize::FileToVecWieights()//���� ����� ��� �� ����������!!!
{
	ifstream in;
	in.open("ranom_weights.txt");//��������� ���� ��� ������ ���� �� ����� � �����
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
			//in >> dig;//����������� ��������� ������
			if (f == 0) {
				while (dig != '\n') {
					in >> dig;//����������� ��������� ������
					str += dig;
					x = std::stoi(str);
					//f++;
					break;
				}

			}//�� �������� �������� ������ � ������������ � �����

			else {
				dig = ' ';
				str = ' ';
				while (dig != '\n') {
					in >> dig;//����������� ��������� ������
					str += dig;
					y = std::stoi(str);
					f++;
					break;
				}
			}//��� � ����� ����������� �������
		}
		vector<vector<double>> blackwhitevec(x, vector <double>(y));//������� ������ ������� ������ ���
															  //-------------------------------------------
		int t = x + 2;//��� ������������
		for (int i = 2; i < t; i++)//������� 2 ������ ������, ��� ��� ��� ������ ������ �������
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
		in.close(); // ��������� ����
		return blackwhitevec;
	}
}

recognize::recognize()
{
}

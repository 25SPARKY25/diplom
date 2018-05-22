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

std::vector<std::vector<double>> recognize::FileToVecWieights()//�������� ����� �� �����
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

Bitmap ^ recognize::Recognized_Image(Bitmap ^ inimg, Bitmap ^ refimg)
{
	Bitmap ^inimage = gcnew Bitmap(inimg);//������� �����������
	Bitmap ^refimage = gcnew Bitmap(refimg);//�������
	Bitmap ^clone_inimage = gcnew Bitmap(inimg);//��������� ������� ���������� ��� ����������� ������
	int inaverageValueColor = 0;	//������� �������������� �������� RGB ��� ������� �������
	int refaverageValueColor = 0;	//������� �������������� �������� RGB ��� ������� �������
	int bx=NULL, by= NULL, ex= NULL, ey= NULL;//���������� ����������� ����� ��������������
	for (int y = 0; y < inimg->Height; y++)
	{
		for (int x = 0; x < inimg->Width; x++)
		{
			//����� ������ �������������
			inaverageValueColor = (Convert::ToInt16(Color(inimg->GetPixel(x, y)).R) + Convert::ToInt16(Color(inimg->GetPixel(x, y)).G) + Convert::ToInt16(Color(inimg->GetPixel(x, y)).B)) / 3;
			refaverageValueColor = (Convert::ToInt16(Color(refimg->GetPixel(x, y)).R) + Convert::ToInt16(Color(refimg->GetPixel(x, y)).G) + Convert::ToInt16(Color(refimg->GetPixel(x, y)).B)) / 3;
			//������ �������� ��
			//image->SetPixel(x, y, Color::FromArgb(inaverageValueColor, inaverageValueColor, inaverageValueColor));
			if (inaverageValueColor!= refaverageValueColor)
			{
				if (bx == NULL || bx>x) { bx = x; }//������� x
				if(by==NULL){by = y;}//������� �
				if (ex == NULL || ex<x) { ex = x; }//������ x
				if (ey == NULL || ey<y) { ey = y; }//������ y
			}
		}
	}
	Graphics ^ g = Graphics::FromImage(clone_inimage);//������ ������ Graphics
	Pen ^ blackPen = gcnew Pen(Color::Green, 5);
	g->DrawRectangle(blackPen, bx-5, by-5, ex-bx+5+5, ey-by+5+5);
	clone_inimage->Save("Recognized.bmp");
	return clone_inimage;
}

Bitmap ^ recognize::Max_Poling(Bitmap ^ inimg)
{
	Bitmap ^ rezimg = gcnew Bitmap(inimg->Height /2, inimg->Width / 2);
	int i=0;//��������� ��� ��������� �������
	double a11, a12, a21, a22;
	std::vector<double> temp_of_grid(vector <double>(4));//��������� ������ � �����
	//vector<std::vector<double>> result_of_poling((inimg->Height/2), vector <double>(inimg->Width / 2));//��������� �������
	std::vector<double> temp_of_poling(vector <double>((inimg->Height / 2)*(inimg->Width / 2)));//��� �������� ������������ �������� ��������� �������

	vector<std::vector<int>> AVG_Color_For_Pooling((inimg->Height), vector <int>(inimg->Width));

	AVG_Color_For_Pooling = ImageToArray::ImgToVec(inimg);//������ ������� ������ ��� �������
	//�������� ������
	for (int y = 0; y < inimg->Height; y+=2)
	{
		for (int x = 0; x < inimg->Width; x+=2)
		{
			temp_of_grid.clear();
			temp_of_grid.push_back(AVG_Color_For_Pooling[y][x]);
			temp_of_grid.push_back(AVG_Color_For_Pooling[y][x+1]);
			temp_of_grid.push_back(AVG_Color_For_Pooling[y+1][x]);
			temp_of_grid.push_back(AVG_Color_For_Pooling[y+1][x + 1]);
			temp_of_poling[i]=(*std::max_element(temp_of_grid.begin(), temp_of_grid.end()));
			i++;
		}
	}
	i = 0;
	for (int y = 0; y < inimg->Height/2; y ++)
	{
		for (int x = 0; x < inimg->Width/2; x ++)
		{
			/*result_of_poling[y][x] = temp_of_poling[z];
			z++;
			rezimg->SetPixel(y, x, Color::FromArgb(result_of_poling[y][x], result_of_poling[y][x], result_of_poling[y][x]));*/
			rezimg->SetPixel(y, x, Color::FromArgb(temp_of_poling[i], temp_of_poling[i], temp_of_poling[i]));
			i++;
		}
	}
	rezimg->Save("polled.bmp");
	return rezimg;
	//throw gcnew System::NotImplementedException();
	// TODO: �������� ����� �������� return
}

 void recognize::Gaussian(std::string FileName)
{
	//Bitmap ^inimage = gcnew Bitmap(inimg);//������� �����������

	cv::Mat  src; 
	//int  DELAY_BLUR = 100;
	int  MAX_KERNEL_LENGTH = 21;
	cv::Mat  dst;
	src = cv::imread(FileName, 1);
	dst = src.clone();
	/// ���������� ������������ �������� 
	for (int i = 1; i < MAX_KERNEL_LENGTH; i = i + 2)
	{
		GaussianBlur(src, dst, cv::Size(i, i), 0, 0);
	}
	cv::imwrite("gaussian.bmp", dst);
	//throw gcnew System::NotImplementedException();
	//// TODO: �������� ����� �������� return
}

 void recognize::Difference(std::vector<std::vector<int>> Sum_Avg_Vec, Bitmap ^ img)
 {
	 vector<std::vector<int>> refvec = ImageToArray::ImgToVec(img);
	 Bitmap ^dam_map_1 = gcnew Bitmap(img->Width, img->Height);
	 Bitmap ^dam_map_2 = gcnew Bitmap(img->Width, img->Height);
	 // vector<std::vector<int>> sumvec = Sum_Avg_Vec;
	 ofstream f;
	 f.open("Difference.txt");
	 int t = Sum_Avg_Vec.size() + 2;
	 double templ, sumtempl = 0;
	 double max, min = 0;
	 int low_h, upper_h = 0;
	 if (f.is_open()) {
		 for (int i = 0; i < t; i++)
		 {
			 //������ �������� �������-------
			 if (i == 0) { f << Sum_Avg_Vec.size() << "\n"; i++; f << Sum_Avg_Vec.size(); i++; }
			 for (int j = 0; j < Sum_Avg_Vec.size(); j++)
			 {
				 //������� ������� � ���������
				 if (Sum_Avg_Vec[i - 2][j] >= refvec[i - 2][j]) {
					 templ = (Convert::ToDouble(Sum_Avg_Vec[i - 2][j] - refvec[i - 2][j]) / Convert::ToDouble(Sum_Avg_Vec[i - 2][j])) * 100;
					 f << "\n" << templ;
				 }
				 else
				 {
					 templ = (Convert::ToDouble(refvec[i - 2][j] - Sum_Avg_Vec[i - 2][j]) / Convert::ToDouble(refvec[i - 2][j])) * 100;
					 f << "\n" << templ;
				 }
				 sumtempl += templ;
				 //������ "����� �����������"
				 if (templ <= 15) { low_h++; dam_map_1->SetPixel(i - 2, j, Color::Green); }
				 if (templ > 15) {
					 upper_h++;  dam_map_2->SetPixel(i - 2, j, Color::Green);
				 }
				 //������� �������� � ������� � ���������
				 if (max <= templ) { max = templ; }
				 if (min >= templ) { min = templ; }
			 }
		 }
	 }
	 //��������� ����� � ���������� � ���� ����������
	 dam_map_1->Save("dam_map_1.bmp");
	 dam_map_2->Save("dam_map_2.bmp");
	 f << "\n" << "min=" << min;
	 f << "\n" << "max=" << max;
	 f << "\n" << "avg_difference=" << (sumtempl / (refvec.size()*refvec[0].size()));//������� ���������� �� �������
																					 //f << "\n" << "low_h=" << low_h<< "\n" << "upper_h=" << upper_h; //�������������� ��� "�������" (>50 � <50)
	 f.close();
 }

recognize::recognize()
{
}

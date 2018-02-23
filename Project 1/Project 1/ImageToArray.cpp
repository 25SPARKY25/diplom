#include "ImageToArray.h"

//через вектора
vector<std::vector<int>> ImageToArray::ImgToVec(Bitmap ^ img)
{
	vector<std::vector<int>> inputvec(img->Width, vector <int>(img->Height));
	for (int x = 0; x < img->Width; x++)
	{
		for (int y = 0; y < img->Height; y++)
		{
			inputvec[x][y] = (Convert::ToInt16(Color(img->GetPixel(x, y)).R) + Convert::ToInt16(Color(img->GetPixel(x, y)).G) + Convert::ToInt16(Color(img->GetPixel(x, y)).B))/3 ;
		}
	}
	return inputvec;
}

vector<std::vector<int>> ImageToArray::InpVecBin(Bitmap ^ img)
{
	vector<std::vector<int>> inputvec(img->Width, vector <int>(img->Height));
	inputvec = ImageToArray::ImgToVec(img);
	for (int x = 0; x < img->Width; x++)
	{
		for (int y = 0; y < img->Height; y++)
		{
			inputvec[x][y] = inputvec[x][y] >= 130 ? 0 : 1;
		}
	}
	return inputvec;
}

vector<std::vector<int>> ImageToArray::BWImageToVector(Bitmap ^ img)
{
	Bitmap ^img1 = ImageToArray::BWImage(img);//получаем картинку из метода, который превращает ееё в ЧБ
	vector<std::vector<int>> OutputBlackWhiteVec= ImageToArray::ImgToVec(img1);
	for (int x = 0; x < img1->Width; x++)
	{
		for (int y = 0; y < img1->Height; y++)
		{
			OutputBlackWhiteVec[x][y] = OutputBlackWhiteVec[x][y] >= 130 ? 0 : 1;
		}
	}
	return OutputBlackWhiteVec;
}

//std::vector<int> ImageToArray::BWImage(Bitmap ^img, std::vector<int> single_inputvec)
//{
//	//int i = 0;
//	for (int x = 0; x < img->Width; x++)
//	{
//		for (int y = 0; y < img->Height; y++)
//		{
//			single_inputvec.push_back(Convert::ToInt16(Color(img->GetPixel(x, y)).R) >= 130 && Convert::ToInt16(Color(img->GetPixel(x, y)).G) >= 130 && Convert::ToInt16(Color(img->GetPixel(x, y)).B) >= 130 ? 0 : 1);
//			//i++;
//		}
//	}
//	return single_inputvec;
//}


vector<std::vector<int>> ImageToArray::Sum_AVG_Color(Bitmap ^img)
{
	vector<std::vector<int>> Sum_AVG_Color(img->Width, vector <int>(img->Height));
	vector<std::vector<int>> templ= ImageToArray::ImgToVec(img);
	for (int x = 0; x < Sum_AVG_Color.size(); x++)
	{
		for (int y = 0; y <Sum_AVG_Color[0].size(); y++)
		{
			Sum_AVG_Color[x][y] += templ[x][y];
			//i++;
		}
	}
	return Sum_AVG_Color;
}

vector<std::vector<int>> ImageToArray::AVG_Color(vector<std::vector<int>> Sum_AVG_Color, int counter)
{
	//vector<std::vector<int>> AVG_Color= ImageToArray::Sum_AVG_Color(img);
	for (int x = 0; x < Sum_AVG_Color.size(); x++)
	{
		for (int y = 0; y < Sum_AVG_Color[0].size(); y++)
		{
			Sum_AVG_Color[x][y] = (Sum_AVG_Color[x][y])/counter;
			//i++;
		}
	}
	return Sum_AVG_Color;
}

int ** ImageToArray::ImgToArr(Bitmap ^ img, int ** InputColorArr)
 {
	 //массив пикселей
	/* int **InputColorArr = new int *[img->Width];
	 for (int i = 0; i < img->Width; ++i)
	 {
		 InputColorArr[i] = new int[img->Height];
	 }*/
	 //разбиение изображения на RGB-канал и заполнение датагрида
	 for (int x = 0; x < img->Width; x++)
	 {
		 for (int y = 0; y < img->Height; y++)
		 {
			 InputColorArr[x][y] = Convert::ToInt16(Color(img->GetPixel(x, y)).R) >= 130 && Convert::ToInt16(Color(img->GetPixel(x, y)).G) >= 130 && Convert::ToInt16(Color(img->GetPixel(x, y)).B) >= 130 ? 0 : 1;
		 }
	 }
	 return InputColorArr;
 }

 Bitmap^ ImageToArray::BWImage(Bitmap ^ img)
 {
	Bitmap ^image=gcnew Bitmap(img);
	int averageValueColor = 0;	//среднее арифметическое значения RGB для каждого пикселя
	 for (int x = 0; x < img->Width; x++)
	 {
		 for (int y = 0; y < img->Height; y++)
		 {
			 //узнаём средне рифметическое
			 averageValueColor = (Convert::ToInt16(Color(img->GetPixel(x, y)).R) + Convert::ToInt16(Color(img->GetPixel(x, y)).G) + Convert::ToInt16(Color(img->GetPixel(x, y)).B))/3;
			 //делаем картинку ЧБ
			 image->SetPixel(x, y, Color::FromArgb(averageValueColor, averageValueColor, averageValueColor));
		 }
	 }
	 return image;
 }

 int ** ImageToArray::BWImageToArray(Bitmap ^img, int ** OutputBlackWhiteArr)
 {
	 Bitmap ^img1=  ImageToArray::BWImage(img);//получаем картинку из метода, который превращает ееё в ЧБ
	 for (int x = 0; x < img1->Width; x++)
	 {
		 for (int y = 0; y < img1->Height; y++)
		 {
			 OutputBlackWhiteArr[x][y] = Convert::ToInt16(Color(img1->GetPixel(x, y)).R) >= 130 && Convert::ToInt16(Color(img1->GetPixel(x, y)).G) >= 130 && Convert::ToInt16(Color(img1->GetPixel(x, y)).B) >= 130 ? 0 : 1;
		 }
	 }
	 return OutputBlackWhiteArr;
 }

 ImageToArray::ImageToArray()
{
}


ImageToArray::~ImageToArray()
{
}

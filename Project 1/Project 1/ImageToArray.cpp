#include "ImageToArray.h"

//через вектора
vector<std::vector<int>> ImageToArray::ImgToVec(Bitmap ^ img, vector<std::vector<int>> inputvec)
{
	for (int x = 0; x < img->Width; x++)
	{
		for (int y = 0; y < img->Height; y++)
		{
			inputvec[x][y] = Convert::ToInt16(Color(img->GetPixel(x, y)).R) >= 130 && Convert::ToInt16(Color(img->GetPixel(x, y)).G) >= 130 && Convert::ToInt16(Color(img->GetPixel(x, y)).B) >= 130 ? 0 : 1;
		}
	}
	return inputvec;
}

vector<std::vector<int>> ImageToArray::BWImageToVector(Bitmap ^ img, vector<std::vector<int>> OutputBlackWhiteVec)
{
	Bitmap ^img1 = ImageToArray::BWImage(img);//получаем картинку из метода, который превращает ееё в ЧБ
	for (int x = 0; x < img1->Width; x++)
	{
		for (int y = 0; y < img1->Height; y++)
		{
			OutputBlackWhiteVec[x][y] = Convert::ToInt16(Color(img1->GetPixel(x, y)).R) >= 130 && Convert::ToInt16(Color(img1->GetPixel(x, y)).G) >= 130 && Convert::ToInt16(Color(img1->GetPixel(x, y)).B) >= 130 ? 0 : 1;
		}
	}
	return OutputBlackWhiteVec;
}

//Bitmap ^ ImageToArray::BWImage(vector<std::vector<int>> inputvec)
//{
//	// TODO: вставьте здесь оператор return
//}

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

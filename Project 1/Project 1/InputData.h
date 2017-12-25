#pragma once

using namespace System::Drawing;

class InputData
{
private:
	int **ArrPix;
	Image ^img();
public:
	InputData();
	~InputData();

	void setArr(int **ArrPix);
	int getArr();
};


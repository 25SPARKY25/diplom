#include "InputData.h"



InputData::InputData()
{

}


Image ^ InputData::img()
{
	// TODO: вставьте здесь оператор return
}

InputData::InputData()
{
}

InputData::~InputData()
{
}

void InputData::setArr(int ** ArrPix)
{
	(*this).ArrPix = InputData::ArrPix;
}

int InputData::getArr()
{
	return **ArrPix;
}

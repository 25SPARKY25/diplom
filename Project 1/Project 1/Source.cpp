//#include "NeuronHeader.h"
//#include <cmath>
//#include <vector>
////#include <QImage>
//
//using namespace std;
///*В качестве функции активации используется т.н. сигма-функция,
//которая обрабатывает сигнал, полученный суммирующей функцией нейрона*/
//float Neuron::Akson::getSignal()
//{
//	return (1 / (1 + exp(-(ownerNeuron->kernelFunction()))));
//}
//
///*Конструктор устанавливает для в качестве нейрона-владельца
//аксона свой объект*/
//Neuron::Neuron()
//{
//	akson.ownerNeuron = this;
//}
//
///*Нейрон запрашивает сигнал у каждого своего дендрита,
//тем самым обращаясь к аксонам нейронов предыдущего слоя,
//которые в свою очередь обращаются к своим нейронам и.т.д,
//то есть сбор сигналов идет цепочкой от самого первого слоя*/
//float Neuron::kernelFunction()
//{
//	float result(0.);
//	for (Dendrit d : dendrits) {
//		result += d.inputAkson->getSignal() * d.weight;
//	}
//	return result;
//}
//
//class KohonenNet
//{
//public:
//
//	/*Создание подвида нейрона: входной нейрон, который только
//	передает входной сигнал дальше*/
//	class InputNeuron : public Neuron {
//	public:
//
//		float kernelFunction() {
//			return value;
//		}
//
//	};
//
//	KohonenNet();
//	vector<Neuron*> inNeurons;
//	vector<Neuron> outNeurons;
//	int handle(QImage);
//
//private:
//	/*Функция обучения нейрона*/
//	void study(Neuron &n, QImage pic);
//
//	/*Картинки с цифрами для обучения*/
//	QString names[9] = { "0.bmp", "1.bmp", "2.bmp", "3.bmp","4.bmp","5.bmp","6.bmp","7.bmp", "8.bmp" };
//	const uint numNumbers = 9;
//};
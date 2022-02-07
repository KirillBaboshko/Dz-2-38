#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class wheels
{
public:
	char* vid = new char;
	int razmerw;
};

class engine
{
public:
	int V;
	int F;
	char* tipe;
	int clap;
	engine()
	{
		 V=0;
		 F=0;
		 tipe = new char;
		 clap=0;
	}
	void Setengine()
	{
		cout << "Введите объём двигателя" << endl;
		cin >> V;
		cout << "Введите количество лошадинные силы" << endl;
		cin >> F;
		cout << "Введите тип двигаеля" << endl;
		cin >> tipe;
		cout << "Введите количество клапанов в двигателе" << endl;
		cin >> clap;
	}
	void Printengine()
	{
		cout << "Объём двигателя:";
		cout << V << endl;
		cout << "Количество лошадинные силы:" ;
		cout << F << endl;
		cout << "Тип двигаеля:";
		cout << tipe << endl;
		cout << "Количество клапанов в двигателе:" ;
		cout << clap << endl;
	}
};


class doors
{
public:
	int razmerd;
	char* tipd = new char;
};

class Marka
{
public:
	char* model = new char;
};

class Box
{
public:
	char* tipb = new char;
};

class corpus
{
public:
	char* color=new char;
	int length;
	int height;
	void Setcorpus()
	{
		cout << "Введите цвет корпуса" << endl;
		cin >> color;
		cout << "Введите длинну корпуса" << endl;
		cin >> length;
		cout << "Введите высоту корпуса" << endl;
		cin >> height;
	}
	void Printcorpus()
	{
		cout << "Цвет корпуса: ";
		cout << color << endl;
		cout << "Длинну корпуса";
		cout << length << endl;
		cout << "Высоту корпуса:";
		cout << height << endl;
	}
};
class Car:public corpus,Box,Marka,doors,engine,wheels
{
public:
	void Set()
	{
		cout << "Введите марку и модель машины" << endl;
		cin >> model;
		Setcorpus();
		Setengine();
	}
	void Print()
	{
		cout << "Машина: ";
		cout << model<<endl << endl;
		cout << "Характеристики корпуса" << endl << endl;
		Printcorpus();
		cout << endl << "Характеристики двигателя" << endl << endl;
		Printengine();
	}
};
int main()
{
	setlocale(0, "rus");
	Car yc;
	yc.Set();
	yc.Print();
	return 0;
}
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
		cout << "������� ����� ���������" << endl;
		cin >> V;
		cout << "������� ���������� ���������� ����" << endl;
		cin >> F;
		cout << "������� ��� ��������" << endl;
		cin >> tipe;
		cout << "������� ���������� �������� � ���������" << endl;
		cin >> clap;
	}
	void Printengine()
	{
		cout << "����� ���������:";
		cout << V << endl;
		cout << "���������� ���������� ����:" ;
		cout << F << endl;
		cout << "��� ��������:";
		cout << tipe << endl;
		cout << "���������� �������� � ���������:" ;
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
		cout << "������� ���� �������" << endl;
		cin >> color;
		cout << "������� ������ �������" << endl;
		cin >> length;
		cout << "������� ������ �������" << endl;
		cin >> height;
	}
	void Printcorpus()
	{
		cout << "���� �������: ";
		cout << color << endl;
		cout << "������ �������";
		cout << length << endl;
		cout << "������ �������:";
		cout << height << endl;
	}
};
class Car:public corpus,Box,Marka,doors,engine,wheels
{
public:
	void Set()
	{
		cout << "������� ����� � ������ ������" << endl;
		cin >> model;
		Setcorpus();
		Setengine();
	}
	void Print()
	{
		cout << "������: ";
		cout << model<<endl << endl;
		cout << "�������������� �������" << endl << endl;
		Printcorpus();
		cout << endl << "�������������� ���������" << endl << endl;
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
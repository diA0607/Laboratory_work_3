#include "Triangle.h"
//S = (a * b) / 2.0
Triangle::Triangle() {
	ifstream in("Triangle.txt");
	int c;
	cout << "1. ������ ��������  ����������." << endl;
	cout << "2. ����� �������� �� �����." << endl;
	cout << "�������:  ";
	cin >> c;
	cout << "\n";
	
	if (c == 1) {
		cout << "������� �������:\na = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		cout << "������ �������� �������� � ����� �� �������?\n1.�� 2.���\n�����: ";
		int Choise2 = 0;
		cin >> Choise2;
		if (Choise2 == 1)
		{
			ofstream out("Triangle.txt");
			out << a << " " << b;
			out.close();
		}
	}
	if (c == 2) {
		if (!in || FileCheck(in)) {
			cout << "���� ���� ��� �� ����������." << endl;
			system("pause");
			c = 1;
		}
		else {
			in >> a >> b;
			cout << "����������� ������:" << endl;
			cout << "������a a = " << a <<endl;
			cout << "������a b = " << b <<endl;
		}
		in.close();
	}
	
}

Triangle::~Triangle() {}

double Triangle::Calc() {
	
		S = (a * b) / 2.0;
		cout << "\n���������:\nS = ";
		return S;
	
	
}
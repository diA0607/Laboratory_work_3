#include "Circle.h"
//S=Pi*r^2
Circle::Circle() {
	ifstream in("Circle.txt");
		int c;
	cout << "1. ������ ��������  ����������." << endl;
	cout << "2. ����� �������� �� �����." << endl;
	cout << "�������:  ";
	cin >> c;
	cout << "\n";
	
	if (c == 1) {
		cout << "������� ������:\nr = ";
		cin >> r;
		cout << "������ �������� �������� � ����� �� �������?\n1.�� 2.���\n�����: ";
		int Choise2 = 0;
		cin >> Choise2;
		if (Choise2 == 1)
		{
			ofstream out("Circle.txt");
			out << r;
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
			in >> r;
			cout << "����������� ������:" << endl;
			cout << "������: r = " << r<< endl;
		}
	}

}

Circle::~Circle() {}

double Circle::Calc() {
	
		S = PI * (r * r);
		cout << "\n���������:\nS = ";
		return S;
	
	
}
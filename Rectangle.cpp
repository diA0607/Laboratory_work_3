#include "Rectangle.h"
//S = a * b;
Square::Square() {
	ifstream in("Rectangle.txt");
	int c;
	cout << "1. ������ ��������  ����������." << endl;
	cout << "2. ����� �������� �� �����." << endl;
	cout << "�������:  ";
	cin >> c;
	cout << "\n";
	
	if (c == 1) {
		cout << "������� �������:"<<endl;
		cout << "a = ";
		cin >> a;
		cout << "\nb = ";
		cin >> b;
		cout << "������ �������� �������� � ����� �� �������?\n1.�� 2.���\n�����: ";
		int Choise2 = 0;
		cin >> Choise2;
		if (Choise2 == 1)
		{
			ofstream out("Rectangle.txt");
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
			in >> a>>b;
			cout << "����������� ������:" << endl;
			cout << "������a a = " << a << endl;
			cout << "������a b = " << b <<endl;
		}
		in.close();
	}
}
Square::~Square() {}

double Square::Calc() {
	
		S = a * b;
		cout << "\n���������:\nS = ";
		return S;
	
}
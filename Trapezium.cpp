#include "Trapezium.h"
//S = h * ((a + b) / 2)
Trapezium::Trapezium() {
	ifstream in("Trapezium.txt");
	int c;
	cout << "1. ������ ��������  ����������." << endl;
	cout << "2. ����� �������� �� �����." << endl;
	cout << "�������:  ";
	cin >> c;
	cout << "\n";
	if (c == 1) {
		cout << "������� ����� ���������:" << endl;
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		cout << "������� ������:\nh = ";
		cin >> h;
		cout << "������ �������� �������� � ����� �� �������?\n1.�� 2.���\n�����: ";
		int Choise2 = 0;
		cin >> Choise2;
		if (Choise2 == 1)
		{
			ofstream out("Trapezium.txt");
			out << a << " " << b << " " << h;
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
			in >> a >> b >> h;
			cout << "����������� ������:" << endl;
			cout << "����� ���������: a = " << a << " b = " << b<< endl;
			cout << "������: h = " << h <<  endl;
		}
		in.close();
	}
}

Trapezium::~Trapezium() {}

double Trapezium::Calc() {

		S = h * ((a + b) / 2.0);
		cout << "\n���������:\nS = ";
		return S;

}
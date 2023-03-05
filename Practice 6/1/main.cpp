#include <iostream>
#include "cone.h"

using namespace std;

int main() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");

	int a, b, c, r, h;

	cone c1(3, 7), c2(1, 2, 3, 5, 10);

	cout << "����� 1: " << c1;
	cout << "������� �����������: " << c1.area() << '\n';
	cout << "�����: " << c1.volume() << '\n';

	cout << "����� 2: " << c2;
	cout << "������� �����������: " << c2.area() << '\n';
	cout << "�����: " << c2.volume() << '\n';

	cout << "������� ���������� ������ ���������, ������ � ������: ";
	cin >> a >> b >> c >> r >> h;
	cone c3(a, b, c, r, h);
	cout << endl << "��������� �����: " << c3 << endl;
	cone* cones = new cone[3];
	for (int i = 0; i < 3; i++) {
		cout << "������� ���������� ������ ���������, ������ � ������: ";
		cin >> a >> b >> c >> r >> h;
		cone c4(a, b, c, r, h);
		cones[i] = c4;
	}
	for (int i = 0; i < 3; i++) {
		cout << cones[i] << endl;
	}
	return 0;
}
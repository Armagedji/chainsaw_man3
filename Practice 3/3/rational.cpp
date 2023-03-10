#include "rational.h"
#include <iostream>

using namespace std;
int rational::nod(int a1, int b1) {
	if (a1 % b1 == 0) return b1;
	if (b1 % a1 == 0) return a1;
	if (a1 > b1) return nod(a1 % b1, b1);
	return nod(a1, b1 % a1);
}

rational::rational(int a1, int b1) {
	setlocale(LC_ALL, "russian");
	if (b1 == 0) {
		cout << "Знаменатель равен нулю!" << endl;
		a = 0; b = 0; sh = false;
	}
	else {
		sh = true;
		a = a1 / nod(a1, b1);
		b = b1 / nod(a1, b1);
		if (a == b) {
			cout << "Дробь является целой!" << endl;
			sh = false;
		}
		if (a > b) a %= b;
	}
}

rational::rational() {
	a = 0; b = 0; sh = false;
}

void rational::set(int a1, int b1) {
	if (b1 == 0) {
		cout << "Знаменатель равен нулю!" << endl;
		sh = false;
	}
	else {
		sh = true;
		a = a1 / nod(a1, b1);
		b = b1 / nod(a1, b1);
		if (a == b) {
			cout << "Дробь является целой!" << endl;
			sh = false;
		}
		if (a > b) a %= b;
	}
}

void rational::show() {
	if (sh) cout << a << '/' << b;
}

rational rational::operator+(rational& x) {
	return rational(a * x.b + x.a * b, b * x.b);
}

rational operator - (rational& x, rational& y) {
	return rational(x.a * y.b - y.a * x.b, x.b * y.b);
}

void rational::operator++() {
	this->set(this->a + 1, this->b);
}

void rational::operator++(int d) {
	this->set(this->a + 1, this->b);
}

bool rational::operator==(rational& x) {
	if (a * x.b == x.a * b) return true;
	return false;
}

bool rational::operator>(rational& x) {
	if (a * x.b > x.a * b) return true;
	return false;
}

rational rational::operator=(rational& x) {
	this->set(x.a, x.b);
}

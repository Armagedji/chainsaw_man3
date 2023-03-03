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
rational::rational() {
	a = 0; b = 0;
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
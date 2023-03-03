#include "eq2.h"
#include <cmath>

eq2::eq2(double a1, double b1, double c1) {
	a = a1;
	b = b1;
	c = c1;
	D = b * b - 4 * a * c;
}
void eq2::set(double a1, double b1, double c1) {
	a = a1;
	b = b1;
	c = c1;
	D = b * b - 4 * a * c;
}

double eq2::find_X() {
	using namespace std;
	if (D < 0) {
		std::cout << "Корней нет" << endl;
		return 0;
	}
	else if (D == 0) return -b / (2 * a);
	else {
		double x1 = (-b - sqrt(D)) / (2 * a), x2 = (-b + sqrt(D)) / (2*a);
		if (x1 > x2) return x1;
		return x2;
	}
}

double eq2::find_Y(double x1) {
	return a * x1 * x1 + b * x1 + c;
}


eq2 eq2::operator+(eq2& x) {
	return eq2(a + x.a, b + x.b, c + x.c);
}
#include "circle.h"
#include <math.h>

circle::circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}

void circle::set_circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}

float circle::square() {
	return PI * radius * radius;
}

bool circle::triangle_around(float a, float b, float c) {
	double p = (a + b + c) / 2;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	if ((a * b * c) / (4 * s) == radius) return true;
	return false;
}

bool circle::triangle_in(float a, float b, float c) {
	double p = (a + b + c) / 2;
	double s = sqrt(p * (p - a) * (p - b) * (p - c));
	if (s / p == radius) return true;
	return false;
}

bool circle::check_circle(float r, float x_cntr, float y_cntr) {
	float x = pow(x_center - x_cntr, 2), y = pow(y_center - y_cntr, 2);
	double len = sqrt(x + y);
	if ((r + radius) <= len) return true;
	return false;
}
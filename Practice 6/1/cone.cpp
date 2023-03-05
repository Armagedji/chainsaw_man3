#include "cone.h"

cone::cone() { x = y = z = r = h = 0; }
cone::cone(double rd, double ht) {
	x = y = z = 0.0;
	r = rd; h = ht;
}
cone::cone(double a, double b, double c, double rd, double ht) {
	x = a; y = b; z = c;
	r = rd; h = ht;
}

void cone::setCoordinate(double a, double b, double c) { x = a; y = b; z = c; }
void cone::setRadius(double rd) { r = rd; }
void cone::setHeight(double ht) { h = ht; }

double cone::getRadius() { return r; }
double cone::getHeight() { return h; }

double cone::area() {
	double l = sqrt(h * h + r * r);
	return pi * r * (r + l);
}
double cone::volume() { return pi * r * r * h / 3; }

ostream& operator<<(ostream& stream, cone obj) {
	return stream << "(" << obj.x << "; " << obj.y << "; " << obj.z << ") " << "r = " << obj.r << ' ' << "h = " << obj.h << '\n';
}


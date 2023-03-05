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

bool cone::operator>(cone& x) {
	if (this->volume() > x.volume()) return true;
	return false;
}
bool cone::operator==(cone& x) {
	if (this->volume() == x.volume()) return true;
	return false;
}
bool cone::operator<(cone& x) {
	if (this->volume() < x.volume()) return true;
	return false;
}
ostream& operator<<(ostream& stream, cone obj) {
	return stream << "(" << obj.x << "; " << obj.y << "; " << obj.z << ") " << "r = " << obj.r << ' ' << "h = " << obj.h << '\n';
}
istream& operator>>(istream& stream, cone obj) {
	double x, y, z, r, h;
	stream >> x >> y >> z >> r >> h;
	obj.setCoordinate(x, y, z);
	obj.setHeight(h);
	obj.setRadius(r);
	return stream;
}

trunc_cone::trunc_cone() { x = y = z = sr = hr = h = 0; }
trunc_cone::trunc_cone(double srd, double hrd, double ht) {
	x = y = z = 0.0;
	sr = srd; hr = hrd; h = ht;
}
trunc_cone::trunc_cone(double a, double b, double c, double srd, double hrd, double ht) {
	x = a; y = b; z = c;
	sr = srd; hr = hrd; h = ht;
}

void trunc_cone::setRadius(double srd, double hrd) {
	sr = srd; hr = hrd;
}

double trunc_cone::getSmallerRadius() { return sr; }
double trunc_cone::getHigherRadius() { return hr; }

double trunc_cone::area() {
	double l = sqrt(h * h + (hr - sr) * (hr - sr));
	return pi * l * (sr + hr) + pi * sr * sr + pi * hr * hr;
}

double trunc_cone::volume() {
	return pi / 3 * h * (sr * sr + sr * hr + hr * hr);
}

ostream& operator<<(ostream& stream, trunc_cone obj) {
	return stream << "(" << obj.x << "; " << obj.y << "; " << obj.z << ") " << "sr = " << obj.sr << ' ' << "hr = " << obj.hr << ' ' << "h = " << obj.h << '\n';
}
istream& operator>>(istream& stream, trunc_cone &obj) {
	double x, y, z, sr, hr, h;
	stream >> x >> y >> z >> sr >> hr >> h;
	obj.setCoordinate(x, y, z);
	obj.setHeight(h);
	obj.setRadius(sr, hr);
	return stream;
}

bool trunc_cone::operator>(trunc_cone& x) {
	if (this->volume() > x.volume()) return true;
	return false;
}
bool trunc_cone::operator==(trunc_cone& x) {
	if (this->volume() == x.volume()) return true;
	return false;
}
bool trunc_cone::operator<(trunc_cone& x) {
	if (this->volume() < x.volume()) return true;
	return false;
}
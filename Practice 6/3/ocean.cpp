#include "ocean.h"

Ocean::Ocean() {
	name = "unknown";
	location = "unknown";
	size = 0; depth = 0; square = 0;
}

Ocean::Ocean(string n, string l, double sz, double dp, double sq) {
	name = n; location = l;
	size = sz; depth = dp; square = sq;
}

string Ocean::getName() {
	return name;
}
string Ocean::getLocation() {
	return location;
}
double Ocean::getSize() {
	return size;
}
double Ocean::getDepth() {
	return depth;
}
double Ocean::getSquare() {
	return square;
}

ostream& operator<<(ostream& st, Ocean obj)
{
	st << "Name: " << obj.name << " ocean\n" << "Location: " << obj.location << "\n";
	st << "Size: " << obj.size << "\n" << "Depth: " << obj.depth << "\n" << "Square: " << obj.square << "\n";

	return st;
}
istream& operator>>(istream& st, Ocean& obj)
{
	st >> obj.name >> obj.location >> obj.depth >> obj.square;
	return st;
}
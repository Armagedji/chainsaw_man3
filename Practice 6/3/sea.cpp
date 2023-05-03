#include "sea.h"

Sea::Sea() {
	name = "unknown";
	location = "unknown";
	size = 0; depth = 0; square = 0;
}

Sea::Sea(Ocean oc, string n, double sz, double dp, double sq) {
	name = n;
	location = oc.getLocation();
	ocean = &oc;
	size = sz; depth = dp; square = sq;
}

Sea::Sea(string n, string loc, double sz, double dp, double sq) {
	name = n;
	location = loc;
	size = sz; depth = dp; square = sq;
}

ostream& operator<<(ostream& st, Sea obj)
{
	st << "Name: " << obj.name << " sea\n" << "Location: " << obj.location << "\n";
	st << "Size: " << obj.size << "\n" << "Depth: " << obj.depth << "\n" << "Square: " << obj.square << "\n";

	if (obj.ocean) st << "in " << obj.ocean->getName() << " ocean\n";

	return st;
}
istream& operator>>(istream& st, Sea& obj)
{
	st >> obj.name >> obj.location >> obj.depth >> obj.square;
	return st;
}
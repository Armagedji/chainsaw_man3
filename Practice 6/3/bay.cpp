#include "bay.h"

Bay::Bay() {
	name = "unknown";
	location = "unknown";
	size = 0; depth = 0; square = 0;
}

Bay::Bay(Ocean oc, string n, double sz, double dp, double sq) {
	name = n;
	location = oc.getLocation();
	size = sz; depth = dp; square = sq;
	ocean = &oc;
}
Bay::Bay(Sea se, string n, double sz, double dp, double sq) {
	name = n;
	location = se.getLocation();
	size = sz; depth = dp; square = sq;
	sea = &se;
}
Bay::Bay(string n, string loc, double sz, double dp, double sq) {
	name = n;
	location = loc;
	size = sz; depth = dp; square = sq;
}

ostream& operator<<(ostream& st, Bay obj)
{
	st << "Name: " << obj.name << " bay\n" << "Location: " << obj.location << "\n";
	st << "Size: " <<  obj.size << "\n" << "Depth: " << obj.depth << "\n" << "Square: " << obj.square << "\n";

	if (obj.ocean) st << "in " << obj.ocean->getName() << " ocean\n";
	if (obj.sea) st << "in " << obj.sea->getName() << " sea\n";

	return st;
}

istream& operator>>(istream& st, Bay& obj)
{
	st >> obj.name >> obj.location >> obj.depth >> obj.square;
	return st;
}
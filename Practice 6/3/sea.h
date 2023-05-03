#pragma once
#include "ocean.h"

using namespace std;

class Sea : public Ocean {
private:
	string name;
	double size, depth, square;
protected:
	string location;
	Ocean* ocean;
public:
	Sea();
	Sea(Ocean oc, string n, double sz, double dp, double sq);
	Sea(string n, string loc, double sz, double dp, double sq);

	friend ostream& operator<<(ostream& st, Sea obj);
	friend istream& operator>>(istream& st, Sea& obj);
};
#pragma once
#include "sea.h"
#include "ocean.h"

using namespace std;

class Bay : public Sea {
private:
	string name;
	double size, depth, square;
protected:
	string location;
	Ocean* ocean;
	Sea* sea;
public:
	Bay();
	Bay(Ocean oc, string n, double sz, double dp, double ln);
	Bay(Sea se, string n, double sz, double dp, double ln);
	Bay(string n, string loc, double sz, double dp, double ln);

	friend ostream& operator<<(ostream& st, Bay obj);
	friend istream& operator>>(istream& st, Bay& obj);
};
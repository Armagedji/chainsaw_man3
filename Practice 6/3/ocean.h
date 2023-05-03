#pragma once
#include <iostream>

using namespace std;

class Ocean {
private:
	string name;
	double size, depth, square;
protected:
	string location;
public:
	Ocean();
	Ocean(string n, string l, double sz, double dp, double sq);

	string getName();
	string getLocation();
	double getSize();
	double getDepth();
	double getSquare();

	friend ostream& operator<<(ostream& st, Ocean obj);
	friend istream& operator>>(istream& st, Ocean& obj);
};
#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

const double pi = 3.14159265;

class cone {
	double x, y, z;
	double r, h;
public:
	cone();
	cone(double rd, double ht);
	cone(double a, double b, double c, double rd, double ht);
	void setCoordinate(double a, double b, double c);
	void setRadius(double rd);
	void setHeight(double ht);
	double getRadius();
	double getHeight();
	double area();
	double volume();
	friend ostream& operator<<(ostream& stream, cone obj);
};
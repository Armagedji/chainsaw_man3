#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

const double pi = 3.14159265;

class cone {
private:
	double r;
protected:
	double x, y, z;
	double h;
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
	friend istream& operator>>(istream& stream, cone &obj);
	bool operator>(cone& x); // Сравнения идут по объёму (в наследуемом классе тоже)
	bool operator==(cone& x);
	bool operator<(cone& x);
};
class trunc_cone : public cone {
private:
	double sr, hr; // Меньший и больший радиусы
	cone::getRadius; // Спрятал функцию радиуса из класса cone
public:
	trunc_cone();
	trunc_cone(double srd, double hrd, double ht);
	trunc_cone(double a, double b, double c, double srd, double hrd, double ht);
	void setRadius(double srd, double hrd);
	double getSmallerRadius();
	double getHigherRadius();
	double area();
	double volume();
	friend ostream& operator<<(ostream& stream, trunc_cone obj);
	friend istream& operator>>(istream& stream, trunc_cone &obj);
	bool operator>(trunc_cone& x); 
	bool operator==(trunc_cone& x);
	bool operator<(trunc_cone& x);
};
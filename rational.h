#pragma once

class rational {
	friend rational operator - (rational& x, rational& y);
private:
	int a, b;
	bool sh;
	int nod(int a1, int b1);
public:
	rational(int a1, int b1);
	rational();
	rational operator+(rational& x);
	void operator++();
	void operator++(int d);
	bool operator==(rational& x);
	bool operator>(rational& x);
	rational operator=(rational& x);
	void set(int a1, int b1);
	void show();
};

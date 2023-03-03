#pragma once

class rational {
private:
	int a, b;
	bool sh;
	int nod(int a1, int b1);
public:
	rational(int a1, int b1);
	rational();
	void set(int a1, int b1);
	void show();
};
#include <iostream>
#include <cmath>
#include "eq2.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "russian");
	eq2 first(1, 2, 3), second(1,5,2);
	eq2 third = first + second;
	cout << third.find_X();
	return 0;
}
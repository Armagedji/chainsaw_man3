#include"Select.h"
#include<iostream>

using namespace std;

int main() {
	double a[10];
	int num;
	for (int i = 0; i < 10;) {
		a[i] = i++;
	}
	cout << "Enter a value from 1 to 10: ";
	cin >> num;
	cout << endl;
	try {
		cout << "Selected number: " << Select(a, s) << endl;
	}
	catch (runtime_error& e) {
		cout << "Error: " << e.what() << endl;
	}
}
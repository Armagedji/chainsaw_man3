#include<iostream>
#include"Select2.h"

using namespace std;

int main() {
	double a[100];
	int s;
	cout << "Enter your element: ";
	cin >> s;

	for (int i = 0; i < 100; i++) {
		a[i] = 0;
	}


	try {
		cout << "Your element is: " << Select2(a, s) << endl;
	}
	catch (runtime_error& e) {
		cout << "Error: " << e.what() << endl;
	}
}
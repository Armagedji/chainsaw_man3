#include <iostream>

using namespace std;

double Divide(double a, double b) {
	if (b == 0) {
		throw runtime_error("Math error: Divide by zero\n");
	}
	else {
		return (a / b);
	}
}




int main() {
	double x, y, result;
	cout << "Enter two values: ";
	cin >> x >> y;
	cout << endl;
	try {
		result = Divide(x, y);
		cout << "Result: " << result << endl;
	}
	catch (runtime_error& e) {
		cout << "Error" << endl << e.what();
	}
}
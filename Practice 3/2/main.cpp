#include <iostream>
#include "rational.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "russian");
	int a, b, n;
	cin >> n;
	rational* nums = new rational[n];
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		nums[i] = rational(a, b);
	}
	for (int i = 0; i < n; i++) {
		nums[i].show();
		cout << ' ';
	}
	delete [] nums;
}
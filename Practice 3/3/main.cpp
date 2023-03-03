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
		rational nw = rational(a, b);
		nums[i] = nw;
	}
	for (int i = 0; i < n; i++) {
		nums[i].show();
		cout << ' ';
	}
	cout << endl;
	rational first(2, 5), second(1, 10);
	rational sm = first + second;
	rational df = first - second;
	sm.show();
	cout << ' ';
	df.show();
	cout << endl;
	second.show();
	second++;
	cout << ' ';
	second.show();
	second++;
	cout << ' ';
	second.show();
	cout << ' ' << (first == second) << ' ' << (first > second) << ' ';
	second = first;
	cout << endl;
	second.show();
	cout << ' ';
	first.show();
	cout << ' ';
	cout << (first == second);
	cout << endl;
	second++;
	first = second;
	first.show();
	delete[] nums;
}

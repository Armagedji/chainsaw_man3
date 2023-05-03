#include <iostream>
#include "bay.h"
#include "sea.h"
#include "ocean.h"

using namespace std;

int main() {
	Ocean pacific = Ocean("Pacific", "Earth", 710360000, 3984, 178684000);
	cout << pacific;
	Ocean noname;
	cout << noname;
	Ocean unknown;
	cin >> unknown;
	cout << unknown;

	cout << "--------------------" << endl;

	Sea bering = Sea(pacific, "Bering", 3800000, 1640, 2260000);
	cout << bering;

	cout << "--------------------" << endl;

	Bay karag = Bay(bering, "Karaginskiy", 500, 60, 300);
	cout << karag;
}
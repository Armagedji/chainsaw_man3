#pragma once
#include<iostream>

using namespace std;

double Select(double a[], int s) {
	if ((s < 0) || (s > 5)) {
		throw runtime_error("Wrong array element\n");
	}
	else { return (a[s - 1]); }
}
#include <iostream>

using namespace std;

int jump(int j, int n, int& v, int& c) {
	if (n == 1) return 1;
	++c;
	c < j ? v *= 2 : v = v * 2 - 1;
	if (c < n - 1) return jump(j, n, v, c);
	else return v;
}

int main() {
	int n;
	int j;
	int counter = 0;
	int vars = 1;

	cout << "Enter number of stair: ";
	cin >> n;
	cout << "Enter jump leight: ";
	cin >> j;

	cout << "Variants: " << jump(j, n, vars, counter);

	return 0;
}
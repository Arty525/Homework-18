#include <iostream>

using namespace std;

int jump(int n, int& v, int& c,int j = 3) {
	if (n == 1) return 1;
	++c;
	c < j ? v *= 2 : v = v * 2 - 1;
	if (c < n - 1) return jump(n, v, c, j);
	else return v;
}

int main() {
	int n;
	int j;
	int counter = 0;
	int vars = 1;
	int jl;

	cout << "Enter number of stair: ";
	cin >> n;
	cout << "Change jump length (default 3)? Enter 1/0: ";
	cin >> jl;
	if (jl == 1) {
		cout << "Enter jump leight: ";
		cin >> j;

		cout << "Variants: " << jump(n, vars, counter, j);
	}
	else {
		cout << "Variants: " << jump(n, vars, counter);
	}

	return 0;
}
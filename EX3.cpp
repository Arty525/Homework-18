#include <iostream>

using namespace std;

int jump(int n, int k = 3) {
	if (k < pow(2, n) && n > k) {
		n -= k;
		k = pow(2, (k - 1));
	}
	else if (n <= k) {
		return k = pow(2, (n-1));
	}
	k = k * 2 - 1;
	--n;
	cout << k << endl;
	if (n > 0) return jump(n, k);
	else return k;
}

int main() {
	int n;
	int k;
	bool jl = 0;

	cout << "Enter number of stair: ";
	cin >> n;
	cout << "Change jump length (default 3)? Enter 1/0: ";
	cin >> jl;
	if (jl) {
		cout << "Enter jump leight: ";
		cin >> k;

		cout << "Variants: " << jump(n, k);
	}
	else {
		cout << "Variants: " << jump(n);
	}

	return 0;
}
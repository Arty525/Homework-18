#include <iostream>

using namespace std;

void even(long long& n, int& a) {
	if ((n % 10) % 2 == 0) ++a;
	n = (n - (n % 10)) / 10;
	cout << n << endl;
	if (n > 0) return even(n, a);
	else cout << "Number of even digits:" << a;
}


int main() {
	long long number = 9223372036854775806;
	int ans = 0;
	even(number, ans);
	return 0;
}

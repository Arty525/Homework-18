#include <iostream>

using namespace std;

void even(long& n, int ans) {
	if (n % 10 % 2 == 0) ++ans;
	n -= n % 10;
	cout << n << endl;
	if ((n - (n % 10)) > 0) return even(n, ans);
	else cout << ans;
}


int main() {
	long number = 9223372036854775806;
	int ans = 0;
	even(number, ans);
	return 0;
}
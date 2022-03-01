#include <iostream>

using namespace std;

//void even(long& n, int ans) {
//	
//	return even(n, ans);
//}


int main() {
	long number = 9223372036854775806;
	long* pnumber = &number;
	int ans = 0;
	//even(number, ans);
	cout << &pnumber[0] << " " << &pnumber[1];
	return 0;
}
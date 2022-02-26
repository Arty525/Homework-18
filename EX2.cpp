#include <iostream>

using namespace std;

int jump(int* n, int stair,int* vars) {
	if (stair % *n > 0) {
		cout << "(" << stair / *n << "," << stair % *n << ")";
	}
}

int main(){
	int stair;
	int n = 3;
	int vars = 0;

	cout << "Enter stair's number: ";
	cin >> stair;

	jump(&n, stair, &vars);

	cout << vars;

	return 0;
}
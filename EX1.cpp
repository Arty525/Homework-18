#include <iostream>
#include <vector>

using namespace std;

void swapvec(vector<int>& v, int m[]) {
	for (int i = 0; i < v.size(); ++i) {
		v[i] = v[i] ^ m[i];
		m[i] = v[i] ^ m[i];
		v[i] = v[i] ^ m[i];
	}
}


int main() {

	vector<int> a = {1,2,3,4,5};

	int b[] = {6,7,8,9,10};

	swapvec(a,b);

	for (int i = 0; i < a.size(); ++i) {
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < a.size(); ++i) {
		cout << b[i] << " ";
	}
	return 0;
}
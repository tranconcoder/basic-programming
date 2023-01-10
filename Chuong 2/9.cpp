// Tính tổng S = 1 + 2 - 3 + 4 + 5 - 6 ... n;
#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "n = "; cin >> n;

	long long s = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0) s -= i;
		else s += i;
	}
	
	cout << s << endl;

	return 0;
}

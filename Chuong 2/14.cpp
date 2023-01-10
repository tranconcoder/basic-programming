// Viết chương trình tính tổng e = 1 + 1/1! + 1/2! + ... + 1/(n+1)!
#include <iostream>

using namespace std;

int main() {
	int n;
	do {
		cout << "n = "; cin >> n;
	} while(n <= 0);

	double e = 1;
	long long b = 1; // Store bottom value

	for (float i = 1.0; i <= n + 1; i++) {
		b *= i;
		e += 1.0/b;
	}

	cout << e << endl;

	return 0;
}

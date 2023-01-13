// Viết chương trình nhập vào số nguyên dương
// In ra ước số lẻ lớn nhất của số đó
#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "n = "; cin >> n;

	int step = 1;
	for (int i = n / 2; i > 0; i -= step) {
		if (i % 2 == 0) continue;
		else step = 2;

		if (n % i == 0) {
			cout << i << endl;
			break;
		}
	}

	return 0;
}

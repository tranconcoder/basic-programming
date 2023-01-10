// Viết chương trình in ra tất cả các số nguyên tố nhỏ hơn n
#include <iostream>

using namespace std;

int main() {
	int n, step = 1;
	bool b = false;
	cout << "n = "; cin >> n;

	if (n > 2) cout  << 2 << " ";
	for(int i = 3; i < n; i += 2) {
		bool snt = true;

		for (int j = 2; j <= i/2; j++) {
			if (i % j == 0) {
				snt = false;
				break;
			}
		}

		if (snt == true) cout << i << " ";
	}
	cout << endl;

	return 0;
}

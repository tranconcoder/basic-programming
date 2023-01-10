// Viết chương trình tích tổng
// xích ma i từ 1 đến n của xích ma j từ 1 đến m của i + 2j
#include <iostream>

using namespace std;

int main() {
	int m, n;
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;

	int s = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			s += i + 2*j;
		}
	}

	cout << s << endl;

	return 0;
}

// Viết chương trình tính tổng S = 1/2 + ... + n/n+1.
#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "n = "; cin >> n;

	double s = 0;
	for (int i = 1; i <= n; i++) s += i / double(i + 1);

	cout << s << endl;

	return 0;
}

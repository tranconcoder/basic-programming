// Viết chương trình nhập 3 số nguyên, tìm min max
#include <iostream>

using namespace std;

int main() {
	int a, b, c;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	int min = a, max = a;

	if (b < min) min = b;
	if (c < min) min = c;

	if (b > max) max = b;
	if (c > max) max = c;

	cout << "Min = " << min << endl;
	cout << "Max = " << max << endl;

	return 0;
}

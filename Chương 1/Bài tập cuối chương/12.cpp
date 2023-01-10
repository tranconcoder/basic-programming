// Viết chương trình nhập 2 số nguyên a và b,
// Đổi giá trị giữa 2 biến theo 2 cách
// 1: dùng biến tạm
// 2: không dùng biến tạm (cộng trừ)

#include <iostream>

using namespace std;

int main() {
	int a, b;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	cout << "Truoc khi doi: " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// Thực hiện hoán đổi giá trị
	// Cách 1
	// int temp = a;
	// a = b;
	// b = temp;

	// Cách 2:
	a = a + b;
	b = a - b;
	a = a - b;

	cout << "Sau khi hoan doi: " << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	return 0;
}

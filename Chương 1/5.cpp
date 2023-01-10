// Viết chương trình nhập 3 số thực a, b, c
// In ra phương trình có dạng ax^2 + bx + c = 0
// Chỉ lấy 2 số sau dấu phẩy

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double a, b, c;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << endl << "Phuong trinh: " << endl;
	cout << setiosflags(ios::showpoint) << setprecision(2); 
	cout << fixed << a << "x + " << b << "y + " << c << " = 0" << endl;

	return 0;
}

// Viết chương trình nhập vào hệ số lương,
// In ra tổng số lượng với công thức
// Lương = hệ số * 1,150,000đ

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double hsl;
	
	cout << "Nhap he so luong: ";
	cin >> hsl;

	double luong = hsl * 1150000;
	cout << "Luong nhan: " << fixed << setprecision(2) << luong << endl;

	return 0;
}

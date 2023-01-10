// Viết chương trình nhập vào số nguyên có 4 chữ số
// In ra tổng 4 chữ số này và hàng chục, hàng đơn vị của tổng đó
// VD: 1234 -> in ra: 10, 1, 0

#include <iostream>

using namespace std;

int main() {
	int n;

	// Yêu cầu nhập lại nếu n có độ dài khác 4
	do {
		cout << "Nhap so co 4 chu so: "; cin >> n;
	} while(to_string(n).length() != 4);

	// Tạo biến s để lưu tổng 4 chữ số
	int s;
	while(n != 0) {
		// Tạo biến c để lưu từng chữ số đã tách
		int c = n % 10;
		// Khởi tạo lại biến n sau khi đã tách 1 chữ số
		n /= 10;
		
		// Tăng biến tổng (cộng với chữ số đã tách biên trên)
		s += c;
	}
	
	cout << s << ", " << s / 10 << ", " << s % 10;

	return 0;
}

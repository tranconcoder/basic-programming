// Viết chương trình nhập vào số nguyên có 4 chữ số
// In ra tổng 4 số này, chữ số đầu và chữ số cuối

#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;

	// Yêu cầu người dùng nhập lại nếu n có độ dài khác 4
	do {
		cout << "Nhap so nguyen co 4 chu so: ";
		cin >> n;
	} while(to_string(n).length() != 4);

	// n1 -> n4 lưu 4 chữ số
	int n1 = n / 1000;
	int n2 = (n / 100) % 10;
	int n3 = (n / 10) % 10;
	int n4 = n % 10;
	int s = n1 + n2 + n3 + n4;


	cout << s << ", " << n1 << ", " << n4 << endl;

	return 0;
}

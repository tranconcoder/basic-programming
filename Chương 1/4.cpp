// Viết chương trình nhập vào 1 ký tự, in ra ký tự đó và mã ASCII của nó
#include <iostream>

using namespace std;

int main() {
	char c;
	cout << "Nhap ky tu bat ky: "; cin >> c;

	cout << "Ky tu da nhap: " << c << " (" << int(c) << ")" << endl;

	return 0;
}

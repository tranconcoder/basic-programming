// Viết chương trình nhập vào 3 cạnh a, b, c
// Cho biết 3 cạnh đó có thể tạo thành tam giác được hay không

#include <iostream>

using namespace std;

int main() {
	int a, b, c;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	// Nếu có 1 trong 3 cạnh có độ dài lớn hơn hoặc bằng tổng 2 cạnh còn lại
	// Thì sẽ KHÔNG vẽ được tam giác
	if (a >= b +c || b >= a + c || c >= a + b) {
		cout << "3 canh tren khong the ve duoc tam giac";
	} else {
		cout << "3 canh tren co the ve duoc tam giac";
	}

	return 0;
}

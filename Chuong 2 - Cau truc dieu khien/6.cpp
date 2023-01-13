// Viết chương trình mô phỏng máy tính bỏ túi
// Nhập 2 số thực và toán tử
// Nếu toán toán khong thuộc + - * / thì kết thúc chương trình

#include <iostream>

using namespace std;

int main() {
	double a, b;
	char c;
	
	cout << "Nhap 2 so bat ky: "; cin >> a >> b;
	cin.ignore(); // Xóa dấu enter khỏi bộ nhớ đệm để có thể nhập biến "c"
	cout << "Nhap phep toan: "; cin.get(c);

	cout << a << " " << c << " " << b << " = ";

	switch(c) {
		case '+':
			cout << a + b;
			break;
		case '-':
			cout << a - b;
			break;
		case '*':
			cout << a * b;
			break;
		case '/':
			cout << a / b;
			break;
		default:
			cout << "Phep toan khong hop le!";
	}
	cout << endl;

	return 0;
}

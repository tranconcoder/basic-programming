// Viết chương trình nhập vào 1 ký tự bất kỳ
// Cho biết ký tự đó có phải chữ cái hay không
#include <iostream>

using namespace std;

int main() {
	char c;
	cout << "Nhap ky tu bat ky: "; cin >> c;

	cout << "\"" << c << "\"";
	if (isalpha(c)) {
		cout << " la chu cai" << endl;
	} else {
		cout << " khong phai chu cai" << endl;
	}
	
	return 0;
}

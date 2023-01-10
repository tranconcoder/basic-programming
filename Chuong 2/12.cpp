// Viết chương trình nhập chiều dài và rộng của hình chữ nhật
// Vẽ hình chữ nhật đó trên console
#include <iostream>

using namespace std;

int main() {
	int d, r;
	cout << "chieu dai = "; cin >> d;
	cout << "chieu rong = "; cin >> r;

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < d; j++) cout << "* ";
		cout << endl;
	}

	return 0;
}

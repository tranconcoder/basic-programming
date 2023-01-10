// Viết chương trình nhập số thực bất kỳ, in ra số đối
// Dừng nhập khi người dùng nhập 0
#include <iostream>

using namespace std;

int main() {
	float t;

	do {
		cout << "Nhap so thuc bat ky (nhap 0 de dung lai): ";
		cin >> t;
		cout << -t << endl;
	} while(t != 0);

	return 0;
}

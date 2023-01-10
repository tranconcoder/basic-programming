// Nhập cho dãy số cho đến khi nhập số 0 thì dừng
// Đếm có bao nhiêu số âm, bao nhiêu số dương trong dãy
#include <iostream>

using namespace std;

int main() {
	int so_am = 0, so_duong = 0, temp;

	do {
		cout << "Nhap gia tri bat ki (nhap 0 de dung lai): ";
		cin >> temp;

		if (temp < 0) so_am++;
		else so_duong++;
	} while(temp != 0);

	so_duong--;

	cout << "So am: " << so_am << endl;
	cout << "So duong: " << so_duong << endl;

	return 0;
}

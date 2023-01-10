// Viết chương trình phân tích số nguyên dương n
// thành tích của 2 thừa số nguyên số
#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "n = "; cin >> n;

	for (int i = 2; i <= n/2; i++) {
		bool snt_i = true;
		if (i > 2) for (int j = 2; j <= i / 2; j++) {
			if (i % j == 0) {
				snt_i = false;
				break;
			}
		}

		if (snt_i == false || (n*1.0)/i != n/i) continue;

		int temp = n/i;
		
		bool snt_t = true;
		if (temp > 2) for(int j = 2; j <= temp/2; j++) {
			if (temp % j == 0) {
				snt_t = false;
				break;
			}
		}

		if (snt_t == true) {
			cout << i << " " << temp << endl;
			return 0; // Dừng chương trình ngay khi tìm được đáp án đầu tiên
		}
	}

	cout << "Khong the phan tach " << n << " thanh tich 2 thua so nguyen to!" << endl;

	return 0;
}

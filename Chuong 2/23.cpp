// Viết  chương trình tính e=1 + 1/1! + ... 1/n!
// Bằng lệnh nhảy goto
#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "n = "; cin >> n;

	double e = 1;
	long long b = 1;
	int i = 1;

loop_start:
	if (i > n) goto loop_end; // Nếu điều kiện sai ->> dừng vòng lặp

	b *= i;
	e += 1 / (b*1.0);

	i++; // tăng biến i sau khi kết thúc vòng lặp
	goto loop_start; // Kết thúc vòng lặp hiện tại ->> chạy vòng lặp tiếp theo

loop_end: // Kết thúc vòng lặp
	cout << fixed << e << endl;

	return 0;
}

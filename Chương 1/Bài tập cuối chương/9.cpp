// Viết chương trình nhập vào bán kính của hình tròn
// In ra diện tích, chu vi của hình tròn đó

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double r;
	cout << "Nhap ban kinh cua hinh tron: ";
	cin >> r;

	// M_PI là hằng lưu trữ số PI được import vào từ thư viện cmath ở dòng 5
	double S = M_PI * pow(r, 2);
	double C = 2 * M_PI * r;

	cout << "Dien tich: " << S << endl;
	cout << "Chu vi: " << C << endl;

	return 0;
}

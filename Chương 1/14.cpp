// Viết chương trình tính chỉ số pignet của 1 người
// Khi biết vòng ngực trung bình, chiều cao và cân nặng
// Công thức tính: pignet = chiều cao - (vòng ngực trung bình + cân năng)

#include <iostream>

using namespace std;

int main() {
	double chieu_cao, can_nang, vong_nguc;
	cout << "chieu cao = "; cin >> chieu_cao;
	cout << "can nang = "; cin >> can_nang;
	cout << "vong nguc trung binh: "; cin >> vong_nguc;

	cout << "pignet = " << fixed << chieu_cao - can_nang - vong_nguc << endl;

	return 0;
}

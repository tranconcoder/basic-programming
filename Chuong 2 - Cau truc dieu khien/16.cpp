// Viết chương trình nhập số thực, chỉ dừng lại khi nhập 0
// Khi dừng nhập hãy in ra trung bình các số đã nhập
#include <iostream>

using namespace std;

int main() {
	double total = 0, t;
	int amount = 0;

	do {
		cout << "Nhap so thuc bat ki (nhap 0 de dung lai): ";
		cin >> t;

		amount++;
		total += t;
	} while(t != 0);
	amount--;

	cout << "Trung binh cong cac so da nhap: " << total / amount << endl;

	return 0;
}

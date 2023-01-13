// Viết chương trình nhập lần lượt các số thực
// Chỉ kết thúc nhập khi người dùng nhập số 0
// Sau khi kết thúc -> in ra trung bình cộng các số đã nhập
#include <iostream>

using namespace std;

int main() {
	int amount = 0;
	double total = 0;

loop_start:
	int t;
	cout << "Nhap so thuc bat ki: ";
	cin >> t;

	if (t == 0) { // Điều kiện lặp
		goto loop_end;
	} else {
		amount++;
		total += t;
		goto loop_start;
	}

loop_end:
	cout << "Trung binh cong: " << total / double(amount) << endl;

	return 0;
}

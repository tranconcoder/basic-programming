// Input: Điểm cơ bản + điểm nâng cao
// Output: xếp loại của sinh viên đó theo công thức sau: 
// 		Điểm trung bình >= 9 và không điểm nào dưới 8 -> Xuất sắc
// 						>= 8 						7 -> Giỏi
// 						>= 7 						6 -> Khá
// 						>= 5 						3 -> Trung bình
// 						Còn lại 					  -> Chưa đạt

#include <iostream>

using namespace std;

int main() {
	float dcb, dnc;
	cout << "Diem co ban = "; cin >> dcb;
	cout << "Diem nang cao = "; cin >> dnc;

	float dtb = (dcb + dnc) / 2;

	if (dtb >= 9 && dcb >= 8 && dnc >= 8) {
		cout << "Xuat sac";
	} else if (dtb >= 8 && dcb >= 7 && dnc >= 7) {
		cout << "Gioi";
	} else if (dtb >= 7 && dcb >= 6 && dnc >= 6) {
		cout << "Kha";
	} else if (dtb >= 5 && dcb >= 3 && dnc >= 3) {
		cout << "Trung binh";
	} else cout << "Khong dat";

	return 0;
}

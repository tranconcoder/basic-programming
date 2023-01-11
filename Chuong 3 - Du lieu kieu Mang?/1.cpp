// Viết chương trình nhập mảng số nguyên
// In mảng vừa nhập theo thứ tự ngược lại
// Đếm số lượng số nguyên tố trong mảng
// Nhập k từ bàn phím, tính tích các ước số của k
// In ra vị trí của số X xuất hiện lần thứ m
// Sắp xếp mảng giảm dần và in ra mảng đó
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Sử dụng vector (Tương tự như mảng nhưng Xịn hơn)
	int n;
	cout << "Nhap so luong phan tu: "; cin >> n;

	vector<int> A(n); // Tạo mảng chứa sẵn n phần tử int
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> A[i];
	}
	cout << "Mang da nhap: ";
	for (int v : A) cout << v << " ";
	cout << endl;

	// In mảng đảo ngược
	cout << "Mang sau khi dao nguoc: ";
	for (int i = A.size() - 1; i >= 0; i--) {
		cout << A[i] << " ";
	}
	cout << endl;

	vector<int> SNT = {}; // Tạo mảng lưu các số nguyên tố đã tìm được
	
	// Vòng lặp for each
	// Duyệt qua từng phần tử của mảng A rồi gán cho biến v
	// Kiểu của v phải trùng kiểu với kiểu của mỗi phần tử trong mảng
	// Ví dụ A = {19, 27, 3}
	// Lần chạy thứ: 		Giá trị của v
	// 		1 					19
	// 		2 					27
	// 		3 					3
	for (int v : A) {
		bool snt = true;
		
		if (v < 2) continue;
		if (v ==  2) {
			SNT.push_back(v); // Thêm v vào sau cùng của mảng SNT
			continue;
		}

		for (int i = 2; i <= v/2; i++) {
			if (v % i == 0) continue;
		}

		SNT.push_back(v);
	}
	cout << "Trong mang co " << SNT.size() << " so nguyen to" << endl; // SNT.size() -> lấy ra số lượng phần tử mà vector đang chứa
	
	// Tích ước số của k nhập từ bàn phím
	int k;
	cout << "Nhap k: "; cin >> k;
	long long t = 1;

	for (int v:A) {
		if (k % v == 0) t *= v;
	}

	cout << "Tich cac uoc so cua " << k << " trong mang la: " << t << endl;

	// Tìm vị trí của X xuất hiện lần thứ m
	int x, m, amount_m = 0;
	cout << "Nhap so can tim: "; cin >> x;
	cout << "Nhap so lan xuat hien: "; cin >> m;

	for (int i = 0; i < A.size(); i++) {
		if (A[i] == x) {
			amount_m++;

			if (amount_m == m) {
				cout << "-------> Vi tri xuat hien: " << i << endl;
				break;
			}
		}
	}
	if (amount_m != m) {
		cout << "-------> Khong tim thay so " << x;
		cout << " xuat hien lan thu " << m << " trong mang" << endl;
	}

	// Sắp xếp mảng theo thứ tự giảm dần, in ra mảng đó
	vector<int> B = A; // Tạo vector lưu mảng đã sắp xếp -> tránh tác động đến mảng A ban đầu	
	for (int i = 0; i < B.size(); i++) {
		for (int j = i + 1; j < B.size(); j++) {
			if (B[i] < B[j]) {
				int t = B[i];
				B[i] = B[j];
				B[j] = t;
			}
		}
	}
	cout << "Mang A sau khi da sap xep: ";
	for (int v : B) cout << v << " ";
	cout << endl;

	return 0;
}

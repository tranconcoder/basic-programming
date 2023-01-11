// Viết chương trình nhập 2 mảng 2 chiều
// Tạo mảng thứ 3 là tổng của 2 mảng trên
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cout << "Nhap so luong phan tu cua mang: "; cin >> n;

	vector<int> A(n);
	cout << "Nhap mang A: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}

	vector<int> B(n);
	cout << endl << "Nhap mang B: " << endl;
	for (int i = 0; i < n; i++) {
		cout << "B[" << i << "] = ";
		cin >> B[i];
	}

	vector<int> C = A;
	for (int i = 0; i < C.size(); i++) {
		C[i] += B[i];
	}

	cout << "Mang sau khi cong 2 mang A va B: " << endl;
	for (int v : C) {
		cout << v << " ";
	}
	cout << endl;

	return 0;
}

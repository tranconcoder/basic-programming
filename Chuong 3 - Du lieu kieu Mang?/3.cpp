// Viết chương trình nhập 2 mảng 1 chiều kiểu bool
// In mảng thứ 3 là phép AND giữa 2 mảng trên
// In mảng thứ 4 là phép OR giữa 2 mảng đã nhập
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cout << "Nhap so luong phan tu cua mang: "; cin >> n;

	cout << "Nhap mang A:\n";
	vector<bool> A(n, false);
	for (int i = 0; i < A.size(); i++) {
		cout << "A[" << i << "] = ";

		bool t;
		cin >> t;
		A[i] = t;
	}

	cout << "\nNhap mang B: \n";
	vector<bool> B(n, false);
	for (int i = 0; i < B.size(); i++) {
		cout << "B[" << i << "] = ";

		bool t;
		cin >> t;
		B[i] = t;
	}

	cout << "Mang sau khi thuc hien phep AND:";
	vector<bool> C = A;
	for(int i = 0; i < C.size(); i++) C[i] = C[i] && B[i];
	for (bool v : C) cout << v << " ";
	
	cout << endl << "Mang sau khi thuc hien phep OR: ";
	vector<bool> D = A;
	for (int i = 0; i < D.size(); i++) D[i] = A[i] || B[i];
	for (bool v : D) cout << v << " ";
	cout << endl;

	return 0;
}

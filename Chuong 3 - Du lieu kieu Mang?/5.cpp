// Nhập mảng 1 chiều chứa số nguyên
// In ra các phần tử nằm ở vị trí chẵn
// Kiểm tra mảng có được sắp xếp sẵn không
// Kiểm tra mảng có đối xứng không
// Tạo mảng mới copy phần tử từ vị trí thứ m đến vị trí k, in mảng vừa tạo
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;

	cout << "n = "; cin >> n;
	vector<int> A(n);
	for (int i = 0; i < n; i++) {
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}

	cout << "Mang da nhap: ";
	for (int v : A) cout << v << " ";
	cout << endl;

	cout << "Mang vi tri chan: ";
	for (int i = 1; i < n; i += 2) cout << A[i] << " ";
	cout << endl;

	// Kiểm tra mảng có được sắp xếp sẵn không
	bool sorted = true;
	short trend = 0; // 1 -> Increase sort, -1 -> Decrease sort
	for (int i = 1; i < n; i++) {
		if (trend == 0) {
			if (A[i] > A[i - 1]) trend = 1;
			if (A[i] < A[i - 1]) trend = -1;
		} else {
			int b = A[i] - A[i - 1]; // Increase b = 1, Decrease b = -1
			b = b / abs(b);

			if (b != trend && b != 0) {
				sorted = false;
				break;
			}
		}
	}

	if (sorted) cout << "-----> Mang da duoc sap xep san!" << endl;
	else cout << "-----> Mang khong duoc sap xep san!" << endl;

	// Copy mảng
	vector<int> B;
	int m, k;
	cout << "Tao mang moi voi: \n";
	cout << "- Vi tri bat dau: "; cin >> m;
	cout << "- Vi tri ket thuc:"; cin >> k;

	for (int i = m - 1; i < k; i++) B.push_back(A[i]);

	cout << endl << "Mang vua tao(mang bat dau tu vi tri so 1):";
	for (int v : B) cout << v << " ";
	cout << endl;

	return 0;
}

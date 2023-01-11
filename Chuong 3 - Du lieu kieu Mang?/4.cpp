// Nhập mảng 1 chiều n phần tử là số nguyên
// In ra mảng vừa nhập
// In ra vị trí phần tử lớn nhất
// Tính trung bình cộng các số nguyên dương
// Đếm số phần tử là lũy thừa của k
//
#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main() {
	int n;
	cout << "Nhap so luong phan tu cua vector: "; 
	cin >> n;

	vector<int> A(n);

	cout << "Nhap " << n << " phan tu cua mang: \n";
	for(int &v : A) {
		cin >> v;
	}
	cout << endl;
	
	cout << "Mang vua nhap: ";
	for (int v : A) cout << v << " ";
	cout << endl;

	int max = A[0];
	int max_index = 0;
	for(int i = 0; i < A.size(); i++) {
		if (A[i] > max) {
			max = A[i];
			max_index = i;
		}
	}
	cout << "Max = " << max;
	cout << "\nVi tri ---> " << max_index << endl;

	int total = 0;
	int amount = 0;
	for (int v : A) {
		if (v > 0) {
			total += v;
			amount++;
		}
	}
	cout << "Trung binh cong cac so duong trong mang: ";
	cout << total/(amount * 1.0) << endl;

	int k, amount_k = 0;
	cout << "k = "; cin >> k;
	for(int v:A) {
		double t = v;
		int a = 0;
		
		if (abs(t) == 1) {
			amount_k++;
			continue;
		};

		while(abs(t) < abs(k)) t = pow(v, a++);

		if (t == k) amount_k++;
	}
	cout << "Trong mang co " << amount_k << " so la luy thua cua " << k << endl;

	return 0;
}

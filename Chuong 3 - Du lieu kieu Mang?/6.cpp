// Nhập ma trận số thực, in ma trận đó
// Đếm số thực có phần nguyên chẵn
// Tính tích các phần tử dương trên hàng bất kỳ được nhập từ bàn phím
// Sắp xếp các phần tử trên cột bất kỳ theo chiều tăng dần, in ma trận đó
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int r, c;
	cout << "Rows = "; cin >> r;
	cout << "Columns = "; cin >> c;

	vector<vector<int>> A(r);
	for(int i = 0; i < r; i++) {
		vector<int> row(c);
		A[i] = row;

		for(int j = 0; j < c; j++) {
			cout << "A[" << i << "][" << j << "] = ";
			cin >> A[i][j];
		}
	}

	cout << "Ma tran vua nhap: " << endl;
	for(vector<int> r:A) {
		for(int c:r) {
			cout << c << " ";
		}
		cout << endl;
	}

	// Đếm số thực có phần nguyên chẵn trong ma trận
	int amout_chan = 0;
	for(vector<int> r:A)
		for(int c:r) {
			if (int(c) % 2 == 0) amout_chan++;
		}

	// Tính tích các phần tử dương trên hàng bất kỳ được nhập từ bàn phím
	int k;
	cout << "Nhap hang can tinh tich cac so thuc duong: ";
	cin >> k;

	double tich = 1;
	for (int c:A[k]) {
		if (c > 0) tich *= c;
	}
	cout << "Tich cac so duong thuoc hang " << k << " la: " << fixed << tich << endl;
	
	// Sắp xếp hàng bất kỳ theo chiều tăng dần được nhập từ bàn phím
	int row_sort_index;
	cout << "Nhap hang can sap xep tang dan: ";
	cin >> row_sort_index;

	vector<int> RTS = A[row_sort_index]; // Row to sort

	for(int i = 0; i < c; i++) {
		for(int j = i+1; j < c; j++) {
			if (RTS[i] > RTS[j]) {
				int t;
				t = RTS[i];
				RTS[i] = RTS[j];
				RTS[j] = t;
			}
		}
	}
	A[row_sort_index] = RTS;

	cout << "Ma tran da sap xep: " << endl;
	for(vector<int> r:A){
		for(int c:r) cout << c << " ";

		cout << endl;
	}

	return 0;
}

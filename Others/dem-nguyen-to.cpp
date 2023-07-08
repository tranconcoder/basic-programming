#include <iostream>
#include <math.h>

using namespace std;

int main() {
	const int MAX_SIZE = 100;

	int A[MAX_SIZE];
	int n;
	do {
		cout << "Nhap so luong phan tu trong mang: ";
		cin >> n;
	} while (n < 1 || n > MAX_SIZE);

	for(int i = 0; i < n; i++) {
		cout << "Nhap so nguyen duong thu " << i << ": ";
		cin >> A[i];
	}

	int dem_nt = 0;
	for (int i = 0; i < n; i++) {
		bool nguyen_to = true;
		int j = 2;

		while (nguyen_to == true && j <= sqrt(A[i])) {
			if (A[i] % j == 0) nguyen_to = false;
			j++;
		}

		if (nguyen_to) dem_nt++;
	}

	cout << "Co " << dem_nt << " so nguyen to trong day vua nhap!" << endl;

	return 0;
}

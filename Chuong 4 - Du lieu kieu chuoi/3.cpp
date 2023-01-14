// Thập phân sang thập lục phân
//
#include <iostream>

using namespace std;

int main() {
	int dec;
	cout << "Co so 10: "; cin >> dec;
	if (dec == 0) {
		cout << "Co so 16: 0" << endl;
		return 0;
	}

	string hex;
	char A[] = {'A', 'B', 'C', 'D', 'E', 'F'};
	int r;

	while(dec >= 15) {
		r = dec % 16;
		dec /= 16;
		if (r >= 10) hex = A[r - 10] + hex;
		else hex = to_string(r) + hex;
	}

	if (dec != 0) {
		if (dec >= 10) hex = A[dec - 10] + hex;
		else hex = to_string(dec) + hex;
	}

	cout << "Co so 16: " << hex << endl;

	return 0;
}

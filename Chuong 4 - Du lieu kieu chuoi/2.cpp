// Nhị phân chuyển sang thập phân
// 
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	string s;
	cout << "Nhap ma nhi phan: ";
	cin >> s;

	int n;
	for(int i = 0; i < s.size(); i++) {
		if (s[i] == '0') continue;

		n += pow(2, s.size() - 1 - i);
		cout << n << endl;
	}

	cout << "Thap phan: " << n << endl;

	return 0;
}

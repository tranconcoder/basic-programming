// Viết chương trình nhập n -> in ra tam giác vuông cân
// Có độ dài cạnh góc vuông là n
// VD: n = 3
// @
// @@
// @@@
#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "n = "; cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) cout << "@";
		cout << endl;
	}

	return 0;
}

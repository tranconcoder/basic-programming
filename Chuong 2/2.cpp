// Viết chương trình nhập vào 1 số
// Cho biết số đó là âm hay dương, chẵn hay lẻ

#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "n = "; cin >> n;

	if (n < 0) cout << n << " la so am";
	else cout << n << " la so duong";

	if (n % 2 == 0) cout << " va la so chan";
	else cout << " va la so le";
	cout << endl;

	return 0;
}

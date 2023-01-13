// Viết chương trình tính tích N số nguyên dương đầu tiên

#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "N = "; cin >> n;

	long long result = 1;
	for (int i = 1; i <= n; i++) result *= i;

	cout << result << endl;

	return 0;
}

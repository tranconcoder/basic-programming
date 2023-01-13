// Viết chương trình in ra số hạng thứ n của dãy Fibonacci
#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "n = "; cin >> n;

	int f1 = 1, f2 = 1, f = 1;
	if (n > 2) for(int i = 3; i <= n; i++) {
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}

	cout << f << endl;
	
	return 0;
}

// Viết chương trình tính tổng S= 1/2 +...+ n/(n+1)
// Bằng lệnh nhảy goto
#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "n = "; cin >> n;
	
	double s = 0;
	int i = 1;

	run: 
	s += i / (i+1.0);
	i++;
	if (i <= n) goto run;

	cout << fixed << s << endl;


	return 0;
}

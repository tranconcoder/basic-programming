// Viết chương trình nhập chuỗi chứa số nguyên
// Cho biết trong chuỗi có bao nhiêu dãy con tăng dần
// In dãy con tăng dần dài nhất
//
#include <iostream>

using namespace std;

int main() {
	string n;
	cout << "Nhap chuoi so nguyen: ";
	getline(cin, n);

	short count = 0;
	string long_s;

	int i = 0;
	while(i < n.size()) {
		string s = to_string(int(n[i]) - 48);

		int j = i + 1;
		while(int(s[s.size() - 1]) < int(n[j]) && j < n.size()) {
			s += n[j];
			j++;
		}

		if (s.size() > 1) {
			count++;
			
			if (s.size() > long_s.size()) long_s = s;

			i = j;
		} else i++;
	}

	if (count != 0) {
		cout << "Trong chuoi co " << count << " chuoi con tang dan" << endl;
		cout << "Chuoi tang dan dai nhat la: " << long_s << endl;
	} else cout << "Khong co day con tang dan trong chuoi!" << endl;

	return 0;
}

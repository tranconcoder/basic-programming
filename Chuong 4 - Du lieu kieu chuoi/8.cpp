// Viết chương trình nhập 1 số nhỏ hơn 1000
// In số đó dạng chữ
// VD: 125 -> Một trăm hai mươi lăm
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
	string n;
	cout << "Nhap so nguyen de doc: ";
	getline(cin, n);

	while(n.size() < 3) n = "0" + n;

	vector<string> W = {
		"khong",
		"mot",		
		"hai",
		"ba",
		"bon",
		"nam",
		"sau",
		"bay",
		"tam",
		"chin",
		"muoi",
	};
	vector<string> R = {
		"tram",
		"muoi",
	};

	string spk;

	for (int i = 0; i < n.size(); i++) {
		switch(i) {
			case 0:
				if(n[i] == '0') break;
				spk += W[int(n[i]) - 48] + " tram";
				break;
			case 1:
				if (n[i] == '0') {
					if (n[i-1] != '0' && n[i+1] != '0') {
						spk += " le";
					}
				} else if (n[i] == '1') {
					spk += " muoi`";
				}else {
					spk += " " + W[int(n[i]) - 48] + " muoi";
				}
				break;
			case 2:
				if (n[i] == '5' && n[i-1] != '0') spk += " lam";
				else if (n[i] != '0') spk += " " + W[int(n[i]) - 48] + ".";
				break;
		}
	}

	cout << "Doc la: " << spk << endl;

	return 0;
}

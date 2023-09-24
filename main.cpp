#include<iostream>

using namespace std;

int main() {
	char c, l;

	cin >> l;
	cout << l;
	int ocr = 1; // 1 occurence outputted
	int next_lim = 2;
	while (cin.get(c)) {
		if (c == l && ocr < next_lim) { cout << c; ocr++; }
		else if (c != l) {
			next_lim = 1 + (ocr < 2);
			ocr = 1;
			l = c;
			cout << c;
		}
	}
	
}

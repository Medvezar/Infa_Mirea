#include "Header.h"


void task3_1() {
	int s, p, n, r;
	cout << "input(S, p, n):\t";
	cin >> s >> p >> n;
	r = p / 100;
	if (12 * (pow(1 + r, n) - 1))
		cout << "\ninvalid";
	else {
		cout << "\nm = " << (s * r * pow(1 + r, n)) / 12 * (pow(1 + r, n) - 1);
	}
}


void task3_2() {
	cout << "nothing";
}


void task3_3() {
	string textIn, text;
	cout << "input file name:\t";
	cin >> textIn;
	cout << "\n";
	ifstream file(textIn);
	if (!file.is_open())
		cout << "there is no file with this name";
	else {
		while (file >> text) {
			cout << text << '\n';
		}
		file.close();
	}
}


void task3_4() {
	cout << "nothing";
}


void task3_5() {
	cout << "nothing";
}
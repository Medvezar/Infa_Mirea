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
	{
		double S, m, n, l;
		double p, r, m1;
		m1 = 0;
		cout << "input(S -> m -> n)";
		cin >> S >> m >> n;
		if (S < 0 || m < 0 || n < 0)
			cout << "invalid";
		else if (S <= n * m) {
			cout << "p = 0%";
		}
		else {
			l = 0.1;
			bool test = false;
			for (p = 0.001; p < 100; p += 0.001)
			{
				r = p / 100;
				m1 = (S * r * pow((1 + r), n)) / (12 * (pow(1 + r, n) - 1));
				if (m1 <= m + l && m1 >= m - l) {
					cout << "p(%) = " << p;
					test = true;
					break;
				}
			}
			if (!test)
				cout << "invalid";
		}
	}
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
		while (getline(file, text)) {
			// getline(file, text);
			cout << text << '\n';
		}
		file.close();
	}
}


void task3_4() {
	string textIn, text;
	cout << "input file name:\t";
	cin >> textIn;
	cout << "\n";
	ifstream file(textIn);

	if (!file.is_open())
		cout << "there is no file with this name";
	else {
		while (getline(file, text)) {
			// getline(file, text);
			for (auto x : text) {
				if (x <= 57 && x >= 48)
					cout << x;
				else
					cout << ' ';
			}
			cout << '\n';
			//cout << text << '\n';
		}
		file.close();
	}
}


void task3_5() {
	string textIn;
	cout << "input your string:\t";
	cin >> textIn;
	cout << "\n";
	if (textIn.size() < 30 || textIn.size() > 30) {
		cout << "invalid(len: " << textIn.size() << " != 30)";
		/*
		bool test = true;
		char trash;
		while (test) {
			test = false;
			for (int x = 0; x < textIn.size() - 1; x++) {
				if (textIn[x] > textIn[x + 1]) {
					test = true;
					trash = textIn[x];
					textIn[x] = textIn[x + 1];
					textIn[x + 1] = trash;
				}
			}
		}
		cout << textIn;
		*/
	}
	else {
		bool test = true;
		char trash;
		while (test) {
			test = false;
			for (int x = 0; x < textIn.size() - 1; x++) {
				if (textIn[x] > textIn[x + 1]) {
					test = true;
					trash = textIn[x];
					textIn[x] = textIn[x + 1];
					textIn[x + 1] = trash;
					}
			}
		}
		cout << textIn;
	}
}
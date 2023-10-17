#include "Header.h"


void task4_1() {
	string textIn, str1, str2, extension = "txt";
	cout << "input file name:\t";
	cin >> str2;
	cout << '\n';
	/*
	cout << "input file extension:\t";
	cin >> extension;
	if (extension == "") {;
		cout << "\ndefault extension is '.txt'";
		extension = ".txt";
	}
	*/
	ofstream fileIn(str2 + '.' + extension);
	cout << "input numbers:\t";
	cin >> str1;
	getline(cin, textIn);
	cout << '\n';
	textIn = "|" + str1 + textIn + "|";
	while (textIn.find(' ') != -1)
	{
		textIn = textIn.replace(textIn.find(' '), 1, "|");
	}
	fileIn << textIn;
	fileIn.close();

	ifstream file(str2 + '.' + extension);
	bool test = false;
	int s = 0;
	int num1 = 0, num = 0, num2 = 0;
	int count = 1;
	getline(file, str2);
	//cout << "str2: " + str2 << '\n';
	for (int x = 0; x < str2.size(); x++) {
		//cout << "start s: " << s << '\n';
		num = 0;
		if (str2[x] == '|' && x != str2.size() - 1) {
			num1 = x + 1;
			num2 = x + 1;
			while (str2[num2] != '|')
				num2++;
			num2 -= 1;

			//cout << "num1: " << num1 << '\t' << "num2: " << num2 << '\t' << "x: " << x << '\n';
			for (int n = num1; n < num2 + 1; n++) {
				//cout << "cycl2: " << str2[n] << '\n';
				//cout << "cycl2 res: " << (str2[n] - 48) * pow(10, num2 - n) << '\n';
				num += (str2[n] - 48) * pow(10, num2 - n);
			}
		}
		s += num;
		x += num2 - num1 + 1;
	}

	cout << "Sum: " << s;
	file.close();

}
	


string signX(double num) {
	if (num < 0)
		return "\nless than zero";
	else if (num > 0)
		return "\nabove than zero";
	return "\nzero";
}


int task4_2() {
	double num;
	cout << "input:\t";
	cin >> num;
	cout << signX(num);
	return 0;
}

void task4_3() {
	cout << "nothing";
}

void task4_4() {
	cout << "nothing";
}

void task4_5() {
	cout << "nothing";
}

void task4_6() {
	cout << "nothing";
}
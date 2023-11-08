#include "Header.h"


int strToInt(string str) {
	bool test;
	int num = 0;
	for (int x = 0; x < str.size(); x++) {
		test = false;
		if (x == 0 && str[x] == '-')
			test = true;
		else
			num += (str[x] - 48) * pow(10, str.size() - x - 1);
	}
	if (test)
		num *= -1;
	return num;
}


bool notInt(string str) {
	bool test = false;
	if (!(isdigit(str[0]) || str[0] == '-'))
		return true;
	for (int x = 1; x < str.size(); x++) {
		if (!isdigit(str[x]))
			test = true;
	}
	return test;
}



int task5_1() {
	string in1, in2;
	int num1, num2, maxD = 0;
	cout << "\ninput numbers:\t";
	cin >> in1 >> in2;
	if (notInt(in1) || notInt(in2)) {
		cout << "\ninvalid\n";
		return 0;
	}
	num1 = strToInt(in1);
	num2 = strToInt(in2);
	for (int x = 1; x <= abs(num1); x++) {
		if (abs(num1) % x == 0 && abs(num2) % x == 0 && x > maxD)
			maxD = x;
	}
	cout << "\nNOD: " << maxD;
	return 0;
}


bool isSimple(int num) {
	int test = 0;
	for (int x = 1; x <= num; x++) {
		if (num % x == 0)
			test++;
	}
	if (test > 2)
		return 0;
	return 1;
}


int task5_2() {
	string input;
	int num1;
	cout << "\ninput number:\t";
	cin >> input;
	if (notInt(input)) {
		cout << "\ninvalid\n";
		return 0;
	}
	num1 = strToInt(input);
	//cout << '\n' << strToInt(input) << '\n';
	if (num1 < 2) {
		cout << "\ninvalid\n";
		return 0;
	}
	for (int x = 2; x <= num1; x++) {
		if (isSimple(x))
			cout << '\n' << x;
	}
	return 0;
}


int task5_3() {
	vector <string> fileText;
	string fileName, res, word = "", word2, line;
	int num1 = 0;
	cout << "\ninput file name:\t";
	cin >> fileName;
	ifstream file(fileName + ".txt");
	if (!file.is_open()) {
		cout << "\nthere is no file: " << fileName << ".txt\n";
		return 0;
	}
	while (getline(file, line)) {
		for (int x = 0; x < line.size(); x++) {
			word2 = "";
			if (x == 0 || line[x] == ' ') {
				if (line[x] == ' ')
					num1 = x + 1;
				else
					num1 = x;
				while (line[num1] != ' ' && num1 < line.size()) {
					//cout << "\n-----\n";
					word2 += line[num1];
					//cout << word2 << '\n';
					num1++;
					//cout << num1 << '\n';
				}
				//cout << "\n-------\n" << word << '\n' << word2;
				if (word.size() < word2.size())
					word = word2;
				if (num1 == line.size())
					break;
				x = num1 + 1;
			}
		}
		fileText.push_back(line);
	}
	file.close();
	cout << "\nmax len word: " << word << "\nlen: " << word.size() << '\n';
	cout << "\n------------------------------------\n";
	ofstream file1(fileName + ".txt");
	cout << "input your text: ";
	cin >> word;
	getline(cin, word2);
	word += word2;
	fileText.push_back(word);
	for (auto x : fileText)
		file1 << x << '\n';
	file1.close();
	return 0;
}
// 4 14

int task5_4() {
	return 0;
}
// 24 34

int task5_5() {
	return 0;
}
// 22 1
/*

*/
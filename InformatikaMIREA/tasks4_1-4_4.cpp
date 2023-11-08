#include "Header.h"
#define scene_length 50
#define scene_width 5  

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
			test = false;

			//cout << "num1: " << num1 << '\t' << "num2: " << num2 << '\t' << "x: " << x << '\n';
			for (int n = num1; n < num2 + 1; n++) {
				//cout << "cycl2: " << str2[n] << '\n';
				//cout << "cycl2 res: " << (str2[n] - 48) * pow(10, num2 - n) << '\n';
				if (n == num1 and str2[n] == '-')
					test = true;
				else
					num += (str2[n] - 48) * pow(10, num2 - n);
			}
		}
		if (test)
			num *= -1;
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


double circleS() {
	double r;
	cout << "\nr:\t";
	cin >> r;
	if (r <= 0) {
		cout << "\ninvalid\n";
		return -1;
	}
	return 3.14 * r * r;
}


double triangleS() {
	double h, a;
	cout << "\nHeight:\t";
	cin >> h;
	cout << "\nBase of triangle:\t";
	cin >> a;
	if (a <= 0 || h <= 0) {
		cout << "\ninvalid\n";
		return -1;
	}
	return 0.5 * a * h;
}


double rectangleS() {
	double a, b;
	cout << "\nlower:\t";
	cin >> a;
	cout << "\nhigher:\t";
	cin >> b;
	if (a <= 0 || b <= 0) {
		cout << "\ninvalid\n";
		return -1;
	}
	return a * b;
}

void task4_3() {
	char textIn = ' ';
	cout << "circle: c\ntriangle: t\nrectangle: r\nexit: e\n";
	while (textIn != 'e') {
		cout << "\ncommand:\t";
		cin >> textIn;
		if (textIn == 'e')
			break;
		if (textIn == 'c')
			cout << circleS() << "\n--------------\n";
		if (textIn == 't')
			cout << triangleS() << "\n--------------\n";
		if (textIn == 'r')
			cout << rectangleS() << "\n--------------\n";
	}
}

void task4_4() {
	for (int x = 0; x < 13; x++) {
		if (x < 6) {
			for (int j = 0; j < 8; ++j)
				cout << "* ";
			if (x % 2 == 0) {
				cout.width(60);
				cout << setw(60) << setfill('-');
			}
			std::cout << '\n';
			}
		}
	for (int x = 0; x < 19; x++) {
		if (x % 2 == 0)
			cout << setw(76) << setfill('-') << '\n';
		else
			cout << "\n";
	}
}

void task4_5() {
	cout << '\n';
	char screen[scene_length][scene_width * 2];
	for (int x = 0; x < scene_length; x++) {
		for (int y = 0; y < scene_width * 2; y++)
			screen[x][y] = ' ';
		screen[x][scene_width] = '-';
	}
	for (int x = 0; x < scene_length; x++) {
		double y = sin(x);
		if (abs(y) < scene_width)
			screen[x][(int)round(y - scene_width)] = '*';

	}
	for (int y = scene_width * 2 - 1; y >= 0; y--) {
		printf("%03d", y - scene_width);
		for (int x = 0; x < scene_length; x++) {
			printf("%c", screen[x][y]);
		}
		cout << '\n';
	}
}


string to_upper(string s) {
	string res = "";
	for (auto x : s)
		res += toupper(x);
	return res;
}


int nextH(vector <int> vect1, int index) {
	for (int x = index - 1; x >= 0; x--) {
		if (vect1[x] >= vect1[index])
			return x;
	}
	return -1;
}



int task4_6() {
	string s;
	vector <char> rim = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
	vector <int> number = { 1, 5, 10, 50, 100, 500, 1000 }, res;
	int num = 0, index;
	cout << "\ninput your number:\t";
	cin >> s;
	s = to_upper(s);
	for (int x = 0; x < s.size(); x++)
		if (find(rim.begin(), rim.end(), s[x]) == rim.end()) {
			cout << "\ninvalid\n";
			return -1;
		}
	for (int x = 0; x < s.size(); x++) {
		auto n1 = find(rim.begin(), rim.end(), s[x]);
		index = n1 - begin(rim);
		res.push_back(number[index]);
	}
	for (int x = res.size() - 1; x > -1; x--) {
		num += res[x];
		//cout << "-------------\n";
		//cout << num << endl;
		for (int n = nextH(res, x) + 1; n < x; n++)
			num -= res[n];
		//cout << num << endl;
		//cout << "x(before): " << x << endl;
		x = nextH(res, x) + 1;
		//cout << "x(after): " << x << endl;
	}
	cout << "num: " << num;
	return 0;
}


void task4_7() {
	int m, b, c;
	int s = 0;
	cout << "\ninput (m -> b -> c):\t";
	cin >> m >> b >> c;
	for (int x = 0; x < 15; x++) {
		s = (m * s + b) % c;
		cout << '\n' << s;
	}
	cout << "\nend";
}


vector <int> strToVect(string str) {
	vector <int> res;
	string test;
	int num1 = 0, num2 = 0;
	int num = 0;
	for (int x = 0; x < str.size() - 1; x++){
		num = 0;
		if (str[x] == ' ' && x != str.size() - 1) {
			num1 = x + 1;
			num2 = x + 1;
			while (str[num2] != ' ')
				num2++;
			num2 -= 1;
		}
		//cout << "\nnum1: " << num1 << '\t' << "num2: " << num2 << '\t' << "x: " << x << '\n';
		for (int n = num1; n < num2 + 1; n++) {
			//cout << "cycl2: " << str[n] << '\n';
			//cout << "cycl2 res: " << (str[n] - 48) * pow(10, num2 - n) << '\n';
			num += (str[n] - 48) * pow(10, num2 - n);
		}
		res.push_back(num);
		x += num2 - num1 + 1;
	}
	return res;
}



void maxSeller(vector <vector <double>> C) {
	double max = 0.0, min = 10000.0;
	int max1, min1;
	for (int x = 0; x < 3; x++) {
		if (C[x][0] > max) {
			max1 = x + 1;
			max = C[x][0];
		}
		else if (C[x][0] < min) {
			min1 = x + 1;
			min = C[x][0];
		}
	}
	cout << "\nmax seller: " << max1 << "\nmin seller: " << min1;
}


void maxKom(vector <vector<double>> C) {
	double max = 0.0, min = 10000.0;
	int max1, min1;
	for (int x = 0; x < 3; x++) {
		if (C[x][1] > max) {
			max1 = x + 1;
			max = C[x][1];
		}
		else if (C[x][1] < min) {
			min1 = x + 1;
			min = C[x][1];
		}
	}
	cout << "\nmax Kom seller: " << max1 << "\nmin Kom seller: " << min1;
}


void sumM(vector <vector<double>> C) {
	double s = 0;
	for (int x = 0; x < 3; x++) {
		s += C[x][0];
	}
	cout << "\nsumM: " << s;
}


void sumK(vector <vector<double>> C) {
	double s = 0;
	for (int x = 0; x < 3; x++) {
		s += C[x][1];
	}
	cout << "\nsumK: " << s;
}


void allM(vector <vector<double>> C) {
	double s = 0;
	for (int x = 0; x < 3; x++) {
		s += C[x][0];
	}
	for (int x = 0; x < 3; x++) {
		s += C[x][1];
	}
	cout << "\nsum All: " << s;
}



void task4_8() {
	vector <vector <int>> A;
	vector <vector <double>> B, C;
	vector <double> test;
 	string input1, input;
	double n;
	cout << "A\n	1	2	3	4\n";
	for (int x = 1; x < 4; x++){
		cout << x << ": ";
		cin >> input1;
		getline(cin, input);
		input = " " + input1 + input + " ";
		A.push_back(strToVect(input));
	}
	cout << "\nB\n1	2\n";
	for (int x = 1; x < 5; x++) {
		cout << x << ": ";
		cin >> n;
		test.push_back(n);
		cin >> n;
		test.push_back(n);
		B.push_back(test);
		test.clear();
		cout << '\n';
	}
	/*
	for (auto x : A) {
		cout << "\n------------\n";
		for (auto y : x)
			cout << y << ' ';
	}
	cout << "\nB:\n";
	for (auto x : B) {
		cout << "\n-----------\n";
		for (auto y : x)
			cout << y << " ";
	}
	*/
	for (int x = 0; x < A.size(); x++) {
		n = 0;
		test.clear();
		for (int y = 0; y < A[x].size(); y++) {
			n += A[x][y] * B[y][0];
		}
		test.push_back(n);
		n = 0;
		for (int y = 0; y < A[x].size(); y++) {
			n += A[x][y] * B[y][1];
		}
		test.push_back(n);
		C.push_back(test);
		test.clear();
	}
	cout << "\nC:\n";
	for (auto x : C) {
		cout << '\n';
		for (auto y : x)
			cout << y << ' ';
	}
	cout << "\n-------------\n";
	maxSeller(C);
	maxKom(C);
	sumM(C);
	sumK(C);
	allM(C);
}


string reverse(string str1) {
	string res = "";
	for (int x = str1.size() - 1; x >= 0 ; x--)
		res += str1[x];
	return res;
}


int task4_9() {
	vector <char> al = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	vector <int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
	vector <char> num2;
	vector <int> num;
	string num1, res = "";
	int base1, base2, index, test = 0;
	cout << "input (num -> base(max 16) -> res base(max 16)): ";
	cin >> num1 >> base1 >> base2;
	num1 = to_upper(num1);
	for (int x = 0; x < num1.size(); x++)
		if (find(al.begin(), al.end(), num1[x]) == al.end()) {
			cout << "\ninvalid\n";
			return -1;
		}
	for (int x = 0; x < num1.size(); x++) {
		auto n1 = find(al.begin(), al.end(), num1[x]);
		index = n1 - begin(al);
		num.push_back(nums[index]);
	}
	/*
	cout << "\n----------------------\n";
	for (auto x : num)
		cout << x << ' ';
	cout << "\n----------------------\n";
	*/
	for (int x = 0; x < num.size(); x++) {
		test += num[x] * pow(base1, num.size() - x - 1);
	}
	//cout << "\ntest(test): " << test << '\n'; // test
	while (test != 0) {
		//cout << "\ntest % base: " << test % base2 << '\n';
		auto n1 = find(nums.begin(), nums.end(), test % base2);
		index = n1 - begin(nums);
		//cout << "index = " << index;
		res += al[index];
		//cout << "\nres += " << al[index];
		test /= base2;
	}
	res = reverse(res);
	cout << "\nres: " << res;
} 
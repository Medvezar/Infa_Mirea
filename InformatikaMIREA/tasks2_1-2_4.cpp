#include "Header.h"


void task2_1() {
    float h, r, R, l;
    cout << "input height, radius (lower and higher) and len:\t";
    cin >> h >> r >> R >> l;
    if (h <= 0 || r <= 0 || R <= 0 || l <= 0)
        cout << "invalid";
    else {
        cout << "V = " << 3.14 * h * (R * R + R * r + r * r) / 3 << endl;
        cout << "S = " << 3.14 * (R * R + (R + r) * l + r * r) << endl;
    }
}


void task2_2() {
    int n1, n2;
    cout << "input(x and a):\t";
    cin >> n1 >> n2;
    if (abs(n1) > 1)
        cout << "w = " << n2 * log(abs(n1));
    else
        cout << "w = " << sqrt(n2 - (n1 * n1));
}


void task2_3() {
    int n1, n2, n3;
    cout << "input:\t";
    cin >> n1 >> n2 >> n3;
}


void task2_4() {
    int n1;
    cout << "input:\t";
    cin >> n1;
    cout << endl;
    for (int x = n1; x < n1 + 11; x++)
        cout << x;
    cout << '\n';
}

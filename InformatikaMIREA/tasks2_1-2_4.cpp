#include "Header.h"


void task2_1() {
    float h, r, R, l;
    cout << "input(height => radius (lower => higher)):\t";
    cin >> h >> r >> R;
    l = sqrt((R- r) * (R - r) + h * h);
    if ((h <= 0 || r <= 0 || R <= 0 || l <= 0))
        cout << "invalid";
    else {
        cout << "V = " << 3.14 * h * (R * R + R * r + r * r) / 3 << endl;
        cout << "S = " << 3.14 * (R * R + (R + r) * l + r * r) << endl;
    }
}


void task2_2() {
    float n1, n2;
    cout << "input(x => a):\t";
    cin >> n1 >> n2;
    if (n1 != 0) {
        if (abs(n1) < 1)
            cout << "w = " << n2 * log(abs(n1));
        else {
            if (n2 - n1 * n1 <= 0)
                cout << "invalid";
            else
                cout << "w = " << sqrt(n2 - (n1 * n1));
        }
    }
    else
        cout << "invalid";
}


void task2_3() {
    int n1, n2, n3;
    cout << "input(x => y => b):\t";
    cin >> n1 >> n2 >> n3;
    if (n3 - n2 <= 0 || n3 - n1 < 0)
        cout << "\ninvalid";
    else
        cout << "\nz = " << log(n3 - n2) * sqrt(n3 - n1);
}


void task2_4() {
    float n1;
    cout << "input:\t";
    cin >> n1;
    cout << endl;
    if (n1 >= 1) {
        if (int(n1) < n1)
            for (int x = n1 + 1; x < n1 + 10; x++)
                cout << x << "\t";
        else
            for (int x = n1; x < n1 + 10; x++)
                cout << x << "\t";
    }
    else {
        for(int x = 1; x < 11; x++)
            cout << x << "\t";
    }
    cout << '\n';
}


void task2_5() {
    cout << "| ";
    for (float x = -4; x <= 4; x += 0.5) {
        if (x - 1 == 0.0)
            cout << "invalid | ";
        else
            cout << (x * x - 2 * x + 2) / (x - 1) << " | ";
    }
    cout << "\nend";
}

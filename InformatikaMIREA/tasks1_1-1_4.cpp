#include "Header.h"



void task1_1() {
    float n1, n2;
    cout << "input:\t";
    cin >> n1 >> n2;
    cout << endl << n1 + n2 << endl << n1 - n2 << endl << n1 * n2 << endl;
    if (n2 != 0)
        cout << n1 / n2 << endl;
    else
        cout << "invalid\n";
}


void task1_2() {
    double n1, n2;
    cout << "input:\t";
    cin >> n1 >> n2;
    if (!(n1 == 0 && n2 != 0)) {
        if (n1 != 0 and n2 != 0)
            cout << "x = " << -1 * n2 / n1 << endl;
        else
            cout << "x = any number\n";
    }
    else
        cout << "invalid";
}


void task1_3() {
    int n1, n2, n3, d;
    cout << "input(a, b, c):\t";
    cin >> n1 >> n2 >> n3;
    d = n2 * n2 + (-4 * n1 * n3);
    if (n1 == 0 && n2 == 0 && n3 == 0)
        cout << "x = any number";
    else {
        if (n1 != 0) {
            if (d > 0)
                cout << "x1 = " << (-1 * n2 + sqrt(d)) / (2 * n1) << endl << "x2 = " << (-1 * n2 - sqrt(d)) / (2 * n1);
            if (d == 0)
                cout << "x = " << (-1 * n2) / (2 * n1) << endl;
            else
                cout << "invalid";
        }
        else
            if (n1 == 0 || n2 == 0 || n3 == 0)
                cout << "invalid";
            else
                cout << "invalid";
    }
}


void task1_4() {
    char light, st, daytime;
    cout << "is day outside?(y/n)";
    cin >> daytime;
    cout << "\nis light on?(y/n)\n";
    cin >> light;
    cout << "\nare the curtains open?(y/n)\n";
    cin >> st;
    if ((light != 'y' && light != 'n') || (daytime != 'y' and daytime != 'n') || (st != 'y' && st != 'n'))
        cout << "invalid";
    else {
        if ((light == 'y') || (st == 'y' && daytime == 'y'))
            cout << "light";
        else
            cout << "dark";
    }
}
#include "Header.h"



int main()
{   
    string textIn = "";
    while (true) {
        cout << "\ntask: \n(exit for close)\n";
        cin >> textIn;
        
        if (textIn == "exit")
            return 0;
        if (textIn == "1-1")
            task1_1();
        if (textIn == "1-2")
            task1_2();
        if (textIn == "1-3")
            task1_3();
        if (textIn == "1-4")
            task1_4();
        if (textIn == "2-1")
            task2_1();
        if (textIn == "2-2")
            task2_2();
        if (textIn == "2-3")
            task2_3();
        if (textIn == "2-4")
            task2_4();
        if (textIn == "2-5")
            task2_5();
        if (textIn == "3-1")
            task3_1();
        if (textIn == "3-2")
            task3_2();
        if (textIn == "3-3")
            task3_3();
        if (textIn == "3-4")
            task3_4();
        if (textIn == "3-5")
            task3_5();
        if (textIn == "4-1")
            task4_1();
        if (textIn == "4-2")
            task4_2();
        if (textIn == "4-3")
            task4_3();
        if (textIn == "4-4")
            task4_4();
        if (textIn == "4-5")
            task4_5();
        if (textIn == "4-6")
            task4_6();

    }
    return 0;
}


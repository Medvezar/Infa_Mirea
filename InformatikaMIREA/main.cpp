#include "Header.h"



int main()
{   
    bool testRep = false;
    string textIn = "", str1, str2;
    while (true) {
        if (!testRep) {
            cout << "\ntask: \n(exit for close / 'r' for repeat)\n";
            str1 = textIn;
            cin >> textIn;
            if (textIn == "r") {
                testRep = true;
            }
        }
        else {
            cout << "stop?\n";
            cin >> str2;
            if (str2 == "y") {
                testRep = false;
                textIn = "";
            }
        }
        if (textIn == "exit")
            return 0;
        /*
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
        */
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
        if (textIn == "4-7")
            task4_7();
        if (textIn == "4-8")
            task4_8();
        if (textIn == "4-9")
            task4_9();
        if (textIn == "5-1")
            task5_1();
        if (textIn == "5-2")
            task5_2();
        if (textIn == "5-3")
            task5_3();
        if (textIn == "5-4")
            task5_4();
    }
    return 0;
}


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
    }
    return 0;
}


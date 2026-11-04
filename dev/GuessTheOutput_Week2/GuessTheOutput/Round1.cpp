#include <iostream>

void Round1()
{
    int total = 0;

    for (int i = 1; i <= 3; i++)    //1. i = 1 and total = 1
    {                               //2. i = 2 and total = 3
        total += i;                 //3. i = 3 and total = 6
    }

    std::cout << total;
    // A. 3
    // B. 6 <--- THIS ONE
    // C. 9
    // D. The Loop Has Betrayed Us
}
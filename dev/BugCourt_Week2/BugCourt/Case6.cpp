#include <iostream>
void Case6()
{
    int health = 50;

    while (health < 100)
    {
        std::cout << "Healing...\n";
    }
}

// BUG COURT: CASE 6
// Why does the healing loop never finish?
// A. The condition is always false
// B. The output statement resets health
// C. Health never changes inside the loop
// D. Health starts above 100
// Cast your verdict in chat: A, B, C, or D.

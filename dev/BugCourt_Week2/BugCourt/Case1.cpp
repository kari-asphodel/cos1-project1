#include <iostream>
void Case1()
{
    int health = 100;

    if (health == 0)
    {
        std::cout << "You have died.\n";
    }
}

// BUG COURT: CASE 1
// What is the primary bug?
// A. The health variable is never declared
// B. The condition assigns 0 instead of comparing values <--- THIS ONE
// C. The output statement is missing a semicolon
// D. The condition checks the wrong variable
// Cast your verdict in chat: A, B, C, or D.
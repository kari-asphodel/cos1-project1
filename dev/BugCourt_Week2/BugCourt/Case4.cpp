#include <iostream>
void Case4()
{
    int gold = 50;

    std::cout << gold << "\n";

}

// BUG COURT: CASE 4
// What is the issue with gold?
// A. It is declared as the wrong type
// B. It is printed twice
// C. It is initialized to zero
// D. It is used before being initialized <--- THIS ONE
// Cast your verdict in chat: A, B, C, or D.

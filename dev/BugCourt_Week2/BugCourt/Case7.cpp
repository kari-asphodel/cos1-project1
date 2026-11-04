#include <iostream>
void Case7()
{
    int dragons = 5;

    dragons -= 10;

    std::cout << dragons;
}

// BUG COURT: CASE 7
// What logical issue can occur with the dragon count?
// A. Subtracting 10 from 5 produces a negative count
// B. The variable is never initialized
// C. The -= operator is invalid in C++
// D. The output always prints 5
// Cast your verdict in chat: A, B, C, or D.

#include <iostream>

int CreateScore()
{
    int score = 100;

    return score;
}

int main()
{
    int score = CreateScore();

    std::cout << score << '\n';

    return 0;
}
// What makes the returned pointer unsafe ?
//- A. A function can never return a pointer.
//- B. It points to a local variable whose lifetime ends when the function returns.  - THIS ONE
//- C. The integer 100 is too large for a pointer.
//- D. Dereferencing any pointer with * is illegal.
//- E. The pointer is attempting necromancy on a variable that has already crossed into the afterlife.
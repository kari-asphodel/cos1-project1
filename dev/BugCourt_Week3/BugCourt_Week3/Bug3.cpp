#include <iostream>
int main()
{
    int health = 50;

    if (health = 0)
    {
        std::cout << "Game Over\n";
    }
    else
    {
        std::cout << "Still alive!\n";
    }

    return 0;
}
// What does the condition if (health = 0) actually do ?
//- A. Assigns zero to health, then evaluates as false.
//- B. Compares health with zero correctly.
//- C. Causes a guaranteed compile error.
//- D. Leaves health at 50 and enters the if branch.
//- E. The equals sign committed identity theft and fled wearing its sibling’s face.
#include <iostream>
void Case8()
{
    std::cout << "1. Play\n";
    std::cout << "2. Exit\n";

    if (choice == 7)
    {
        openSecretShop();
    }
}

// BUG COURT: CASE 8
// Which problem is visible in this snippet?
// A. The menu has too many options
// B. The cout statements are invalid
// C. The condition should use assignment
// D. choice is undeclared and openSecretShop has no visible declaration
// Cast your verdict in chat: A, B, C, or D.

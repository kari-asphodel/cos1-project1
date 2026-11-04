#include <iostream>
void Case2()
{
    while (true)
    {
        std::cout << "1. Exit\n";

        int choice;
        std::cin >> choice;

        if (choice == 1)
        {
            std::cout << "Goodbye!\n";
        }
    }
}

// BUG COURT: CASE 2
// Why does choosing Exit fail to end the menu?
// A. The loop has no break or return after Goodbye
// B. The menu needs a vector
// C. The choice variable must be global
// D. The cout statement is outside the loop
// Cast your verdict in chat: A, B, C, or D.

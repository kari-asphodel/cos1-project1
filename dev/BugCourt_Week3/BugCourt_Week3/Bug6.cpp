#include <iostream>
int main()
{
    std::string input;
    int choice = 0;

    while (choice != 3)
    {
        std::cout << "1. Play\n";
        std::cout << "2. Instructions\n";
        std::cout << "3. Exit\n";
        std::cout << "Choice: ";

        std::cin >> input;;

        try 
        {
            choice = std::stoi(input);
        }
        catch (...)
        {
            std::cout << "That was not a number.";
        }

        if (choice == 1)
        {
            std::cout << "Playing...\n";
        }
        else if (choice == 2)
        {
            std::cout << "Instructions...\n";
        }
    }
}
// What happens if the user enters potato at the integer prompt ?
//- A. choice becomes the string potato.
//- B. The program automatically discards the text and asks again normally.
//- C. std::cin enters a failed state; without recovery, later reads keep failing and the menu can repeat.  - THIS ONE
//- D. The program is guaranteed to terminate immediately.
//- E. The potato achieves sentience and takes administrative control of the application.
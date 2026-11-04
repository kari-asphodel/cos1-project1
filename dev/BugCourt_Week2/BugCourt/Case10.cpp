#include <iostream>
void Case10()
{
    int choice;
    std::string input;
    std::cin >> input;
    try
    {
        choice = std::stoi(input);
    }
    catch (...) // catch all
    {
        std::cout << "that is not a number, try again.\n";
    }

    std::cout << "You chose: " << choice;
}

// BUG COURT: CASE 10
// What happens if the user types letters instead of a number?
// A. The program automatically asks again
// B. The letters are converted to zero reliably
// C. Input extraction fails, and choice may be used uninitialized <--- THIS ONE
// D. The program throws a C++ exception automatically
// Cast your verdict in chat: A, B, C, or D.

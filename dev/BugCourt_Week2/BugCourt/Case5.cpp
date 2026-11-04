#include <iostream>
#include <vector>
void Case5()
{
    std::vector<std::string> inventory;

    inventory.push_back("Sword");

    inventory.clear();
    if (!inventory.empty())
    {
        std::cout << inventory[0];
    }
}

// BUG COURT: CASE 5
// Why is inventory[0] unsafe here?
// A. push_back does not add an item
// B. clear removes all items before the access <--- THIS ONE
// C. Strings cannot be stored in vectors
// D. The vector must be sorted first
// Cast your verdict in chat: A, B, C, or D.

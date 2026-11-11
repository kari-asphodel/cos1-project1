#include <iostream>
int CalculateDamage(int attack, int defense)
{
    return attack - defense;
}
int main()
{
    int damage = CalculateDamage(20, 5);

    std::cout << damage;
}
// What is wrong with CalculateDamage() ?
//- A. The subtraction operator is invalid for integers.
//- B. The function promises an int but reaches the end without returning a value. - THIS ONE
//- C. The function has too many parameters.
//- D. std::cout cannot print a function result.
//- E. The function ghosted its return type and moved dimensions without a forwarding address.
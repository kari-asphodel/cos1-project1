#include <iostream>
#include <string>
class Enemy
{
public:
    std::string name;
    int health;
};
int main()
{
    Enemy monster;

    monster.name = "Grave Crawler";
    monster.Health = 100;

    std::cout << monster.health;

    return 0;
}
// Why does this program fail to compile ?
//- A. Enemy must have a constructor.
//- B. monster.name is invalid syntax.
//- C. health must be a string.
//- D. The code assigns to monster.Health, but the member is named health.
//- E. The monster’s health insurance refuses to cover capitalization - related injuries.
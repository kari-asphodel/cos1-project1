#include <iostream>
#include <string>
class Character
{
private:
    std::string name;
    int health;
public:
    Character(std::string n, int h)
    {
        name = n;
        health = h;
    }
    Character(const Character& other)
    {
        name = other.name;
        health = other.health;
    }
    void Display()
    {
        std::cout << name << ": " << health << '\n';
    }
};
int main()
{
    Character player1("Morrigan", 100);
    Character player2 = player1;
    player2.Display();
}
// What is wrong with this copy constructor ?
//- A. It copies name but leaves health uninitialized. - THIS ONE
//- B. Copy constructors cannot accept references.
//- C. player2 and player1 are always the same object.
//- D. Display() must return an integer.
//- E. The cloning ritual was interrupted by a necromancer demanding overtime pay.
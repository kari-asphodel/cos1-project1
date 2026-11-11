#include <iostream>
#include <string>
class Player
{
public:
    std::string name;

    void DisplayName()
    {
        std::cout << name << '\n';
    }
};
int main()
{
    Player player;
    player.name = "Asphodel";

    player.DisplayName();

    return 0;
}
// What is preventing this program from compiling ?
//- A. The name member is private.
//- B. The call uses displayName() instead of DisplayName(). - THIS ONE
//- C. The Player object was never initialized.
//- D. std::string cannot be stored in a class.
//- E. The compiler rejected the defendant’s vibes and sentenced it to 400 years of screaming in lowercase.
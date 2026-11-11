#include <iostream>
int main()
{
    int enemyHealth = 30;

    while (enemyHealth > 0)
    {
        std::cout << "You attack!\n";
        std::cout << "Enemy health: "
            << enemyHealth << '\n';
        enemyHealth -= 10;
    }
    std::cout << "Enemy defeated!\n";
}
// Why can the goblin survive forever ?
//- A. The while loop runs only once.
//- B. std::cout resets enemyHealth to 30.
//- C. enemyHealth is never reduced, so the loop condition stays true. - THIS ONE
//- D. The program has a missing semicolon after while.
//- E. The goblin became an immortal landlord and now collects rent from the player’s descendants.
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> scores = { 10, 20, 30 };

    for (int i = 0; i <= scores.size(); i++)
    {
        std::cout << scores[i] << '\n';
    }

    return 0;
}
// What is the primary problem with this loop ?
//- A. The vector has no elements.
//- B. The loop starts at the wrong index.
//- C. <= permits an out - of - bounds access when i equals scores.size().
//- D. std::cout cannot print integers from a vector.
//- E. The vector opened a portal to the shadow realm and is charging rent for nonexistent memory.
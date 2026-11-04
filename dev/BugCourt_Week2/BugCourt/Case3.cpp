#include <iostream>
#include <vector>

void Case3()
{
    std::vector<int> scores = { 10, 20, 30 };

    for (int i = 0; i <= scores.size(); i++)
    {
        std::cout << scores[i] << "\n";
    }
}

// BUG COURT: CASE 3
// What is wrong with the loop?
// A. The vector is empty
// B. The loop skips index 0
// C. The loop accesses one index beyond the vector
// D. The vector needs to be a pointer
// Cast your verdict in chat: A, B, C, or D.

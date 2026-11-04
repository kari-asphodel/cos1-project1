#include <iostream>
void Case9()
{
    Potion* potion = new Potion();

    potion->drink();
}

// BUG COURT: CASE 9
// Assuming Potion is defined elsewhere, what resource-management issue exists?
// A. The pointer cannot call methods
// B. The allocated Potion is never deleted
// C. The new operator initializes a null pointer
// D. drink automatically deletes the object
// Cast your verdict in chat: A, B, C, or D.

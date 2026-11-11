#include <iostream>

int main()
{
    int* number = new int(42);

    std::cout << *number << '\n';

    delete number;

    return 0;
}
// What crime occurs after printing 42 ?
//- A. The pointer is never allocated.
//- B. delete must be called before printing.
//- C. Deleting a pointer is always illegal.
//- D. The same allocation is deleted twice, causing undefined behavior. - THIS ONE
//- E. The heap filed a restraining order after the programmer disturbed the dead twice.
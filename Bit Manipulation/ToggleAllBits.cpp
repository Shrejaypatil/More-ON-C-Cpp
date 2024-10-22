#include <iostream>

using namespace std;

/*
approach:

create a mask which will contain 1s at all position , than we simply perform and operation with original number

*/

int main()
{

    int n;
    cout << "Enter Number: ";
    cin >> n;

    int numBits = sizeof(n) * 8 - __builtin_clz(n);

    // Create a bitmask with all bits set to 1 of the same length as num
    int bitmask = (1 << numBits) - 1; // Example: for 1010 (10), this gives 1111 (15)

    // Toggle the bits using XOR with the bitmask
    int toggledNum = n ^ bitmask;

    cout << "The new number is: " << toggledNum << endl;

    return 0;
}
#include <iostream>

using namespace std;

/*
approach:

create a mask which will contain a 1 at the position given , than we simply perform or operation with original number

*/

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    int i;
    cout << "Enter position:";
    cin >> i;

    n = n | (1 << i);

    cout << "The new number is: " << n << endl;
}
#include <iostream>

using namespace std;

int countSetBruteForce(int n)
{

    int count = 0;
    while (n)
    {
        int bit = n & 1;
        if (bit == 1)
            count++;

        n >>= 1;
    }

    return count;
}

int countSetOptimal(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1); // this step will shut down the rightmost set bit
        count++;
    }

    return count;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    /*
    We have two approches here:

    1. brute force T = O(n) , S = O(1) , where n is total bits
    2. Optimal T = O(n) , S = O(1) , where n is total set bits

    */

    cout << "The number of set bits in " << n << " are " << countSetBruteForce(n) << endl;
    cout << "The number of set bits in " << n << " are " << countSetOptimal(n) << endl;

    return 0;
}
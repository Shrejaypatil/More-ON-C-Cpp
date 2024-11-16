#include <stdio.h>

int main()
{
    int arr[] = {4, 5, 6, 7, 5, 4};

    int n = sizeof(arr) / sizeof(arr[0]);

    int xor_all = 0;

    for (int i = 0; i < n; i++)
    {
        xor_all ^= arr[i];
    }

    // find rightmost set bit

    int set_bit = xor_all & -xor_all;

    int num1 = 0, num2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] & set_bit)
        {
            num1 ^= arr[i];
        }
        else
        {
            num2 ^= arr[i];
        }
    }

    printf("The two non repeating numbers are : %d and %d", num1, num2);

    return 0;
}
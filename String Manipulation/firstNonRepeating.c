#include <stdio.h>

char BruteForceNonRepeating(char str[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int ref = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (str[i] == str[j])
            {
                ref = 1;
            }
        }
        if (ref == 0)
        {
            return str[i];
        }
    }
    return '\0';
}

char OptimalNonRepeating(char str[], int n)
{

    int count[26] = {0};

    for (int i = 0; i < n; i++)
    {
        char ch = str[i];

        count[(ch - 'a')] += 1;
    }

    // for (int i = 0; i < 26; i++)
    // {
    //     printf("%d ", count[i]);
    // }
    // printf("\n");

    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 1)
        {
            return ('a' + i);
        }
    }

    return '\0';
}

int main()
{

    char str[] = "geeksforgeeks";

    int n = sizeof(str) / sizeof(char);

    /*
    Find first non-repeating character of given string

    1. Brute force
    2. optimal

    */

    printf("First Non repeating char with brute force is : %c \n", BruteForceNonRepeating(str, n));
    printf("First Non repeating char with Optimal is : %c \n", OptimalNonRepeating(str, n));

    return 0;
}
#include <stdio.h>

int main()
{
    char arr[] = "Shrejay";

    int n = sizeof(arr)/sizeof(char);

    printf("%d \n",n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = i; k < j; k++)
            {
                printf("%c", arr[k]);
            }
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
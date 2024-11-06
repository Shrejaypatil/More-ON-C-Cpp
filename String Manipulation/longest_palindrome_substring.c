#include <stdio.h>
#include <string.h>

int palindrome(char* str, int s, int e)
{
    while(s < e)
    {
        if(str[s] != str[e])
        {
            return 0;
        }
        s++;
        e--;
    }

    return 1;
}

void solve(char *str)
{
    int n = strlen(str);

    for(int i=0; i< n; i++)
    {
        for(int j = i; j< n ;j++)
        {
            if(palindrome(str, i, j))
            {
                printf("palindrome found from %d to %d  : ",i,j);
                for (int k = i; k <= j; k++) { // Print the palindrome substring
                    printf("%c", str[k]);
                }
                printf("\n");
            }
        }
    }

}

int main()
{
    char s[] = "abacdfgdcaba";
    solve(s);
    return 0;
}
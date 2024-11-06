#include<stdio.h>
#include<string.h>

void swap(char *x, char* y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int idx, int n)
{
    if(idx == n)
    {
        printf("%s \n",str);
        return ;
    }

    for(int k=idx; k<n ;k++)
    {
        swap(&str[idx], &str[k]);

        permute(str, idx+1, n);

        swap(&str[idx], &str[k]);
    }
}

int main()
{
    char str[] = "abcd";

    int n = strlen(str);

    permute(str, 0, n);

    return 0;
}
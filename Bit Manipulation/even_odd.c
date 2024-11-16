
#include <stdio.h>

int main()
{
    int n = 4425, ans = 0;
    

    while(n)
    {
        ans = ans*10 + (n%10);
        n = n/10;
    }   

    printf("The reverse number is: %d", ans);

    return 0;
}

#include <stdio.h>

int main()
{
    int n = 10;
    
    int k = 2;
    
    
    n = n ^ (1<<k);
    
    printf("The number modified %d",n);
    
    return 0;
}
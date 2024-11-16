
#include <stdio.h>



int main()
{
    int n = 32;
    
    int k = 3;
    
    
    n = n | (1<<k);
    
    printf("The number modified %d",n);
    
    return 0;
}
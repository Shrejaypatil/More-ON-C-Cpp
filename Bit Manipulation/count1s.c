#include <stdio.h>

int countBits(int n)
{
    int counter = 0;
    
    while(n)
    {
        if((n&1)==1)
        {
            counter++;
        }
        n = n>>1;
    }
    
    return counter;
}

int countBitsOP(int n)
{
    int counter = 0;
    
    while(n)
    {
        n = n & (n-1);
        counter++;
    }
    
    return counter;
}

int main()
{
    int n = 32;
    
    printf("Total set bits : %d \n",countBits(n));
    printf("Total set bits with OP: %d \n",countBitsOP(n));
    
    return 0;
}
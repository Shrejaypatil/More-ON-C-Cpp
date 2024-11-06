#include <stdio.h>

/*
Callback function can also have a return value;

*/

int add_func(int x, int y)
{
    return x+y;
}


int main()
{
    
    int a = 10, b = 20;
    
    int (*ptr)(int,int) = add_func;
    
    printf("The addition is %d", (*ptr)(a,b));
    
    return 0;
}
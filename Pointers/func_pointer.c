#include <stdio.h>

/*
function pointers are mostly used in multithreading 

*/

void display()
{
    printf("Executing pointer function \n");
}


int main()
{
    void(*ptr)() = display;
    
    for(int i=0;i<2;i++)
    {
        (*ptr)();
    }
    
    
    return 0;
}
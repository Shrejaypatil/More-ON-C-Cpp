
#include <stdio.h>

/*
callback function are the function which make use of function pointer concept
as well as thee type of fucntion are usually called when a certain event is triggered.

*/

void callback_func()
{
    printf("callback function is being executed \n");
    return;
}

void caller_func(void(*ptr)())
{
    for(int i=0; i< 10; i++)
    {
        printf("%d \n",i);
        if(i==5)
        {
            printf("Event triggered calling the callback func \n");
            (*ptr)();
        }
    }
}

int main()
{
    
    void (*ptr)() = callback_func;
    
    caller_func(ptr);
    
    return 0;
}
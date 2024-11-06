#include <stdio.h>

/*
Callback function can also have a return value;

*/

int add_func(int x, int y)
{
    return x+y;
}
int sub_func(int x, int y)
{
    return x-y;
}
int div_func(int x, int y)
{
    return x/y;
}
int multi_func(int x, int y)
{
    return x*y;
}


int main()
{
    
    int a = 20, b = 10;
    
    int (*ptr)(int,int) = add_func;
    
    while(1)
    {
        int choice;
        printf("1.add\n");
        printf("2.sub\n");
        printf("3.div\n");
        printf("4.multi\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        
        
        switch(choice)
        {
            case 1:
                printf("The addition is %d \n", (*ptr)(a,b));
                break;
                
            case 2:
                ptr = sub_func;
                printf("The subtraction is %d \n", (*ptr)(a,b));
                break;
                
            case 3:
                ptr = div_func;
                printf("The division is %d \n", (*ptr)(a,b));
                break;
                
            case 4:
                ptr = multi_func;
                printf("The multiplication is %d \n", (*ptr)(a,b));
                break;
                
            default:
                printf("Enter valid choice \n");
                
        }
    }
    
    return 0;
}
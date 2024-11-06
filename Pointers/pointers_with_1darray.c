
#include <stdio.h>



int main()
{
    
    int arr[] = {1,0,54,4,5167,16,5};
    
    int n = sizeof(arr)/sizeof(int);
    
    
    int *ptr = arr;
    
    
    printf("Printing with pointers: \n");
    for(int i=0;i <n ;i++)
    {
        printf("%d ", *ptr);
        ++ptr; // pointer aritmetic
    }
    printf("\n");
    
    printf("Printing with array name: \n");
    for(int i=0;i <n ;i++)
    {
        printf("%d ", *(arr+i));
    }
    printf("\n");
    
    ptr = arr;
    
    printf("Priniting with pointer index: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d ", *(ptr+i));
    }
    printf("\n");
    return 0;
}
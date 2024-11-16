
#include <stdio.h>



int main()
{
    int n = 1;
    
    char *c = (char*)&n;

    if(*c==1)
    {
        printf("Little endian");
    }
    else
    {
        printf("Big endian");
    }
    
    return 0;
}
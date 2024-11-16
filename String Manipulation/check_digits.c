#include <stdio.h>
#include <string.h>

/*check digits in string*/

int check(char str[], int n)
{
   for(int i=0; i<n; i++)
   {
       if(str[i] >= '0' && str[i] <= '9')
       {
           return 1;
       }
   }
   
   return 0;
}

int main() {
    // Write C code here
    char str[] = "paris0 jersey";
    
    if (check(str,strlen(str)))
    {
        printf("string has digits \n");
    }
    else
    {
        printf("string do not have digits \n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

/*Reverse a string using recursion*/

void reverse(char str[], int i, int j)
{
    // base cond
    
    if(i>=j)
    {
        return; 
    }
    else
    {
        char ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        reverse(str,i+1,j-1);
    }
}

int main() {
    // Write C code here
    char str[] = "paris jersey";
    
    printf("%d ", strlen(str)-1);
    
    reverse(str,0,strlen(str)-1);
    
    printf("The modified string is %s", str);

    return 0;
}
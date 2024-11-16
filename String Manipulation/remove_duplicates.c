#include <stdio.h>
#include <string.h>

// remove the duplicate character from String

void removeDuplicates(char *str, int n)
{
    if (n == 0) return;
    
    char visited[256] = {0};
    
    int index=0;
    
    for(int i=0; i<n; i++)
    {
        if(!visited[(unsigned char)str[i]])
        {
            visited[(unsigned char)str[i]] = 1;
            str[index++] = str[i];
        }
        
    }
    
    str[index] = '\0';
    
    printf("The modified string is: %s\n", str);
}

int main()
{
    char str[] = "aabcc";
    
    int n = strlen(str);
    
    removeDuplicates(str,n);
    
    // printf("The moddified string is: %s", str);
    
    return 0;
}
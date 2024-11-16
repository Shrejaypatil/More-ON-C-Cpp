#include <stdio.h>
#include <string.h>

// find the maximum occurring character in given String

char findchar(char str[], int n)
{
    int freq[256] = {0};
    
    for(int i=0; i<n; i++)
    {
        freq[str[i]]++; 
    }
    
    int max = 0;
    
    for(int i=0; i<256 ;i++)
    {
        if(freq[i] > freq[max])
        {
            max = i;
        }
    }
    
    return (char)max;
}

int main()
{
    
    char str[] = "testtcase";
    
    int n = strlen(str);
    
    printf("The most occuring character is: %c", findchar(str,n));
    
    return 0;
}
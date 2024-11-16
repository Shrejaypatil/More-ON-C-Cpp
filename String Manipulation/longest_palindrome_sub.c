#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// longest palindrome substring

int checkpalindrome(const char *str, int i, int j)
{
    while(i<j)
    {
        if(str[i]!= str[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    
    return 1;
}

char* longPS(char *str, int n)
{

    
    int idx1=0,idx2=0;
    
    int len = 0;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i; j<n;j++)
        {
            if(checkpalindrome(str,i,j))
            {
                if(len < j-i+1)
                {
                    len = j - i + 1;
                    idx1 = i;
                    idx2 = j;
                }
            }
        }
    }
    
    char *ans = (char *)malloc((len + 1) * sizeof(char));
    
    for(int m = idx1; m<=idx2;m++)
    {
        ans[m-idx1] = str[m];
    }
    
    ans[len] = '\0';
    
    return ans;
}

int main()
{
    char *str = "a";
    
    int n = strlen(str);
    
    printf("longest palindromic substring is : %s", longPS(str,n));
    
    return 0;
}
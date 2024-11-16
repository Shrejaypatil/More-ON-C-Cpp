#include <stdio.h>
#include <string.h>



int checkrepeat(const char *str,int i, int j)
{
    char visited[256] = {0};
    
    for(int k=i; k<=j;k++)
    {
        if(visited[str[k]])
        {
            return 0;
        }
        
        visited[str[k]] = 1;
    }
    
    return 1;
    
}

int longestSubstrwo(char *str, int n)
{
    // find all substrings
    
    int len = 0;
    
    for(int i=0;i<n;i++)
    {
        for(int j= i; j<n;j++)
        {
            if(checkrepeat(str,i,j))
            {
                if(len < (j-i+1))
                {
                    len =j-i+1;
                }
            }
        }
    }
    
    return len;
}

int main() {
    
    char *str = "abcddffffcc";
    
    int n = strlen(str);
    
    printf("length of the longest substring without repeating characters is %d\n",longestSubstrwo(str,n));

    return 0;
}
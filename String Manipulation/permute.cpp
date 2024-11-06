#include <bits/stdc++.h>

using namespace std;


void permute(string &str, int i)
{
    if(i == str.size())
    {
        cout << str << endl;
        return;
    }

    for(int k = i ; k < str.size() ; k++)
    {
        swap(str[i],str[k]);

        permute(str,i+1);

        swap(str[i],str[k]);
    }
    
}

int main()
{

    string input = "abcd";

    int n = input.size();

    permute(input,0);


    return 0;
}
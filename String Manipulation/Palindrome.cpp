#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

/*
Approaches:

1. brute force : T = O(n) : S = O(n)
2. two pointer : T = O(n) : S = O(1)                [ Optimal ]
3. recursion : T = O(n) : s = O(n)

*/

bool checkPalindromeBruteForce(string s)
{
    string s1 = "";

    int i = 0;

    while (s[i] != '\0')
    {
        s1 += s[i];
        i++;
    }

    return s1 == s;
}

int checkPalindromeTwoPointer(string s)
{
    int i = 0, j = s.length() - 1;

    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return 0;
        }
        i++;
        j--;
    }

    return 1;
}

bool checkPalindromeRecurion(string s, int i, int j)
{
    // base cond
    if (i >= j)
    {
        return true;
    }
    if (s[i] != s[j])
    {
        return false;
    }

    // recursive call
    return checkPalindromeRecurion(s, i + 1, j - 1);
}

int main()
{
    string str = "NAMAN";

    // if question says case insensitive than lowerise the characters for ease

    int i = 0;
    string temp = "";

    while (str[i] != '\0')
    {
        char c = tolower(str[i]);
        temp += c;
        i++;
    }

    cout << "Modified :" << temp << endl;

    temp = "NAMAN";

    cout << "Modified :" << temp << endl;

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    cout << "Modified :" << str << endl;

    /*
    We have two methods for string case change:

    1. toupper, tolower but works for each char , hence loop required
    2. tranform function which takes iterators and the function on it as args

    */

    cout << "Enter string to check with brute force: ";
    cin >> str;

    if (checkPalindromeBruteForce(str))
    {
        printf("Yes, it is Palindrome \n");
    }
    else
    {
        printf("No, not a Palindrome \n");
    }

    cout << "Enter string to check with two pointer: ";
    cin >> str;

    if (checkPalindromeTwoPointer(str))
    {
        printf("Yes, it is Palindrome \n");
    }
    else
    {
        printf("No, not a Palindrome \n");
    }

    cout << "Enter string to check with recursion: ";
    cin >> str;

    if (checkPalindromeRecurion(str, 0, str.length() - 1))
    {
        printf("Yes, it is Palindrome \n");
    }
    else
    {
        printf("No, not a Palindrome \n");
    }

    return 0;
}
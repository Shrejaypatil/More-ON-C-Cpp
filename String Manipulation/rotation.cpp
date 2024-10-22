#include <iostream>

using namespace std;

bool checkRotatedBruteForce(string s1, string s2)
{
    int len1 = s1.size();
    int len2 = s2.size();
    if (len1 != len2)
    {
        return 0;
    }

    // Generate all rotations of str1 and check if str2 matches
    for (int i = 0; i < len1; i++)
    {
        // Check if the rotated version of str1 matches str2
        int j;
        for (j = 0; j < len1; j++)
        {
            if (s1[(i + j) % len1] != s2[j])
            {
                break; // Mismatch found
            }
        }
        if (j == len1)
        {
            return 1; // str2 is a rotation of str1
        }
    }
    return 0; // No match found
}

bool checkRotatedOptimal(string s1, string s2)
{
    string concat = s1 + s1;

    if (concat.find(s2) != string ::npos)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool checkRotatedRecursion(string s1, string s2, int n, int index)
{
    // base cond

    if (index == n)
    {
        return false;
    }

    for (int i = 0; i < n; i++)
    {
        if (s1[i] != s2[(i + index) % n])
        {
            return checkRotatedRecursion(s1, s2, n, index + 1);
        }
    }

    return true;
}

int main()
{
    string s1 = "ABCD";
    string s2 = "CDAB";

    // cout << "Enter string : ";
    // cin >> s2;

    if (checkRotatedBruteForce(s1, s2))
    {
        cout << "String is rotated \n";
    }
    else
    {
        cout << "String not rotated \n";
    }
    if (checkRotatedOptimal(s1, s2))
    {
        cout << "String is rotated \n";
    }
    else
    {
        cout << "String not rotated \n";
    }
    if (checkRotatedRecursion(s1, s2, s1.size(), 0))
    {
        cout << "String is rotated \n";
    }
    else
    {
        cout << "String not rotated \n";
    }

    return 0;
}

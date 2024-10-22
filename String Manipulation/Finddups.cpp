// #include <iostream>
// #include <unordered_map>

// int main()
// {
//     unordered_map<char, int> mp;

//     string s = "abaabcdea";

//     for (int i = 0; i < s.size(); i++)
//     {
//         mp[s[i]]++;
//     }

//     string ans = "";

//     for (auto it : mp)
//     {
//         if (it.second > 1)
//         {
//             ans += it.first;
//         }
//     }

//     cout << "The duplicates in string are: " << ans << endl;

//     return 0;
// }

#include <stdio.h>
#include <string.h>

// void findDuplicatesBruteForce(const char *str)
// {
//     int len = strlen(str);
//     int printed[256] = {0}; // To track printed characters

//     printf("Duplicate characters (Brute Force): ");
//     for (int i = 0; i < len; i++)
//     {
//         for (int j = i + 1; j < len; j++)
//         {
//             if (str[i] == str[j])
//             {
//                 // Check if this character has already been printed
//                 if (!printed[str[i]])
//                 {
//                     printf("%c ", str[i]);
//                     printed[str[i]] = 1; // Mark this character as printed
//                 }
//                 break; // Break after finding the first duplicate
//             }
//         }
//     }
//     printf("\n");
// }

// using namespace std;

// void finddups(const char *s)
// {
//     int n = strlen(s);

//     printf("%d", n);

//     int count[256] = {0};

//     for (int i = 0; i < n; i++)
//     {
//         count[s[i]]++;
//     }

//     for (int i = 0; i < 256; i++)
//     {
//         if (count[i] > 1)
//         {
//             printf("%c", i);
//         }
//     }
// }

int main()
{
    const char *str = "abaabcedaaaaaaaaabbbbbbbbcccccc";
    finddups(str);
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;

    int count = 0;

    // Take sum of all characters of first String
    for (int i = 0; i < s1.length(); i++)
    {
        count += s1[i];
    }

    // Subtract the Value of all the characters of second string
    for (int i = 0; i < s2.length(); i++)
    {
        count -= s2[i];
    }

    // If Count = 0 then they are anagram
    if (count == 0)
        return true;

    return false;
}

int main()
{
    string str1 = "spar";
    string str2 = "rasp";

    if (checkAnagram(str1, str2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each other";

    return 0;
}

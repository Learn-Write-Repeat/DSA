#include <bits/stdc++.h>
using namespace std;

bool checkAnagram(string s1, string s2)
{   
    // If length of the str are not same then they are not anagrams
    if (s1.length() != s2.length())
        return false;
	
    // Map to store the count of each character
    map<char, int> m;
	
    // Insert string 1 character into map
    for (auto i : s1) {
		m[i]++;
    }
	
    // Subtract the string 2 characters from the map
    // If the count become less than 0 that means 
    // that character is occurring more number of times in string 2
    // which means they are not anagrams
    for (auto i : s2) {
        m[i]--;
		if(m[i] < 0) {
	    	return false;
		}
    }
	
    return true;
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
### Check whether two strings are anagram of each other 🙇

▶️ Lets first understand what are anagrams. An anagram is a word or phrase formed by rearranging the letters in another word or phrase, such as spar, formed from rasp.

▶️ In this problem we will check whether the strings which are given is anagram of each other or not.

```
1️⃣ Method

▶️ First sort the given strings 
▶️ Then compare the strings if they are same then return true or else fasle
▶️ Time complexity : O(nlogn)
```
```c++

bool checkAnagram(string s1, string s2)
{
    // If length of both strings is not same, then they
    // cannot be anagram
    if (s1.length() != s2.length())
        return false;
 
    // Sort both the strings
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
 
    // Compare sorted strings
    for (int i = 0; i < n1; i++)
        if (s1[i] != s2[i])
            return false;
 
    return true;
}
```



```
2️⃣ Method

▶️ Create a hashmap mapping char to int.
▶️ Store the characters count of string 1 in the hashmap.
▶️ Now subtract the character count of string 2 from hashmap, If the count of the character becomes less than 0 that means that character is occurring more number of times in string 2. 
▶️ Therefore the two strings are not anagrams of each other return false.
▶️ Time complexity : O(n) 
```
```c++

bool checkAnagram(string s1, string s2)
{
    if (s1.length() != s2.length())
        return false;

    int count = 0;
 
    // Take sum of all characters of first String
    for (int i = 0; i < s1.size(); i++) {
        count += s1[i];
    }
 
    // Subtract the Value of all the characters of second string
    for (int i = 0; i < s2.size(); i++) {
        count -= s2[i];
    }
 
    // If Count = 0 then they are anagram
    if(count == 0)
        return true;

    return false;
}


```

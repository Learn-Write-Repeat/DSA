## Pattern Searching

Pattern Searching is done when we have to find if a substring (pattern) is present in another string. Hence it is also known as String Searching. 

![ps](https://user-images.githubusercontent.com/43854410/100590030-decb5a80-3319-11eb-9d54-24efcdf36524.png)
<br>
<h6>Image Source: GeeksForGeeks</h6>

There are many algorithms for Pattern Searching such as:
- Naive Algorithm
- KMP Algorithm
- Raben Karp Algorithm

We will discuss the basic Brute Force Approach ie the Naive Algorithm in this file.

### Naive Algorithm

- In this Algorithm we slide the substring (pattern) over the string one by one and check for a match. 
- If a match is found, then return the index at which it is found and also increment the index by 1 again to check for subsequent matches.
- If not found then we simply increment the index by 1 for further searching.
- <b>Time Complexity: 
  - Best Case: O(n)
  - Worst Case: O(m*(n-m+1))</b>;
    where n: size of text string and m: size of substring (pattern)

<h4 align="center"> Contributed by <a href="https://github.com/yashtikakakkar">Yashtika Kakkar</a> With ❤️ </h3>

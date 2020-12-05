## Rabin-Karp Algorithm

Rabin-Karp Algorithm is a Pattern Searching Algorithm which is used to find if a pattern (substring) is present in a string and return the indices of its occurrences.

![Pattern-Searching-2-1](https://user-images.githubusercontent.com/43854410/100616957-d7b74300-333f-11eb-9462-6575d296f0c7.png)
<br>
<h6>Image Source: GeeksForGeeks</h6>

Like the Naive Pattern Searching Algorithm, Rabin-Karp Algorithm also slides the pattern one by one. But unlike the Naive algorithm, this algorithm matches the hash value of the pattern with the hash value of current substring of text, which it has slided onto, instead of comparing the substrings and if the hash values match then only it starts matching individual characters. 

- This Hash value can be calculated using various techniques but we need to choose the most efficient one. Hence we take the help of the ASCII code of the alphabet. 
- First we decide for which substrings we need to find the hash values. 
  - The pattern
  - The substrings present in the main string with length m
- The hash function used is: 
<pre>
hash( txt[s+1 ... s+m] ) = ( d ( hash( txt[s ... s+m-1]) – txt[s]*h ) + txt[s + m] ) mod q 
hash( txt[s .. s+m-1] ) : Hash value at shift s. 
hash( txt[s+1 .. s+m] ) : Hash value at next shift (or shift s+1) 
d: Number of characters in the alphabet 
q: A prime number 
h: d^(m-1)
</pre>
- Time Complexity: 
  - Best & Average Case: O(m+n)
  - Worst Case: O(mn) <br>
  <i>where m: length of pattern, n: length of string/text</i>
  
<h4 align="center"> Contributed by <a href="https://github.com/yashtikakakkar">Yashtika Kakkar</a> With ❤️ </h3>

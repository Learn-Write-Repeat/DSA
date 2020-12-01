<h1 align="center">lexicographic Rank</h1>
## What is lexicographic order?
<p>Lexicographic order is a generalisation of the alphabetical order. Basically Lexicographical order means ordering certain elements ( strings, numbers) in a sequential order as similar as in dictionary.</p>

For example: Consider the following values
```
1,10,2,3
``` 
The above values are in lexicographic order. Ofcourse 10 comes after 2 in numerical order but 10 comes before 2 in alphabetical order ( just like arrangement in a dictionary ).

//Image illustrating Lexicographic order.

## What is lexicographic rank?

Given a string and asked to fined it's rank among all it's permutations which are sorted in lexicographical order. For example, given a string "CBA" and find rank of the "ABC" then first we will generate all the permutations in lexicographical order then we will get below permutations..

ABC ACB BAC BCA CAB CBA
Then the rank of ABC is 1 and the rank of BCA is 4 and the ranknfo CBA is 6. 



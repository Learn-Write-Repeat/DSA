## Rabin-Karp Implementation

```c++
#include <bits/stdc++.h> 
using namespace std; 

// number of ASCII characters
#define d 256 

void search(char pat[], char txt[], int q) 
{ 
	int M = strlen(pat); 
	int N = strlen(txt); 
	int i, j; 
	int p = 0; // hash value for pattern 
	int t = 0; // hash value for txt 
	int h = 1; 

	// The value of h would be "pow(d, M-1)%q" 
	for (i = 0; i < M - 1; i++) 
		h = (h * d) % q; 

	for (i = 0; i < M; i++) 
	{ 
		p = (d * p + pat[i]) % q; 
		t = (d * t + txt[i]) % q; 
	} 

	for (i = 0; i <= N - M; i++) 
	{ 
		if ( p == t ) 
		{ 
			for (j = 0; j < M; j++) 
			{ 
				if (txt[i+j] != pat[j]) 
					break; 
			} 

			if (j == M) 
				cout<<"Pattern found at index "<< i<<endl; 
		} 

		if ( i < N-M ) 
		{ 
			t = (d*(t - txt[i]*h) + txt[i+M])%q; 
			if (t < 0) 
				t = (t + q); 
		} 
	} 
} 

int main() 
{ 
	char txt[] = "BYEBYEIWISHYOUGOODBYE"; 
	char pat[] = "BYE"; 
		
	int q = 101; 
	
	search(pat, txt, q); 
	return 0; 
} 

```
#### Output
<pre>
Pattern found at index 0
Pattern found at index 3
Pattern found at index 18
</pre>

#### Explanation

First we pass the string, pattern and a prime number through the function. We determine the hash value of the pattern, and loop through every substring of characters from 0 to (n-m) and calculate the hash value of the substring taking O(1) time. When the Hash value of the pattern and the substring matches, then we loop over the characters to see if it is an exact match, and if so, then return the index and continue to find other matches, otherwise just simply continue to find other matches without returning anything.

#### Time Complexity
- O(m+n) <br>
<i> where m: length of pattern, n: length of string </i>

<h4 align="center"> Contributed by <a href="https://github.com/yashtikakakkar">Yashtika Kakkar</a> With ❤️ </h3>

## Pattern Searching: Brute Force Implementation

```c++

#include <bits/stdc++.h> 
using namespace std; 

void search(char* pat, char* txt) 
{ 
	int M = strlen(pat); 
	int N = strlen(txt); 

	for (int i = 0; i <= N - M; i++) { 
		int j; 
		for (j = 0; j < M; j++) 
			if (txt[i + j] != pat[j]) 
				break; 
		if (j == M) 
			cout << "Pattern found at index " << i << endl; 
	} 
} 

int main() 
{ 
	char txt[] = "AABAACAADAABAAABAA"; 
	char pat[] = "AABA"; 
	search(pat, txt); 
	return 0; 
} 

```

#### Output:
<pre>
Pattern found at index 0 
Pattern found at index 9 
Pattern found at index 13 
</pre>

#### Explanation

When the string and pattern is passed through the search() function, their respective length is stored in variables N and M. Now, i is iterating over the string from index 0 to (N-M), and it has an inner loop, with j iterating from 0 to M. If there is no match, the loop breaks and j!=M, otherwise j keeps on incrementing making itself equal to M and index of the match is printed as the output.

#### Time Complexity
- O(M*(N-M+1)); where N: size of text string and M: size of substring (pattern)

<h4 align="center"> Contributed by <a href="https://github.com/yashtikakakkar">Yashtika Kakkar</a> With ❤️ </h3>

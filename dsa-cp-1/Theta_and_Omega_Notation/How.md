## Implementation

Let's take an example of a simple linear search program:

```c++

#include <iostream> 
using namespace std; 

int search(int arr[], int n, int x) 
{ 
	int i; 
	for (i = 0; i < n; i++) 
		if (arr[i] == x) 
			return i; 
	return -1; 
} 

int main(void) 
{ 
	int arr[] = { 2, 3, 4, 10, 40 }; 
	int x = 10; 
	int n = sizeof(arr) / sizeof(arr[0]); 
	
	int result = search(arr, n, x); 
	(result == -1) ? cout << "Element is not present in array" : cout << "Element is present at index " << result; 
	return 0; 
}

```

Output:
<pre>
Element is present at index 3
</pre>

Here, two cases can be possible:

### Best Case (Omega Notation)

- The target element is the first element of the array, representing the <b>Best Case</b> Scenario <i>(Omega Notation)</i>.
- If so, then the time complexity of this linear search program would be: Ω(1)
- 1 because no further searching is required.

### Average Case (Theta Notation)

- The target element is present somewhere in the middle of the array, representing the <b>Average Case</b> Scenario <i>(Theta Notation)</i>.
- If so, then the time complexity of this linear search program would be: Θ(n/2) ≈ Θ(n)
- Here n would be the index of the target element.

<h4 align="center"> Contributed by <a href="https://github.com/yashtikakakkar">Yashtika Kakkar</a> With ❤️ </h3>


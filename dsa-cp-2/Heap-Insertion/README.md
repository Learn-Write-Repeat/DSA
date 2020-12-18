# ✨Insertion in HEAP💖

 ## What is Heap ?🧐👈
 - A Heap is a special Tree-based data structure in which the tree is a complete binary tree. Generally, Heaps can be of two types:
      - Max-Heap
	  - Min-Heap
## Insertion in Heaps

```Given a Binary Heap and a new element to be added to this Heap. The task is to insert the new element to the Heap maintaining the properties of Heap.```
 
## Process of Insertion: Elements can be inserted to the heap:
    
   - First increase the heap size by 1, so that it can store the new element.
   - Insert the new element at the end of the Heap.
   - This newly inserted element may distort the properties of Heap for its parents. So, in order to keep the properties of Heap, `heapify` this newly inserted element following a bottom-up approach.

    
 
 ## Illustration❤👇(Max-Heap)
 ```
 Suppose the Heap is a `Max-Heap` as:
      10
    /    \
   5      3
  / \
 2   4

The new element to be inserted is 15.

Process:
Step 1: Insert the new element at the end.
      10
    /    \
   5      3
  / \    /
 2   4  15

Step 2: Heapify the new element following bottom-up 
        approach.
-> 15 is more than its parent 3, swap them.
       10
    /    \
   5      15
  / \    /
 2   4  3

-> 15 is again more than its parent 10, swap them.
       15
    /    \
   5      10
  / \    /
 2   4  3

Therefore, the final heap after insertion is:
       15
    /    \
   5      10
  / \    /
 2   4  3
 ```

 
  
  
  
## Implementation💻✍
```cpp
// C++ program to insert new element to Heap 

#include <iostream> 
using namespace std; 

#define MAX 1000 // Max size of Heap 

// Function to heapify ith node in a Heap 
// of size n following a Bottom-up approach 
void heapify(int arr[], int n, int i) 
{ 
	// Find parent 
	int parent = (i - 1) / 2; 

	if (arr[parent] > 0) { 
		// For Max-Heap 
		// If current node is greater than its parent 
		// Swap both of them and call heapify again 
		// for the parent 
		if (arr[i] > arr[parent]) { 
			swap(arr[i], arr[parent]); 

			// Recursively heapify the parent node 
			heapify(arr, n, parent); 
		} 
	} 
} 

// Function to insert a new node to the Heap 
void insertNode(int arr[], int& n, int Key) 
{ 
	// Increase the size of Heap by 1 
	n = n + 1; 

	// Insert the element at end of Heap 
	arr[n - 1] = Key; 

	// Heapify the new node following a 
	// Bottom-up approach 
	heapify(arr, n, n - 1); 
} 

// A utility function to print array of size n 
void printArray(int arr[], int n) 
{ 
	for (int i = 0; i < n; ++i) 
		cout << arr[i] << " "; 

	cout << "\n"; 
} 

                        
int main()                        // Driver Code
{ 
	
	int arr[MAX] = { 10, 5, 3, 2, 4 }; 

	int n = 5; 

	int key = 15; 

	insertNode(arr, n, key); 

	printArray(arr, n); 
	
	return 0; 
} 


```
## Output💻
   <img src="https://github.com/akrish4/DSA/blob/main/dsa-cp-2/Heap-Insertion/images/image1.PNG">

---


## Contributed by [Ananthakrishnan](https://github.com/akrish4) 😊✌ , If you find it helpful , don't forget to drop a like 💖
## 🧒Social Media Handles👉   [Github](https://github.com/akrish4) & [Linkedin](https://in.linkedin.com/in/Ananthakrishnan-Nair-RS")




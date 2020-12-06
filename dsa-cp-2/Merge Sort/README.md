# ✨Merge Sort 💖

 ## What is Sorting?🧐👈
 - Sorting is a process of ordering or placing a list of elements from a collection in some kind of order. ... Sorting can be done in ascending and descending order. It arranges the data in a sequence which makes searching easier.
 ## What is Merge Sort?😁
 - Merge Sort is a Divide and Conquer algorithm. It divides the input array into two halves, calls itself for the two halves, and then merges the two sorted halves.
 - The merge() function is used for merging two halves. The merge(arr, l, m, r) is a key process that assumes that arr[l..m] and arr[m+1..r] are sorted and merges the two sorted sub-arrays into one.
 
 ## How Merge Sort Works?
    
  ### 1.
  <img src="https://github.com/akrish4/DSA/blob/main/dsa-cp-2/Palindrome-Linkedllist/images/image1.PNG">
  
  ### 2.
  <img src="https://github.com/akrish4/DSA/blob/main/dsa-cp-2/Palindrome-Linkedllist/images/image2.PNG">
  
  ### 3.
  <img src="https://github.com/akrish4/DSA/blob/main/dsa-cp-2/Palindrome-Linkedllist/images/image3.PNG">
  
  ### 4.
  <img src="https://github.com/akrish4/DSA/blob/main/dsa-cp-2/Palindrome-Linkedllist/images/image4.PNG">
  
  ### 5.
  <img src="https://github.com/akrish4/DSA/blob/main/dsa-cp-2/Palindrome-Linkedllist/images/image5.PNG">
  
 ### 6.
  <img src="https://github.com/akrish4/DSA/blob/main/dsa-cp-2/Palindrome-Linkedllist/images/image6.PNG">
  
 ### 7.
  <img src="https://github.com/akrish4/DSA/blob/main/dsa-cp-2/Palindrome-Linkedllist/images/image7.PNG">
  
 ### 8.
  <img src="https://github.com/akrish4/DSA/blob/main/dsa-cp-2/Palindrome-Linkedllist/images/image8.PNG">
  
 ### 9.
  <img src="https://github.com/akrish4/DSA/blob/main/dsa-cp-2/Palindrome-Linkedllist/images/image9.PNG">
    
 
 ## Algorithm❤👇
  ```
  MergeSort(arr[], l,  r)
If r > l
     1. Find the middle point to divide the array into two halves:  
             middle m = (l+r)/2
     2. Call mergeSort for first half:   
             Call mergeSort(arr, l, m)
     3. Call mergeSort for second half:
             Call mergeSort(arr, m+1, r)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, l, m, r)
   ```

 

  
  
  
## Implementation💻✍
```cpp
// C++ program for Merge Sort
#include <iostream>
using namespace std;

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;

	// Create temp arrays
	int L[n1], R[n2];

	// Copy data to temp arrays L[] and R[]
	for (int i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (int j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	// Merge the temp arrays back into arr[l..r]

	// Initial index of first subarray
	int i = 0;

	// Initial index of second subarray
	int j = 0;

	// Initial index of merged subarray
	int k = l;

	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	// Copy the remaining elements of
	// L[], if there are any
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	// Copy the remaining elements of
	// R[], if there are any
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

// l is for left index and r is
// right index of the sub-array
// of arr to be sorted */
void mergeSort(int arr[],int l,int r){
	if(l>=r){
		return;//returns recursively
	}
	int m = (l+r-1)/2;
	mergeSort(arr,l,m);
	mergeSort(arr,m+1,r);
	merge(arr,l,m,r);
}

// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
{
	for (int i = 0; i < size; i++)
		cout << A[i] << " ";
}

// Driver code
int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	cout << "Given array is \n";
	printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	cout << "\nSorted array is \n";
	printArray(arr, arr_size);
	return 0;
}

// This code is contributed by Mayank Tyagi

```
## Output💻
   <img src="https://github.com/akrish4/DSA/blob/main/dsa-cp-2/Merge Sort/images/image10.PNG">
 
#### The time complexity is O(n)👍

---


## Contributed by [Ananthakrishnan](https://github.com/akrish4) 😊✌ , If you find it helpful , don't forget to drop a like 💖
## 🧒Social Media Handles👉   [Github](https://github.com/akrish4) & [Linkedin](https://in.linkedin.com/in/Ananthakrishnan-Nair-RS")




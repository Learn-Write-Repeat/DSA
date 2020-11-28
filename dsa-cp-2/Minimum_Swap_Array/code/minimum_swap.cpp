// C++ program to find minimum swaps required 
// to club all elements less than or equals 
// to k together 
#include <iostream> 
using namespace std; 

// Utility function to find minimum swaps 
// required to club all elements less than 
// or equals to k together 
int minSwap(int *arr, int n, int k) { 
	
	// Find count of elements which are 
	// less than equals to k 
	int count = 0; 
	for (int i = 0; i < n; ++i) 
		if (arr[i] <= k) 
			++count; 
	
	// Find unwanted elements in current 
	// window of size 'count' 
	int bad = 0; 
	for (int i = 0; i < count; ++i) 
		if (arr[i] > k) 
			++bad; 
	
	// Initialize answer with 'bad' value of 
	// current window 
	int ans = bad; 
	for (int i = 0, j = count; j < n; ++i, ++j) { 
		
		// Decrement count of previous window 
		if (arr[i] > k) 
			--bad; 
		
		// Increment count of current window 
		if (arr[j] > k) 
			++bad; 
		
		// Update ans if count of 'bad' 
		// is less in current window 
		ans = min(ans, bad); 
	} 
	return ans; 
} 

// Driver code 
int main() { 
	
	 int arr[100];
   int n;
   cout<< "\n\nEnter Size of array = " ;
   cin>> n;
   cout<<"\n\nEnter Element :";
   for(int i=0;i<n;i++){
       cout<<"\n";
	   cin>>arr[i];
   }
   int k;
   cout<< "\n\nEnter K = ";
   cin >> k;
	cout <<"\n\n Swap Required : " << minSwap(arr1, n, k); 
	return 0; 
} 
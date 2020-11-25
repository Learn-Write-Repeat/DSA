# Maximum and minimum of an array using minimum number of comparisons✨

- Here I have created a structure named **Pair** (which contains min and max) and  ***arr*** is the array elements  and ***n*** is the size of array.I have used a method called **Comparison in Pairs**  ie,
- If n is odd then initialize min and max as first element. 
- If n is even then initialize min and max as minimum and maximum of the first two elements respectively. 
- For rest of the elements, pick them in pairs and compare their maximum and minimum with max and min respectively. 
# Code ✍
```cpp
// C++ program of above implementation
#include<iostream>
using namespace std;

// Structure is used to return
// two values from minMax()
struct Pair
{
	int min;
	int max;
};

struct Pair getMinMax(int arr[], int n)
{
	struct Pair minmax;
	int i;

	// If array has even number of elements
	// then initialize the first two elements
	// as minimum and maximum
	if (n % 2 == 0)
	{
		if (arr[0] > arr[1])
		{
			minmax.max = arr[0];
			minmax.min = arr[1];
		}
		else
		{
			minmax.min = arr[0];
			minmax.max = arr[1];
		}

		// Set the starting index for loop
		i = 2;
	}

	// If array has odd number of elements
	// then initialize the first element as
	// minimum and maximum
	else
	{
		minmax.min = arr[0];
		minmax.max = arr[0];

		// Set the starting index for loop
		i = 1;
	}

	// In the while loop, pick elements in
	// pair and compare the pair with max
	// and min so far
	while (i < n - 1)
	{
		if (arr[i] > arr[i + 1])
		{
			if(arr[i] > minmax.max)
				minmax.max = arr[i];

			if(arr[i + 1] < minmax.min)
				minmax.min = arr[i + 1];
		}
		else
		{
			if (arr[i + 1] > minmax.max)
				minmax.max = arr[i + 1];

			if (arr[i] < minmax.min)
				minmax.min = arr[i];
		}

		// Increment the index by 2 as
		// two elements are processed in loop
		i += 2;
	}
	return minmax;
}

// Driver code
int main()
{
	// int arr[] = { 1000, 11, 445,
	//			1, 330, 3000 };
	// int arr_size = 6;
	int arr_size;
	cout<< "Enter the size";
	cin>>arr_size;
	int arr[arr_size];
	cout<< "Enter the array";
	for(int a =0;a<arr[arr_size-1];a++)
    {
        cin>>arr[a];

    }


	Pair minmax = getMinMax(arr, arr_size);

	cout << "Minimum element is "
		<< minmax.min << endl;
	cout << "Maximum element is "
		<< minmax.max;

	return 0;
}
```






# Analysis 👍
<img src="https://github.com/akrish4/DSA/blob/main/dsa-cp-2/ARRAYS-Min_%26_Max/image1.PNG" alternate="input">

# Aproach & Example  
## If the size of the array is even (n=even)👇
<img src="https://github.com/akrish4/DSA/blob/main/dsa-cp-2/ARRAYS-Min_%26_Max/image2.PNG" alternate="input">

## If the size of the array is odd (n=odd)👇
<img src="https://github.com/akrish4/DSA/blob/main/dsa-cp-2/ARRAYS-Min_%26_Max/image3.PNG" alternate="input">

# Output Images 💻 
## Input :
<img src="https://github.com/akrish4/DSA/blob/main/dsa-cp-2/ARRAYS-Min_%26_Max/input.PNG" alternate="input">

## Output :
<img src="https://github.com/akrish4/DSA/blob/main/dsa-cp-2/ARRAYS-Min_%26_Max/output.PNG" alternate="input">

# Time Complexity: O(n)

```
 If n is odd:    3*(n-1)/2  
 If n is even:   1 Initial comparison for initializing min and max, 
                 and 3(n-2)/2 comparisons for rest of the elements  
                  =  1 + 3*(n-2)/2 = 3n/2 -2
 ```
 
 
Contributed by [Ananthakrishnan](https://github.com/akrish4) 😊 , If you find it helpful , don't forget to drop a like 💖
##### connect with Ananthakrishnan  🧑✌
[Github](https://github.com/akrish4) 
[Linkedin](https://in.linkedin.com/in/Ananthakrishnan-Nair-RS")


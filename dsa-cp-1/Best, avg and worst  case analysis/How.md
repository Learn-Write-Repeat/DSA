# How to do algorithm analysis?
>Before going to case analysis let's revise linear search, As I am going to explain Case analysis using linear search algorithm.
## What is linear search?
Linear search is a simple searchning algorithm that seaches for an element of a list in sequential order. We start at one end and check each and every elements until te desired elements in found.

<a target="_blank" rel="noopener noreferrer" href="#"><img src="https://www.tutorialspoint.com/data_structures_algorithms/images/linear_search.gif" alt="Linear Search Gif" style="max-width:100%;"></a>

## Example:
```python
# Python 3 implementation of the approach 
# Linearly search x in arr[]
def search(arr, x): 
    for index, value in enumerate(arr): 
        if value == x: 
            return index 
    return -1
 
# Driver Code 
arr = [1, 10, 30, 15] 
x = 30
print(x, "is present at index", 
      search(arr, x)) 
```
><b>Output : 30 is present at index 2</b>
 <hr><br>
 There are three cases to analyze an algorithm
 
 1. The worst case
 2. Average case
 3. Best case
 

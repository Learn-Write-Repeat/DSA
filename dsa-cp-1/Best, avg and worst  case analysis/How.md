# How to do algorithm analysis?
>Before going to case analysis let's revise linear search, As I am going to explain Case analysis using a linear search algorithm.
## What is a linear search?
Linear search is a simple searching algorithm that searches for an element of a list in sequential order. We start at one end and check every element until the desired elements is found.

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
 
 ## Worst Case Analysis:
 
For linear search, the worst case happens when we search for an element which is not present in the array. From the above example if the 'X' is not present in the array then search() function will compare it with every element in the array one by one. Therefore the worst case time complexity of linear search would be O(n). 
 
 ## Average Case Analysis:
 
 The average case analysis we take the average over all inputs(of the given size). For linear search, we will assume that all cases are uniformly distributed (includes the key(x) not present in the array). We add all the cases and divide the sum by (n+1).


Average Case Time =  
<a target="_blank" rel="noopener noreferrer" href="#"><img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/analysis1.png" alt="Linear Search Gif" style="max-width:100%;"></a>
= <a target="_blank" rel="noopener noreferrer" href="#"><img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/analysis2.png" alt="Linear Search Gif" style="max-width:100%;"></a> 
= Θ(n) 

This analysis may not be possible for every algorithm. So, rarely we do it. Mostly for the average case, the time complexity we get is similar to the worst case.

## Best Case Analysis:
In a linear search, the best case occurs when the key(x) is present at the first index. The no of operations in the best case is constant(1) it doesn't depend on the size of the array. So the time complexity in the best case would be Θ(1)

> ## Bonus
### Here's the list of other algorithms
<a target="_blank" rel="noopener noreferrer" href="#"><img src="https://www.researchgate.net/profile/Jehad_Hammad3/publication/274640372/figure/tbl1/AS:391828730859523@1470430657128/Summary-of-the-best-case-average-case-and-worst-case2.png" alt="Linear Search Gif" style="max-width:100%;"></a>

## Contributed by <a href="https://github.com/ShyamKumar1">Shyam Kumar</a> With 💜. 

## Reach me on
<p align='center'>
  <a href="https://www.linkedin.com/in/shyam-kumar-9b9841157/"><img src="https://img.shields.io/badge/linkedin-%230077B5.svg?&style=for-the-badge&logo=linkedin&logoColor=white" /></a>&nbsp;&nbsp;&nbsp;&nbsp;
  <a href="https://www.instagram.com/_smiling_storm_/" target="_blank"><img src="https://img.shields.io/badge/Instagram-%23E4405F.svg?&style=for-the-badge&logo=instagram&logoColor=white" alt="Instagram"></a>&nbsp;&nbsp;&nbsp;&nbsp;
  <a href="mailto:shyam.ceolife@gmail.com?subject=Olá%20Punit"><img src="https://img.shields.io/badge/gmail-%23D14836.svg?&style=for-the-badge&logo=gmail&logoColor=white" /></a>&nbsp;&nbsp;&nbsp;&nbsp;
  <a href="https://www.facebook.com/shyam.george15/" target="_blank"><img src="https://img.shields.io/badge/Facebook-%231877F2.svg?&style=for-the-badge&logo=facebook&logoColor=white" alt="Facebook"></a>&nbsp;&nbsp;&nbsp;&nbsp;
</p>


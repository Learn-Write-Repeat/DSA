# ✨Merge Sort 💖

 ## What is Sorting?🧐👈
 - Sorting is a process of ordering or placing a list of elements from a collection in some kind of order. ... Sorting can be done in ascending and descending order. It arranges the data in a sequence which makes searching easier.
 ## What is Merge Sort?😁
  -  merge sort is an efficient, general-purpose, comparison-based sorting algorithm. Most implementations produce a stable sort, which means that the order of equal elements is the same in the input and output. Merge sort is a divide and conquer algorithm that was invented by John von Neumann in 1945.

 ## Algorithm❤👇
   - First, traverse the whole linked list, storing the value of each element in a stack at each step.
   - Traverse the whole linked list again, this time popping out elements from the stack and comparing them with the elements in the linked list. If all the elements are the same, then the linked list is a palindrome.
    
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
    
 

  
  
  
## Implementation💻✍
```cpp
#include<bits/stdc++.h> 
using namespace std;  
  
class Node { 
public: 
  int data;

  Node(int d){ 
    data = d; 
  } 
  Node *ptr; 
}; 
  
bool isPalindrome(Node* head){ 
  // This pointer will allow the first traversal
  // of the linked list
  Node* next= head;   
  // Declare a stack  
  stack <int> s; 

  // Traverse the linked list and add its elements
  // to the stack
  while(next != NULL){ 
    s.push(next->data); 
    next = next->ptr; 
  } 

  // Iterate the linked list again and  
  // check by each element with the stack 
  while(head != NULL ){      
    int i=s.top(); 

    if(head -> data != i){ 
      return false; 
    }
    // Move to the next element in stack and the list 
    s.pop(); 
    head=head->ptr; 
  } 

return true; 
} 
  
// Driver Code  
int main(){ 

  Node one =  Node(1); 
  Node two = Node(3); 
  Node three = Node(5); 
  Node four = Node(3); 
  Node five = Node(1); 

  // Initialize the pointers of the Linked List
  five.ptr = NULL; 
  one.ptr = &two; 
  two.ptr = &three; 
  three.ptr = &four; 
  four.ptr = &five; 
  Node* temp = &one; 

    
  // Call function with head of the linked list
  int result = isPalindrome(&one); 
  if(result == 1) 
    cout<<"Linked list is a palindrome\n"; 
  else
    cout<<"Linked list is NOT a palindrome\n"; 
    
} 
```
## Output💻
   <img src="https://github.com/akrish4/DSA/blob/main/dsa-cp-2/Merge Sort/images/image10.PNG">
 
#### The time complexity is O(n)👍

---


## Contributed by [Ananthakrishnan](https://github.com/akrish4) 😊✌ , If you find it helpful , don't forget to drop a like 💖
## 🧒Social Media Handles👉   [Github](https://github.com/akrish4) & [Linkedin](https://in.linkedin.com/in/Ananthakrishnan-Nair-RS")




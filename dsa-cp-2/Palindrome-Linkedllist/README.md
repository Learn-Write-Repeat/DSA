# CHECKING IF A LINKED LIST IS A PALINDROME
 - A number is a **palindrome** if it reads the same forwards as it does backward. For example, the number **12333211233321** is a palindrome.
 - Linked lists can also be palindromes if they have the same order of elements when traversed forwards and backward.
 ## What is a Linked List?
 - A linked list is a data structure made up of a chain of nodes connected by links. Each node contains a value and has a next pointer to the next node in the chain. The head pointer points to the first node and the last element points to null.
 ## What is a palindrome?
 - A palindrome is a word, phrase, or sequence that reads the same backward as forward.
 ## Is a Linked List a palindrome?
 ## Algorithm
   - First, traverse the whole linked list, storing the value of each element in a stack at each step.
   - Traverse the whole linked list again, this time popping out elements from the stack and comparing them with the elements in the linked list. If all the elements are the same, then the linked list is a palindrome.

## Implementation
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

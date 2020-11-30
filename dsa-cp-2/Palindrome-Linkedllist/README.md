# CHECKING IF A LINKED LIST IS A PALINDROME
 - A number is a **palindrome** if it reads the same forwards as it does backward. For example, the number **12333211233321** is a palindrome.
 - Linked lists can also be palindromes if they have the same order of elements when traversed forwards and backward.
 
 ## Algorithm
   - First, traverse the whole linked list, storing the value of each element in a stack at each step.
   - Traverse the whole linked list again, this time popping out elements from the stack and comparing them with the elements in the linked list. If all the elements are the same, then the linked list is a palindrome.


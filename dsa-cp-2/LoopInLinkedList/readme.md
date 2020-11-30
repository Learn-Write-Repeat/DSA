# What is the problem?
### The problem here is to find if there exists a loop in the linked list or not.
# How to do it?
### There are a lot of ways to solve this problem. Let's first see the possible ways.
* Using Set: Time Complexity O(n), Space Complexity O(n)
* Using Hashmap: Time Complexity O(n), Space Complexity O(n)
* Using Floyd's slow and fast pointers: Time Complexity O(n), Space Complexity O(1)
#### These are the three main ways to solve this question. 
#### The first two methods use extra space in form of set and hashmap to keep track of all the nodes we have traversed in the linked list till now.
#### The last way is a bit special. It doesn't use any extra space and hence it is the most efficient.
# How will we do it?
### We will solve it with the most efficient technique here. Which is the Floyd's slow and fast pointers technique.
#### In this algorithm we will use two pointers namely slow and fast. Their function is as same as their name. The slow pointer and fast pointer initally points at the head node. Then we will move slow pointer to the next node and the fast pointer by two nodes. If the slow and fast pointer point at the same node again then there is a loop. If they don't then there isn't a loop. This moving of pointers will go on till the fast pointer encounters a null.So the condition will look something like this
##### while(fast!=NULL && fast->next!=NULL){our algorithm}
#### If the reading has got you confused don't worry there is a pictorial representation of the algorithm below. See it and understand. Then you can jump on to the code and read it and try to execute it by yourself. It is well commented too.
![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20190621160855/Detect-loop-in-a-linked-list.png)

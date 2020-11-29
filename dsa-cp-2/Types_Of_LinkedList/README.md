<h1 style="text-align:center;color:#DBD06F">Linked List</h1>
<br/>

# What is LinkedList ??
A linked list is a sequence of data structures, which are connected together via links. Linked List is a sequence of links which contains items. Each link contains a connection to another link
<br/><br/>

# Linked List Representation

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/linked_list.jpg" alt="LinkedList representation">

<br/><br/>

# Types of Linked List

1- **Singly Linked List**

2- **Doubly Linked List**

1- **Circular Linked List**

***
</br>

# Singly Linked List
Linear Linkedlist is just a simple linkedList that we have discussed above.

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/linked_list.jpg" alt="LinkedList representation">
<br/><br/>

## Basic Operations :

**1 - Insertion Operation**

Adding a new node in linked list is a more than one step activity. We shall learn this with diagrams here. First, create a node using the same structure and find the location where it has to be inserted.

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/linked_list_insertion_0.jpg">

Imagine that we are inserting a node B (NewNode), between A (LeftNode) and C (RightNode). Then point B.next to C −

```
NewNode.next −> RightNode;
```
It should look like this −

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/linked_list_insertion_1.jpg">

Now, the next node at the left should point to the new node.

```
LeftNode.next −> NewNode;
```

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/linked_list_insertion_2.jpg">

Similar steps should be taken if the node is being inserted at the beginning of the list. While inserting it at the end, the second last node of the list should point to the new node and the new node will point to NULL.

```Java
// A complete working Java program to demonstrate all insertion methods 
// on linked list 
class LinkedList 
{ 
	Node head; // head of list 

	/* Linked list Node*/
	class Node 
	{ 
		int data; 
		Node next; 
		Node(int d) {data = d; next = null; } 
	} 

	/* Inserts a new Node at front of the list. */
	public void push(int new_data) 
	{ 
		/* 1 & 2: Allocate the Node & 
				Put in the data*/
		Node new_node = new Node(new_data); 

		/* 3. Make next of new Node as head */
		new_node.next = head; 

		/* 4. Move the head to point to new Node */
		head = new_node; 
	} 

	/* Inserts a new node after the given prev_node. */
	public void insertAfter(Node prev_node, int new_data) 
	{ 
		/* 1. Check if the given Node is null */
		if (prev_node == null) 
		{ 
			System.out.println("The given previous node cannot be null"); 
			return; 
		} 

		/* 2 & 3: Allocate the Node & 
				Put in the data*/
		Node new_node = new Node(new_data); 

		/* 4. Make next of new Node as next of prev_node */
		new_node.next = prev_node.next; 

		/* 5. make next of prev_node as new_node */
		prev_node.next = new_node; 
	} 
	
	/* Appends a new node at the end. This method is 
	defined inside LinkedList class shown above */
	public void append(int new_data) 
	{ 
		/* 1. Allocate the Node & 
		2. Put in the data 
		3. Set next as null */
		Node new_node = new Node(new_data); 

		/* 4. If the Linked List is empty, then make the 
			new node as head */
		if (head == null) 
		{ 
			head = new Node(new_data); 
			return; 
		} 

		/* 4. This new node is going to be the last node, so 
			make next of it as null */
		new_node.next = null; 

		/* 5. Else traverse till the last node */
		Node last = head; 
		while (last.next != null) 
			last = last.next; 

		/* 6. Change the next of last node */
		last.next = new_node; 
		return; 
	} 

	/* This function prints contents of linked list starting from 
		the given node */
	public void printList() 
	{ 
		Node tnode = head; 
		while (tnode != null) 
		{ 
			System.out.print(tnode.data+" "); 
			tnode = tnode.next; 
		} 
	} 

	/* Driver program to test above functions. Ideally this function 
	should be in a separate user class. It is kept here to keep 
	code compact */
	public static void main(String[] args) 
	{ 
		/* Start with the empty list */
		LinkedList llist = new LinkedList(); 

		// Insert 6. So linked list becomes 6->NUllist 
		llist.append(6); 

		// Insert 7 at the beginning. So linked list becomes 
		// 7->6->NUllist 
		llist.push(7); 

		// Insert 1 at the beginning. So linked list becomes 
		// 1->7->6->NUllist 
		llist.push(1); 

		// Insert 4 at the end. So linked list becomes 
		// 1->7->6->4->NUllist 
		llist.append(4); 

		// Insert 8, after 7. So linked list becomes 
		// 1->7->8->6->4->NUllist 
		llist.insertAfter(llist.head.next, 8); 

		System.out.println("\nCreated Linked list is: "); 
		llist.printList(); 
	} 
} 
// This code is contributed by Rajat Mishra 

```

**2- Deletion Operation**

Deletion is also a more than one step process. We shall learn with pictorial representation. First, locate the target node to be removed, by using searching algorithms.

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/linked_list_deletion_0.jpg">

The left (previous) node of the target node now should point to the next node of the target node −

```
LeftNode.next −> TargetNode.next;
```
<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/linked_list_deletion_1.jpg">

This will remove the link that was pointing to the target node. Now, using the following code, we will remove what the target node is pointing at.

```
TargetNode.next −> NULL;
```

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/linked_list_deletion_2.jpg">

We need to use the deleted node. We can keep that in memory otherwise we can simply deallocate memory and wipe off the target node completely.

<img src="https://www.tutorialspoint.com/data_structures_algorithms/images/linked_list_deletion_3.jpg">
<br>

**3- Searching Operation**

 searches a given key ‘x’ in a given singly linked list. it should return true if x is present in linked list and false otherwise.

 ### Iterative Method :
```
1) Initialize a node pointer, current = head.
2) Do following while current is not NULL
    a) current->key is equal to the key being searched return true.
    b) current = current->next
3) Return false 
```

### Recursive Method :
```
bool search(head, x)
1) If head is NULL, return false.
2) If head's key is same as x, return true;
2) Else return search(head->next, x) 
```
***

# Doubly Linked List

A Doubly Linked List (DLL) contains an extra pointer, typically called previous pointer, together with next pointer and data which are there in singly linked list.

<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/03/DLL1.png">

## Basic Operation :

* ## Insertion Operation :

**(a) Add a node at the front:**

<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/03/DLL_add_front1.png">

```Java


// Adding a node at the front of the list 
public void push(int new_data) 
{ 
    /* 1. allocate node  
    * 2. put in the data */
    Node new_Node = new Node(new_data); 
  
    /* 3. Make next of new node as head and previous as NULL */
    new_Node.next = head; 
    new_Node.prev = null; 
  
    /* 4. change prev of head node to new node */
    if (head != null) 
        head.prev = new_Node; 
  
    /* 5. move the head to point to the new node */
    head = new_Node; 
} 
```

**(b)  Add a node after a given node.:**

<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/03/DLL_add_middle1.png">

```Java

/* Given a node as prev_node, insert a new node after the given node */
public void InsertAfter(Node prev_Node, int new_data) 
{ 
  
    /*1. check if the given prev_node is NULL */
    if (prev_Node == null) { 
        System.out.println("The given previous node cannot be NULL "); 
        return; 
    } 
  
    /* 2. allocate node  
    * 3. put in the data */
    Node new_node = new Node(new_data); 
  
    /* 4. Make next of new node as next of prev_node */
    new_node.next = prev_Node.next; 
  
    /* 5. Make the next of prev_node as new_node */
    prev_Node.next = new_node; 
  
    /* 6. Make prev_node as previous of new_node */
    new_node.prev = prev_Node; 
  
    /* 7. Change previous of new_node's next node */
    if (new_node.next != null) 
        new_node.next.prev = new_node; 
} 
```

**(c)  Add a node at the end:**

<img src="https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2014/03/DLL_add_end1.png">

```Java
/* Given a reference (pointer to pointer) to the head 
   of a DLL and an int, appends a new node at the end  */
void append(struct Node** head_ref, int new_data) 
{ 
    /* 1. allocate node */
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 
  
    struct Node* last = *head_ref; /* used in step 5*/
  
    /* 2. put in the data  */
    new_node->data = new_data; 
  
    /* 3. This new node is going to be the last node, so 
          make next of it as NULL*/
    new_node->next = NULL; 
  
    /* 4. If the Linked List is empty, then make the new 
          node as head */
    if (*head_ref == NULL) { 
        new_node->prev = NULL; 
        *head_ref = new_node; 
        return; 
    } 
  
    /* 5. Else traverse till the last node */
    while (last->next != NULL) 
        last = last->next; 
  
    /* 6. Change the next of last node */
    last->next = new_node; 
  
    /* 7. Make last node as previous of new node */
    new_node->prev = last; 
  
    return; 
} 
```


* ## Deletion Operation :

The deletion of a node in a doubly linked list can be divided into three main categories: 

**(a) After the deletion of the head node:**

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20200318143640/linked11.png">


**(b) After the deletion of the middle node:**

<img src="https://media.geeksforgeeks.org/wp-content/uploads/Delete_lincked_list3.jpg">


**(c) After the deletion of the last node:**

<img src="https://media.geeksforgeeks.org/wp-content/uploads/Delete_lincked_list4.jpg">


**All three mentioned cases can be handled in two steps if the pointer of the node to be deleted and the head pointer is known.**

1- If the node to be deleted is the head node then make the next node as head.

2-If a node is deleted, connect the next and previous node of the deleted node. 

<img src="https://media.geeksforgeeks.org/wp-content/uploads/20200318150826/ezgif.com-gif-maker1.gif">

### Algorithm:

* Let the node to be deleted be del.
* If node to be deleted is head node, then change the head pointer to next current head. 

```
if headnode == del then
      headnode =  del.nextNode
```

* Set next of previous to del, if previous to del exists. 
```
if del.nextNode != none 
      del.nextNode.previousNode = del.previousNode 
```
* Set prev of next to del, if next to del exists.
```
if del.previousNode != none 
      del.previousNode.nextNode = del.next
```
***

# Circular Linked List :

Circular linked list is a linked list where all nodes are connected to form a circle. There is no NULL at the end. A circular linked list can be a singly circular linked list or doubly circular linked list.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/CircularLinkeList.png">

<br/>

## Singly Linked List as Circular:

 * ## Representation:

 <img src="https://www.tutorialspoint.com/data_structures_algorithms/images/singly_circular_linked_list.jpg">

## Basic Operations:

* ## Insertion:

**(a) Insertion at the beginning of the list :**

<img src="https://media.geeksforgeeks.org/wp-content/uploads/CircularSinglyLinkedlist-4.png">

after insertion:

<img src="https://media.geeksforgeeks.org/wp-content/uploads/CircularSinglLinkedList5.png">


```java
static Node addBegin(Node last, int data)
{
    if (last == null)
        return addToEmpty(last, data);
 
    Node temp = new Node();
 
    temp.data = data;
    temp.next = last.next;
    last.next = temp;
 
    return last;
}
```
**(b) Insertion at the end of the list:**

<img src="https://media.geeksforgeeks.org/wp-content/uploads/CircularSinglyLinkedlist-6.png">

After insertion

<img src="https://media.geeksforgeeks.org/wp-content/uploads/CircularSinglyLinkedlist-7.png">

```Java
static Node addEnd(Node last, int data)
{
    if (last == null)
        return addToEmpty(last, data);
     
    Node temp = new Node();
 
    temp.data = data;
    temp.next = last.next;
    last.next = temp;
    last = temp;
 
    return last;
}
```
**(c) Insertion in between the nodes:**

<img src="https://media.geeksforgeeks.org/wp-content/uploads/circularll-1.png">

After searching and insertion

<img src="https://media.geeksforgeeks.org/wp-content/uploads/CircularSinglyLinkedList9.png">

```Java
static Node addAfter(Node last, int data, int item)
{
    if (last == null)
        return null;
 
    Node temp, p;
    p = last.next;
    do
    {
        if (p.data == item)
        {
            temp = new Node();
            temp.data = data;
            temp.next = p.next;
            p.next = temp;
 
            if (p == last)
                last = temp;
            return last;
        }
        p = p.next;
    } while(p != last.next);
 
    System.out.println(item + " not present in the list.");
    return last;
 
}
```

* ## Deletion:

###  Algorithm :



**Case-1 : List is empty**:

* If the list is empty we will simply return.


**Case-2 : List is not empty**:

* If the list is not empty then we define two pointers curr and prev and initialize the pointer curr with the head node.

* Traverse the list using curr to find the node to be deleted and before moving curr to next node, everytime set prev = curr.

* If the node is found, check if it is the only node in the list. If yes, set head = NULL and free(curr).

* If the list has more than one node, check if it is the first node of the list. Condition to check this( curr == head). If yes, then move prev until it reaches the last node. After prev reaches the last node, set head = head -> next and prev -> next = head. Delete curr.

* If curr is not first node, we check if it is the last node in the list. Condition to check this is (curr -> next == head).

* If curr is the last node. Set prev -> next = head and delete the node curr by free(curr).

* If the node to be deleted is neither the first node nor the last node, then set prev -> next = temp -> next and delete curr.

***

## Doubly Linked List  as Circular:

Circular Doubly Linked List has properties of both doubly linked list and circular linked list in which two consecutive elements are linked or connected by previous and next pointer and the last node points to first node by next pointer and also the first node points to last node by previous pointer.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/Circular-doubly-linked-list.png">


## Basic Operation

* ## Insertion:

**(a) Insertion at the end of list or in an empty list**

* **Empty List (start = NULL):**
A node(Say N) is inserted with data = 5, so previous pointer of N points to N and next pointer of N also points to N. But now start pointer points to the first node the list.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/Insertion-in-empty-list1-300x178.png">

* **List initially contain some nodes, start points to first node of the List:**
A node(Say M) is inserted with data = 7, so previous pointer of M points to last node, next pointer of M points to first node and last node’s next pointer points to this M node and first node’s previous pointer points to this M node.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/Insertion-in-a-list.png">

```Java
static void insertEnd(int value)  
{  
    // If the list is empty, create a single node  
    // circular and doubly list  
    if (start == null)  
    {  
        Node new_node = new Node();  
        new_node.data = value;  
        new_node.next = new_node.prev = new_node;  
        start = new_node;  
        return;  
    }  
  
    // If list is not empty  
  
    /* Find last node */
    Node last = (start).prev;  
  
    // Create Node dynamically  
    Node new_node = new Node();  
    new_node.data = value;  
  
    // Start is going to be next of new_node  
    new_node.next = start;  
  
    // Make new node previous of start  
    (start).prev = new_node;  
  
    // Make last preivous of new node  
    new_node.prev = last;  
  
    // Make new node next of old last  
    last.next = new_node;  
}  
```

**(b) Insertion at the beginning of the list:**
To insert a node at the beginning of the list, create a node(Say T) with data = 5, T next pointer points to first node of the list, T previous pointer points to last node the list, last node’s next pointer points to this T node, first node’s previous pointer also points this T node and at last don’t forget to shift ‘Start’ pointer to this T node.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/Insertion-at-beginning-of-list.png">

```Java
static void insertBegin(int value)  
{  
    // Pointer points to last Node  
    Node last = (start).prev;  
  
    Node new_node = new Node();  
    new_node.data = value; // Inserting the data  
  
    // setting up previous and next of new node  
    new_node.next = start;  
    new_node.prev = last;  
  
    // Update next and previous pointers of start  
    // and last.  
    last.next = (start).prev = new_node;  
  
    // Update start pointer  
    start = new_node;  
}  
```

**(c) Insertion in between the nodes of the list:**

To insert a node in between the list, two data values are required one after which new node will be inserted and another is the data of the new node.

<img src="https://media.geeksforgeeks.org/wp-content/uploads/Insertion-in-between-the-list.png">

```Java
static void insertAfter(int value1, int value2)  
{  
    Node new_node = new Node();  
    new_node.data = value1; // Inserting the data  
  
    // Find node having value2 and next node of it  
    Node temp = start;  
    while (temp.data != value2)  
        temp = temp.next;  
    Node next = temp.next;  
  
    // insert new_node between temp and next.  
    temp.next = new_node;  
    new_node.prev = temp;  
    new_node.next = next;  
    next.prev = new_node;  
}  
```

* ## Deletion:

### Algorithm:

 **Case-1 : Empty List(start = NULL)**:
   
   * If the list is empty, simply return.

**Case-2: List initially contain some nodes, start points to first node of the List:**

**STEP 1-** If the list is not empty then we define two pointers curr and prev_1 and initialize the pointer curr points to first node of the list and prev_1 = NULL.

**STEP 2-** Traverse the list using curr pointer to find the node to be deleted and before moving curr to next node, every time set prev_1 = curr.

**STEP 3-** If the node is found, check if it is the only node in the list. If yes, set start = NULL and free the node pointing by curr.

**STEP 4-** If the list has more than one node, check if it is the first node of the list. Condition to check this is (curr == start). If yes, then move prev_1 to the last node(prev_1 = start -> prev). After prev_1 reaches the last node, set start = start -> next and prev_1 -> next = start and start -> prev = prev_1. Free the node pointing by curr.

**STEP 5-** If curr is not first node, we check if it is the last node in the list. Condition to check this is (curr -> next == start). If yes, set prev_1 -> next = start and start -> prev = prev_1. Free the node pointing by curr.

**STEP 6-** If the node to be deleted is neither the first node nor the last node, declare one more pointer temp and initialize the pointer temp points to next of curr pointer (temp = curr->next). Now set, prev_1 -> next = temp and temp ->prev = prev_1. Free the node pointing by curr.

   * If the given key(Say 4) matches with first node of the list(Step 4):

   <img src="https://media.geeksforgeeks.org/wp-content/uploads/Delete_first_node.png">

   * If the given key(Say 8) matches with last node of the list(Step 5):

   <img src="https://media.geeksforgeeks.org/wp-content/uploads/Delete_last_node.png">

   * If the given key(Say 6) matches with middle node of the list(Step 6):

   <img src="https://media.geeksforgeeks.org/wp-content/uploads/Delete_middle_node.png">

   ```Java
   static Node deleteNode(Node start, int key) 
    { 
        // If list is empty 
        if (start == null) 
            return null; 
  
        // Find the required node 
        // Declare two pointers and initialize them 
        Node curr = start, prev_1 = null; 
        while (curr.data != key) { 
            // If node is not present in the list 
            if (curr.next == start) { 
                System.out.printf("\nList doesn't have node with value = %d", key); 
                return start; 
            } 
  
            prev_1 = curr; 
            curr = curr.next; 
        } 
  
        // Check if node is the only node in list 
        if (curr.next == start && prev_1 == null) { 
            (start) = null; 
            return start; 
        } 
  
        // If list has more than one node, 
        // check if it is the first node 
        if (curr == start) { 
            // Move prev_1 to last node 
            prev_1 = (start).prev; 
  
            // Move start ahead 
            start = (start).next; 
  
            // Adjust the pointers of prev_1 and start node 
            prev_1.next = start; 
            (start).prev = prev_1; 
        } 
  
        // check if it is the last node 
        else if (curr.next == start) { 
            // Adjust the pointers of prev_1 and start node 
            prev_1.next = start; 
            (start).prev = prev_1; 
        } 
        else { 
            // create new pointer, points to next of curr node 
            Node temp = curr.next; 
  
            // Adjust the pointers of prev_1 and temp node 
            prev_1.next = temp; 
            temp.prev = prev_1; 
        } 
        return start; 
    } 
  
   ```

   ***
   ***
   ***

   **<h2 align="center"> Contributed by <a href="https://github.com/sudeepshukla930">Sudeep Shukla</a> With 💜. </h2>**

<br/>

  # Reach me on
<p align='center'>
  <a href="https://www.linkedin.com/in/sudeep-shukla-657384193/"><img src="https://img.shields.io/badge/linkedin-%230077B5.svg?&style=for-the-badge&logo=linkedin&logoColor=white" /></a>&nbsp;&nbsp;&nbsp;&nbsp;
  <a href="mailto:sudeepshukla930@gmail.com" target="_blank"><img src="https://img.shields.io/badge/gmail-%23D14836.svg?&style=for-the-badge&logo=gmail&logoColor=white" alt="gmail"></a>&nbsp;&nbsp;&nbsp;&nbsp;
  
  
</p>

****
****
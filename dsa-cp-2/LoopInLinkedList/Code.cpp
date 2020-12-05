#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int data;
        Node* next;
    
};
void push(Node** head,int data)
{
    Node* new_node= new Node();
    new_node->data=data;
    new_node->next=(*head);
}
int detectLoop(Node* head)
{
    if(head==NULL || head->next==NULL)return 0; //base case. No loop can be found
    Node *slow= head,*fast=head; // create two new pointers named slow and fast. Initially pointing at the head.
    while(fast && fast->next) // runs the algorithm till fast pointer does not reach null
    {
        fast=fast->next->next;//fast pointer jumps two nodes
        slow=slow->next; //slow pointer jump one node
        if(slow == fast)//if slow pointer and fast pointer collide it means a loop is detected,
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    Node* head=NULL;
    int n;
    cout<<"Enter no of elements of the linked list"<<endl;
    cin>>n;
    cout<<"Enter all elements"<<"\n";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        push(&head,x);
    }
    head->next->next->next=head;
    if(detectLoop(head))
    {
        cout<<"Loop detected";
    }
    else
    {
        cout<<"No loop found in the linked list";
    }
    return 0;
}

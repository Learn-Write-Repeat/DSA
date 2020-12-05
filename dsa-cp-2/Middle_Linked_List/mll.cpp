#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *push(struct node *head, int data)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));

    temp->data = data;
    temp->next = head;

    return temp;
}

void print(struct node *head)
{
    printf("LIST: ");
    while (head)
    {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

void middle(struct node *head)
{
    struct node *temp = head;
    struct node *last = head;

    if (head)
    {
        while (last && last->next)
        {
            last = last->next->next;
            temp = temp->next;
        }
    }

    if (temp)
        printf("MIDDLE: %d\n\n", temp->data);
}

int main()
{
    struct node *head = NULL;

    for (int i = 1; i <= 5; i++)
    {
        head = push(head, i);
        print(head);
        middle(head);
    }
    return 0;
}

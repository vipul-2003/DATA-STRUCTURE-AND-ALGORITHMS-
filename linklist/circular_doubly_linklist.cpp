#include <iostream>
#include <stdio.h>

using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int val)
    {
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{node * n = new node (val);
    if (head == NULL)
    {
        head=n;
        n->next=n;
        n->prev = n;

    }

    node * temp = head; 

    while (temp->next!= head)
    {
        temp=temp->next;
    }
}

void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *n = new node(val);

    node * temp = head;

    while (temp->next!=head)
    {
        temp =temp->next;
    }

    temp->next =n;
    n->next=head;
    head->prev = n;
}

int main()
{
    return 0;
}
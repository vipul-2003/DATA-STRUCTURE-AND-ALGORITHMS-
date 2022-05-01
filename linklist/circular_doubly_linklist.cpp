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
        data = val;
        prev = NULL;
        next = NULL;
    }
};

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        n->next = n;
        n->prev = n;
        return;
    }

    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->prev=temp;
    n->next = head;
    head->prev = temp;
    head = n;
}

void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *n = new node(val);

    node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
    n->prev=temp;
    head->prev = n;
}

void display(node *head)
{
    node *temp = head;

    while (temp != head)
    {
        cout << temp->data << "->";

        temp = temp->next;
    }

    cout << "NULL"<< "\n";
}

int main()
{

    node *head = NULL;

    insertAtHead(head, 1);

    insertAtTail(head, 2);

    insertAtTail(head, 3);

    insertAtTail(head, 4);

    display(head);
    return 0;
}
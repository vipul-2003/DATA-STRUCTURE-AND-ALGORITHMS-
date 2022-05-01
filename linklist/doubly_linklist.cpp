#include <iostream>
#include <stdio.h>

using namespace std;

class node
{
public:
    int data;

    node *prev;
    node *next;

    // parameterized constructor
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

        return;
    }

    n->next = head;
    head->prev = n;

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

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
}

void deleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    delete (todelete);
}

void deleteAtTail(node *&head)
{
    node *temp = head;

    if (head == NULL)
    {
        cout << "Linklist is empty" << endl;
    }

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    node *todelete = temp->next;
    temp->next = NULL;

    delete (todelete);
}

void display(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL " << endl;

    cout << "\n";
}

void deleteByValue(node *&head, int del)
{
    node *temp = head;

    while (temp->next != NULL)
    {
        if (temp->data == del)
        {
            cout << "Value is found and deleted" << endl;
            node *todelete = temp;
            temp->prev->next = temp->next;

            delete (todelete);

            return;
        }
        temp = temp->next;
    }
}

int main()
{

    node *head = NULL;

    insertAtHead(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtHead(head, 0);

    deleteAtHead(head);
    deleteAtTail(head);
    deleteByValue(head, 2);

    display(head);
    return 0;
}
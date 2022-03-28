#include <iostream>
#include <stdio.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

// To insert the element at head of the linklist
void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }

    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
    head = n;
}

// To insert the element at tail of the linklist
void insertAtTail(Node *&head, int val)
{

    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    Node *n = new Node(val);

    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
}

// To delete the element of the linklist present at the node
void deleteAtHead(Node *&head)
{
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }

    Node *todelete = head;
    temp->next = head->next;
    head = head->next;

    delete (todelete);
}

// To delete the element of the linklist
void deletion(Node *&head, int pos)
{

    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    Node *temp = head;
    int count = 1;

    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }

    Node *todelete = temp->next;
    temp->next = temp->next->next;
    delete (todelete);
}

// To display the elements of the linklist
void display(Node *head)
{
    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << "\n";
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);

    display(head);

    deletion(head, 2);

    display(head);

    insertAtHead(head, 9);

    insertAtHead(head, 8);
    insertAtHead(head, 7);

    display(head);

    deletion(head, 2);
    display(head);

    deletion(head, 1);
    display(head);

      return 0;
}
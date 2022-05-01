// In this part, we create a linklist and performing the reverse of the node

#include <iostream>
#include <stdio.h>

using namespace std;

class node
{
public:
    int data;
    node *next;

    // parameterized constructor
    node(int value)
    {
        data = value;
        next = NULL;
    }
};

// to insert the element at the head of the linklist
void insertAtHead(node *&head, int val)
{
    node *newnode = new node(val);

    // if the linklist is empty , then
    if (head == NULL)
    {
        head = newnode;
        return;
    }

    // To insert the element at first position in the linklist

    newnode->next = head;
    head = newnode;
}

// to insert the element at the end of the linklist
void insertAtTail(node *&head, int val)
{

    node *newnode = new node(val);

    // if the linklist is empty
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *temp = head;

    // if the linklist contains element ,
    //  then traverse to the last nodes

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newnode;
}

// this function is used for displaying the data
void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";

        head = head->next;
    }
    cout << " \n";
}

int main()
{
    node *head = NULL;

    insertAtHead(head, 2);
    insertAtHead(head, 1);

    display(head);

    insertAtTail(head, 3);
    insertAtTail(head, 4);

    display(head);

    return 0;
}

node reverseK(node *&head, int k)
{
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    int count = 0;

    while (currptr != NULL && count < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->next = reverseK(nextptr, k);
    }

    return prevptr;
}


int main ()
{
    node * head = NULL;
    insertAtTail(head , 1);
    
    insertAtTail(head , 2);
    insertAtTail(head , 3);

    insertAtTail(head , 4);

    insertAtTail(head , 5);
    insertAtTail(head , 6);

    display(head);

    int k = 2 ;
    node* newnode = reverseK()

}
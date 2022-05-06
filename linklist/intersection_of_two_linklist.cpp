#include <iostream>
#include <stdio.h>

using namespace std;

class node
{
public:
    int data;
    node *next;

    // parameterized constructor
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// to display the nodes
void display(node *head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

// to count the length of the linklist
int length(node *head)
{
    int len = 0;

    node *temp = head;

    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }

    return len;
}

// to find the intersection point of the two linklist
int intersection(node *head1, node *head2)
{
    int l1 = length(head1);
    int l2 = length(head2);

    int diff = 0; // for taking the difference
    node *ptr1;   // points to the linklist having greater length
    node *ptr2;   // points to the linklist having shorter length

    if (l1 > l2)
    {
        diff = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }

    else
    {
        diff = l2 - l1;

        ptr1 = head2;
        ptr2 = head1;
    }

    while (diff > 0)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL) // edge case but never be possible
        {
            return -1;
        }
        diff--;
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }

        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return -1;
}

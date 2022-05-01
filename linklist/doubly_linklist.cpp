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

void insertAtHead(node *head, int val)
{
}

void insertAtTail(node *head, int val)
{
    if (head ==  NULL)
    {
        insertAtHead(head , val);
    }
}

int main()
{
    return 0;
}
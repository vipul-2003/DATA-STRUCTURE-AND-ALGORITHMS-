/**
 * @file linklist_using_class.cpp
 * @author Vipul Kumar Singh
 * @brief linklist is made with help of class and constructor
 * @version 0.1
 * @date 2022-03-25
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
#include <stdio.h>

using namespace std;

class Linklist
{
public:
    string name;
    int rollno;

    // to store the address of the node
    Linklist *next;

    // parameterized constructor call
    Linklist(int data, string naam)
    {
        name = naam;
        rollno = data;
        next = NULL;
    }
};

// to insert the element at tail
void inserAtTail(Linklist *&head, int data, string naam)
{
    Linklist *new_node = new Linklist(data, naam);
    if (head == NULL)
    {
        head = new_node;
        // and new_node should have Null by paramaetrized cosnstructor
        return;
    }

    Linklist *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = new_node;
    // and new_node should have Null by paramaetrized constructor
}

// to insert the element at head
void insertAtHead(Linklist *&head, int data, string naam)
{
    Linklist *new_node = new Linklist(data, naam);

    new_node->next = head;
    head = new_node;
}

// to display the elements of the Linklist
void display(Linklist *head)
{
    Linklist *temp = head;
    while (temp != NULL)
    {
        cout << "Name =" << temp->name << " roll no. =" << temp->rollno << " --> ";
        temp = temp->next;
    }
    cout << "NULL " << endl;
}

int main()
{
    Linklist *head = NULL;

    inserAtTail(head, 1, "vipul kumar");
    inserAtTail(head, 2, "Aman kumar");
    inserAtTail(head, 3, "Vipul kumar Singh");

    display(head);

    insertAtHead(head, 4, "Ram Kumar ");

    insertAtHead(head, 5, " shri Rajesh Kumar ");

    display(head);

    return 0;
}
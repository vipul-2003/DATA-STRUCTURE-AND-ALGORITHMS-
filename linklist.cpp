#include <iostream>
#include <stdio.h>

using namespace std;

struct node
{
    int data;
    struct node *link;
};

struct node *start = NULL;

struct node *createnode()
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    return (n);
}

void insertnode()
{
    struct node *temp, *t;
    temp = createnode();
    cout << "\nEnter the number \n";
    cin >> temp->data;

    temp->link = NULL;
    if (start == NULL)
    {
        start = temp;
    }

    else
    {
        t = start;
        while (t->link != NULL)
        {
            t = t->link;
        }

        t->link = temp;
    }
}

void deletenode()
{
    struct node *del;

    if (start == NULL)
    {
        cout << "\nList is empty \n" << endl;
    }

    else
    {
        del = start;
        start = start->link;
        free(del);
    }
}

void traveresenode()
{
    struct node *trav;

    if (start == NULL)
    {
        cout << "\nlist is empty \n" << endl;
    }

    else
    {
        trav = start;
        while (trav != NULL)
        {
            cout << "link list data " << trav->data;
            trav = trav->link;
        }
    }
}


int menu ()
{
    int ch ;
    cout <<"1. Add the value to the linklist \n";
    cout <<"2. Delete first value \n";
    cout <<"3. View list \n";
    cout <<"4. Exit \n";

    cout <<"Enter the choice  "<<endl;
    cin>>ch;

    return (ch );
}

int main ()
{
    while (true )
    {
        switch (menu() )
        {
            case 1:
            insertnode ();
            break;

            case 2:
            deletenode();
            break;

            case 3: 
            traveresenode();
            break;

            case 4:
            cout <<"exited!!\n";
            exit(0);
            
            default :
            cout <<"Invalid choice \n"<<endl;
        }
    }
return 0 ;
}
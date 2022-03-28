#include <iostream>
#include <stdio.h>

using namespace std;

class Linklist
{
public:
    int rollno;
    string name;

    Linklist *next; // pointer for the next node

    Linklist(int val, string naam)
    {
        rollno = val;
        name = naam;
        next = NULL;
    }
};


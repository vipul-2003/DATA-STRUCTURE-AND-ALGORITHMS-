//Define a program to find out whether a given number is even or odd.


#include <iostream>
#include <stdio.h>

using namespace std ;

void even_odd(int num )
{
    if (num % 2 == 0) 
    {
        cout <<"Even function "<<endl;
    }

    else 
    {
        cout <<"Odd function "<<endl;
    }

}

int main(void )
{
    cout <<"ENter the number to check even or odd "<<endl;
    int ch ;

    cin>>ch ;

    even_odd(ch);
    
    return 0 ;

}
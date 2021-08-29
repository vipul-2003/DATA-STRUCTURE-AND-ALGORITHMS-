//Define a program to find out whether a given number is even or odd.


#include <iostream>
#include <stdio.h>

using namespace std ;

int main(void )
{
    cout <<"ENter the number to check even or odd "<<endl;
    int ch ;

    cin>>ch ;

    if (ch % 2 == 0) 
    {
        cout <<"Even function "<<endl;
    }

    else 
    {
        cout <<"Odd function "<<endl;
    }

    return 0 ;

}
#include <iostream>
#include <stdio.h>

using namespace std ;

int main (void )
{
    cout <<"enter the no. to check it is even or odd "<<endl;
    int n  ;

    cin>>n ;

    if (n%2 == 0)
    {
        cout <<"even \n";
    }

    else
    cout <<"odd \n";


    return 0;
}
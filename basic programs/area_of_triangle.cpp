#include <iostream>
#include <stdio.h>

using namespace std ;

int main (void )
{
    cout <<"Enter the base and height of the triangle (in cms )"<<endl;
    int base , height ;

    cin>>base >> height ;

    float area = 0.5 * base * height ;

    cout <<"Area Of the triangle "<<area <<" cm square"<<endl; 

    return 0;
}
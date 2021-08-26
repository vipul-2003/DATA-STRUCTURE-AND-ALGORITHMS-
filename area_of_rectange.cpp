#include <iostream>
#include <stdio.h>

using namespace std ;

int main (void )
{
    cout <<"enter the length and breadth of rectangle "<<endl;
    int len , br ;

    cin >>len >>br ;

    float area = len * br ;

    cout <<"AREA OF RECTANGLE \n"<<area;

    return 0;
}
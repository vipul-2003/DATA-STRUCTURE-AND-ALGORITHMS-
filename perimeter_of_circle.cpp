#include <iostream>
#include <stdio.h>
#define pi 3.141592653589793

using namespace std ;

int main(void)
{
    cout <<"Enter the radius of circle ";
    float radius ;

    cin >> radius ;

    float ans = 2 *pi * radius ;

    cout <<"The radius of circle is "<<ans ;

    return 0; 
}
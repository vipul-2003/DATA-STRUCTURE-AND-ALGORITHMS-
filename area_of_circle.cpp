#include <iostream>
#include <stdio.h>
#include <math.h>

#define pi 3.14

using namespace std;

int main (void )
{
    float radius ;

    cout <<"ENter the radius of circle "<<endl;
    cin >>radius ;

    cout <<"AREA OF CIRCLE = "<< pi * pow(radius,2);

    return 0 ;
}
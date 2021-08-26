#include <iostream>
#include <stdio.h>
#include <math.h>
#define pi 3.141592653589793

using namespace std;

int main (void){

    cout <<"ENter the radius of sphere";

    float radius ;
    cin >> radius ;

    float volume = (4*pi * pow (radius, 3))/3 ;

    cout <<"volume of sphere "<<volume ;

    return 0; 
}
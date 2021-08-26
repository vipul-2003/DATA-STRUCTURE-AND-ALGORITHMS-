#include <iostream>
#include <stdio.h>
#include <math.h>
#define pi 3.141592653589793

using namespace std;

int main (void){

    cout <<"ENter the height and radius of cone ";

    float radius , height ;
    cin >> radius >> height ;

    float volume = pi * pow (radius, 2) *height ;

    cout <<"volume of cone "<<volume ;

    return 0; 
}
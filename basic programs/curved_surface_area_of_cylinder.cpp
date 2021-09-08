#include <iostream>
#include <Stdio.h>
#define pi 3.141592653589793

using namespace std;

int main(void)
{
    cout <<"Enter the height and radius for curved surface area of cylinder";

    float height , radius ;
    cin>> height >> radius ; 
    
    float csa = (2 * pi * radius * height );

    cout <<"The curved surface area of cylinder is "<<csa ;

    return 0; 
}  
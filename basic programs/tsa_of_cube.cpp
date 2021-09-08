#include <iostream>
#include <Stdio.h>
#define pi 3.141592653589793

using namespace std;

int main(void)
{
    cout <<"Enter the height and radius for total surface area of cylinder";

    float height , radius ;
    cin>> height >> radius ; 
    
    float tsa = (2 * pi * radius )*( height  + radius);

    cout <<"The total surface area of cylinder is "<<tsa ;

    return 0; 
}  
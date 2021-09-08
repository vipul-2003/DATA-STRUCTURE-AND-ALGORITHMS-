//Perimeter Of Parallelogram
//Perimeter Of Rectangle
//Perimeter Of Square
//Perimeter Of Rhombus

#include "iostream"
#include "stdio.h"

using namespace std;

int main (void )
{
    cout <<"enter the length and breadth of parallelograms ";

    int len , bre ;

    cin >> len >> bre ;

    float perimeter  = 2 *(len + bre );


    cout << "perimeter of the parallelogram is " <<perimeter;

    return 0;

 }
//same algorithms for the rectangle 
#include "iostream"
#include "stdio.h"

using namespace std;

int main (void )
{
    cout <<"enter the length of 3 sides  of triangle ";

    int l1 , l2 , l3 ;

    cin >> l1 >> l2 >> l3 ;

    float perimeter  = l1 + l2 + l3;


    cout << "perimeter of the triangle is " <<perimeter;

    return 0;

 }
//for the equilateral triangle length of a (side X 3) is used 
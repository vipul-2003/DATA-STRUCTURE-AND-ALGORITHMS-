#include <iostream>
#include <iomanip>
#include<math.h>

using namespace std ;

int main (void)
{
    cout <<"ENter the currency in rupees  "<<endl;
    float rupees ;

    cin >> rupees;

    float dollar = rupees / 72 ;

    cout <<"CURRNCY IN DOLLAR IS "<< setprecision(5) <<dollar;

    return 0 ; 

}
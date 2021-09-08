#include "iostream"
#include <stdio.h>

using namespace std ;

int main(void ){

    cout <<"enter the principle , rate and time ";
    int principle , rate , t ;

    cin >> principle >> rate >> t  ;

    float simpleInterest = (principle * rate * t )/ 100 ;

    cout <<"simple interest "<< simpleInterest;

    return 0; 

}
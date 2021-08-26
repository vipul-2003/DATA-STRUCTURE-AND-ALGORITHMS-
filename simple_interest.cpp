#include "iostream"
#include <stdio.h>

using namespace std ;

int main(void ){

    cout <<"enter the principle , rate and time ";
    int principle , rate , time ;

    cin >> principle >> rate >> time ;

    double simpleInterest = (principle * rate * time )/ 100 ;

    cout <<"simple interest "<< simpleInterest;

    return 0; 

}
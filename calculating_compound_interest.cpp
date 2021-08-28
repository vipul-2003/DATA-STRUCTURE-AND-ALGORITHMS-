#include <iostream>
#include <stdio.h>
#include <math.h>


using namespace std;

int main(void )
{

    cout <<"Calculating Compound Interest \n";
    cout <<"Enter the principle amount "<<endl;
    int principle ;
    cin>> principle;

    cout <<"Enter the interest rate "<<endl;
    float interestRate ;
    cin>> interestRate;

    cout<<"Enter the no. of times interest applied per time period"<<endl;
    float n;
    cin>>n;

    cout <<"Enter the no. of time periods elapsed "<<endl;
    float time;
    cin >> time ;


    float amount = principle*pow((1 + (interestRate/n)) , n*time );

    cout <<"Compound Interest is " << amount <<endl;

    return 0;
}
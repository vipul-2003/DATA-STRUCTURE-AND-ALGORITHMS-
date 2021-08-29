//A person is eligible to vote if his/her age is greater than or equal to 18. Define a method to find out if he/she is eligible to vote.

#include <iostream>
#include <stdio.h>

using namespace std;

bool voting_eligibilty(int *num ); // function prototyping 

int main(void)
{
    cout <<"Enter the your present age "<<endl;
    int age ;

    cin >> age;

    bool eligible = voting_eligibilty( & age );

    eligible == true ? cout <<"Eligible for voting "<<endl : cout <<"NOT Eligible for voting "<<endl;

    return 0;
}

bool voting_eligibilty(int *num) // function declaration 
{
    if (*num >= 18 )
    {
        return true ; // when age is greater than or equal to 18
    }

    else return false ; // when age is less than 18 
}
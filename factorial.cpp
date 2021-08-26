#include <iostream>
#include <stdio.h>

using namespace std ;

int main(void )
{
    cout <<"enter the number to find the factorial "<<endl;
    int n ; 
    cin>>n;

    int i = n ;

    int ans = 1;

    while (i >0)
    {
        ans =  ans * i  ;
    }

    cout <<"the solution of factorial is "<<ans ;

    return  0 ;

}


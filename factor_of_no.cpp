#include <iostream>
#include<stdio.h>

using namespace std ;

int main (void)
{
    cout <<"ENter the no. to find its factor "<<endl;
    int n ;

    cin >> n ;

    for ( int i = 1 ; i <= n ; i++ )
    {
        if (n%i == 0) cout << i <<"\n";
    }

    return 0 ; 

}
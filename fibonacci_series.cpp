#include <iostream>
#include <stdio.h>

using namespace std;

int main(void )
{
    cout <<"Enter the number to print series upto this " ;

    int n ;
    cin >>n ;

    cout <<"The fibonacci series is "<<endl;
    int a = 0 , b = 1;

    while (n>0)
    {
        cout <<a <<" "<<b;
        a =  a + b ;
        b =  b + a; 

        n--;
    }

return 0 ;
}
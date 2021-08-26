#include <iostream>
#include <Stdio.h>

using namespace std;

int main(void)
{
    int num ;
    cout <<"Enter the no.to find its factorial"<<endl;
    cin>>num;

    int ans = 1;

    for (int i = num ; i>1 ; --i)
    {
        ans = ans * i ;
    }

    cout <<"The factorial of the number is "<< ans ;

    return 0; 
}  
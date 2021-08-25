#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Enter the two numbers \n";
    int n1, n2;

    cin >> n1 >> n2;

    int largest = ( n1 > n2 )? n1 : n2;

    while (true )
    {
        if (largest % n1 == 0 && largest % n2 == 0)
        {
            cout << "The lcm of two no.s is " << largest << endl;
            break ;
        }
        largest += largest ;
    }
    return 0;
}

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;

    cout << "enter the number " << endl;
    cin >> n;

    int no_of_digits = 0;

    //Unoptimised version

    /*
    space complexitiy = O(2*int )
    time complexity = O(no. of digits )
    */
    while (n > 0)
    {
        int k = n % 10;
        if (k > 0)
        {
            no_of_digits++;
        }
        n /= 10;
    }

    cout << "NO. of digits are " << no_of_digits << endl;

    // optimised version of code

    /*
    space complexitiy = O(1)
    time complexity = O(1)
    */

    cout << "no. of digits are " << (floor(log10(n) + 1));
    return 0;
}
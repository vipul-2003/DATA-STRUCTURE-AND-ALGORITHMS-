#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{

    int arr;
    int neg_sum = 0, pos_even_sum = 0, pos_odd_sum = 0;

    do
    {
        cout << "Enter the numbers " << endl;
        cin >> arr;

        if (arr < 0) // if the num is negative
        {
            neg_sum += arr;
        }

        else if (arr > 0) // if the num is positive
        {
            if (arr % 2 == 0)
            {
                pos_even_sum += arr; // if the num is even and positive
            }

            else
            {
                pos_odd_sum += arr; // if the num is even and negative
            }

        }

    } while (arr != 0);

    
    cout << "Sum of negative numbers is " << neg_sum << endl;
    cout << "Sum of positive even number is " << pos_even_sum << endl;
    cout << "Sum of positive odd number is " << pos_odd_sum << endl;

    return 0;
}
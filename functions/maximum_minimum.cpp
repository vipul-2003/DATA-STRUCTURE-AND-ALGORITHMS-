//Define two methods to print the maximum and the minimum number respectively among three numbers entered by user.

#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
    cout << "Enter the  no.s to find minimum or maximum" << endl;
    int arr[3];

    int maximum = -199999999, minimum = 999999999;

    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];

        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }

        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    cout << "Maximum of 3 no.s is " << maximum << endl;
    cout << "Minimum of 3 no.s is " << minimum << endl;

    return 0;
}
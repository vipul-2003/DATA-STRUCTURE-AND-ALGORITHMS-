#include <iostream>
#include <stdio.h>
#include <limits.h>
#define MAX -2147483648

using namespace std;

int main(void)
{
    cout << "Enter the no." << endl;
    int n;
    int largest = MAX;

    do
    {
        cin >> n;

        if (n > largest)
        {
            largest = n;
        }

    } while (n != 0);

    cout << "THE LARGEST NO.S IS " << largest;

    return 0;
}
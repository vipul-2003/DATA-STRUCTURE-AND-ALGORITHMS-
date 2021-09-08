#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
    cout << "Enter the no." << endl;
    int n;
    int sum = 0;

    do
    {
        cin >> n;

        sum += n;

    } while (n != 0);

    cout << "THE SUM OF NO.S IS " << sum;

    return 0;
}
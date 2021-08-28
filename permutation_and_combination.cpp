
#include <iostream>
#include <stdio.h>

using namespace std;

int permutation(int, int); // function prototyping
int combination(int, int); // function prototyping

int main(void)
{
    int ch;

    int n, r;

    cout << "1. PERMUTATION" << endl;
    cout << "2. COMBINATION" << endl;
    cout << "Enter the choice in range (1-2)" << endl;
    cin >> ch;

    switch (ch)
    {
    case 1:

        do
        {
            cout << "Enter the n and r to find its permuatation" << endl;
            cin >> n >> r;
        } while (n < r);

        cout << "The permutation is " << permutation(n, r);

        break;

    case 2:

        do
        {
            cout << "Enter the n and r to find its permuatation" << endl;
            cin >> n >> r;
        } while (n < r);

        cout << "The combination is " << combination(n, r);

        break;

    default:
        cout << "Invalid choice " << endl;
    }

    return 0;
}

int permutation(int n, int r)
{
    long int ans;
    int n1 = n - r;

    long int numerator = 1, denominator = 1;

    while (n > 1)
    {
        numerator *= n;
        n--;
    }

    while (n1 > 1)
    {
        denominator *= n1;
        n1 -= 1;
    }

    ans = (numerator / denominator);

    return (ans);
}

int combination(int n, int r)
{
    long int ans;
    int n1 = n - r;

    long int numerator = 1, denominator = 1;

    while (n > 1)
    {
        numerator *= n;
        n--;
    }

    while (n1 > 1)
    {
        denominator *= (n1);
        (n1)--;
    }

    while (r > 1)
    {
        denominator *= r;
        r--;
    }

    ans = (numerator / denominator);

    return (ans);
}
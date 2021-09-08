#include <iostream>
#include <stdio.h>

using namespace std;

int lcm();
int hcf();

int main()
{

    int choice;

        cout << "1. L.C.M.\n";
        cout << "1. H.C.F.\n";
        cout << "Enter the choice in between 1 - 2 " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            // this is the lcm part of the function
            lcm();
            break;

        case 2:
            // this is the hcf part of the function
            hcf();
            break;

        default:
            cout << "Invalid choice (range of input must be in 1-2 )" << endl;
            break;
        }
    
    return 0;
}

int lcm(void)
{
    int n1, n2;
    cout << "Enter the two numbers \n";

    cin >> n1 >> n2;

    int maxi = (n1 > n2) ? n1 : n2;

    while (true)
    {
        if (maxi % n1 == 0 && maxi % n2 == 0)
        {
            cout << "The lcm of two no.s is " << maxi << endl;
            break;
        }
        maxi += maxi;
    }

    return 0;
}

int hcf()
{
    int hcf = 1;

    int n1, n2;

    cout << "Enter the two no.s \n";
    cin >> n1 >> n2;

    int mini = (n1 > n2) ? n2 : n1;
    for (int i = 1; i <= mini; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }

    cout << "HCF of two no.s is " << hcf << endl;
    return 0;
}
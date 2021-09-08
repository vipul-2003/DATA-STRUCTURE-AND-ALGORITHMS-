#include "iostream"
#include "stdio.h"

using namespace std;

int main(void)
{

    cout << "calculator is here !! solve easily \n";

    cout << "Enter the two no.s  (n1 > n2 ) \n";
    int n1, n2;
    cin >> n1 >> n2;

    cout << "(+) ADD \n";
    cout << "(-) SUBTRACT \n";
    cout << "(*) MULTIPLICATTION \n";
    cout << "(/) DIVISION \n";

    cout << "Enter the choice \n";
    char ch;
    cin >> ch;

    int sum, subtract, multiply, divide;

    switch (ch)
    {
    case '+':
        sum = n1 + n2;
        cout << "SUM " << sum << endl;
        break;

    case '-':
        subtract = n1 - n2;
        cout << "SUBTRACT " << subtract << endl;
        break;

    case '*':
        multiply = n1 * n2;
        cout << "MULTIPLY " << multiply << endl;
        break;

    case '/':
        divide = n1 / n2;

        cout << "DIVIDE " << divide << endl;
        break;

    default:
        cout << "INVALID CHOICE !!" << endl;
    }
    return 0;
}
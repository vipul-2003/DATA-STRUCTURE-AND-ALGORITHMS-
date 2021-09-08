#include "iostream"
#include "stdio.h"
#include "algorithm"

using namespace std;

int main(void)
{
    cout << "Enter the string to reverse " << endl;
    string str;

    getline(cin, str);

    reverse(str.begin(), str.end());

    cout << "The reverse of string is " << str << endl;
    return 0;
}
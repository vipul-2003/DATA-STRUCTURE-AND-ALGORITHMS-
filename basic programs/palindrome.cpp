#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{
    cout << "Enter the no. to check it's palindrome or not " << endl;
    string str;

    getline(cin, str);

    /* to check whether it is palindrome or not then we have two method 
    1.  num %10 ==> rem
        rem * its place (unit , tenth , hundredth, ...)
        num /= 10

        NOTE :: this will only work on numbers not on characters or symbols 

    2.  simply reverse the input statement using reverse function 
     or run the string from opposite sides and compare 

*/
    bool isPalindrome = false;

    for (int i = 0; i < (str.length()) / 2; i++)
    {
        if (str[i] == str[str.length()-i-1])
        {
            isPalindrome = true;
        }
    }

    if (isPalindrome)
        cout << "String is Palindrome " << endl;

    else
        cout << "String is  Not Palindrome " << endl;
    return 0;
}

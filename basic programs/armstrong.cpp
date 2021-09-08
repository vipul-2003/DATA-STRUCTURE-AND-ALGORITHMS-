#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{

    cout << "Enter the number to check whether it is armstrong " << endl;
    int original_num , num ;
    int armstrong = 0;

    cin >> original_num;

    num = original_num;

    while (num > 0)
    {
        int rem = num % 10;
        armstrong += pow(rem, 3);
        num = num / 10;
    }

    if (original_num == armstrong)
    {
        cout << "The number is ARMSTRONG" << endl; 
        return 0;
    }

    else
    {
        cout <<"Warning this is not ARMSTRONG"<<endl;
         return(-1); // whenever if statement is not executed 
    }

}
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int size; // to store the size of an array 

    cout << "Enter the size of the array" << endl;
    cin >> size;

    int arr[size];
    int currentsum = 0; // to store the current element in the array 
    int maximumsum = INT_MIN; // to store the maximum sub array sum 

    // taking input from user

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // to print the sum of maximum sub-array

    for (int i = 0; i < size; i++)
    {
        currentsum += arr[i];

        // if number is less than zero then , set the current sum = 0 
        if (currentsum < 0)
            currentsum = 0;

        maximumsum = max(currentsum, maximumsum); // to store the maximum element 
    }

    cout << "THE SUM OF MAXIMUM SUB ARRAY IS " << maximumsum << endl;

    return 0;
}

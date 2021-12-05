/**
 * @file LinearSearch.cpp
 * @brief applying binary search on array which either may be ascending or descending in nature
 * @version 0.1
 * @date 2021-12-06
 * @copyright Copyright (c) 2021
 *
 */

#include <bits/stdc++.h>
using namespace std;

int LinearSearch(vector<int> arr, int target ,int n);

int main (void)
{
    int n;

    cout << "Enter the size of array ";
    cin >> n;

    vector<int> arr;

    int temp ;

    for (int i = 0; i < n; i++)
    {
        cin>>temp;
        arr.push_back(temp); 
    }

    cout << endl;

    int target;

    cout << "Enter the target ";
    cin >> target;

    int ans = LinearSearch(arr, target , n);

    cout << "Output of Linear Search" << ans;

    return 0;
}

int LinearSearch(vector<int> arr, int target , int n)
{
    for ( int i = 0 ;i < n ; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -5 ;
}

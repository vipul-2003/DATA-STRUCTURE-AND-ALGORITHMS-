/**
 * @file BinarySearch.cpp
 * @brief applying binary search on array which either may be ascending or descending in nature
 * @version 0.1
 * @date 2021-12-06
 * @copyright Copyright (c) 2021
 *
 */

#include <bits/stdc++.h>
using namespace std;

int BinarySearch(vector<int> arr, int target ,int n);

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

    int ans = BinarySearch(arr, target , n);

    cout << "Output of  Binary Search " << ans;

    return 0;
}

int BinarySearch(vector<int> arr, int target , int n)
{
    int start = 0;
    int end = arr.size() - 1;

    int mid;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

       if (arr[mid] > target)
            {
                end = mid - 1;
            }

            else
            {
                start = mid + 1;
            }
    }

    return -5; // runs if the element not found 
}

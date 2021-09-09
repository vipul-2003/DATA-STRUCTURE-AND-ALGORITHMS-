#include <iostream>
#include <stdio.h>

using namespace std;

void InsertionSort(int *arr , int n);
void Swap(int *arr, int start, int end);

int main()
{
    int n;

    cout <<"Enter the length of an array "<<endl;
    cin >> n;

    int arr[n];
    for (int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }

    InsertionSort(arr , n);

     for (int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}

void InsertionSort( int arr[] , int n )
{
    for(int i = 0 ; i < n ; i++)
    {
        int j = i+1 ;
        while ( j > 0)
        {
            if (arr[j-1] > arr[j] )
            {
                Swap (arr , j-1 ,j);
            }
            j--;
        }
    }  
}

void Swap(int arr[], int start, int end)
{
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}
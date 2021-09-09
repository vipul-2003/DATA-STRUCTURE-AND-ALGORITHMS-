#include <iostream>
#include <stdio.h>

using namespace std;
void BubbleSort(int *arr, int n);
void Swap(int *arr, int start, int end);

int main()
{
    int n;

    cout << "Enter the length of an array " << endl;
    cin >> n;

    int arr[n];

    for (auto i = 0; i < n; i++) // to take an input from the user
    {
        cin >> arr[i];
    }

    BubbleSort(arr, n);

    for (auto i = 0; i < n; i++) // to output the sorted array
    {
        cout << arr[i] << " ";
    }

    return 0;
}

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n - i; j++)
        {

            if (arr[j - 1] > arr[j])
            {
                Swap(arr, j, j - 1);
            }
        }
    }
}

void Swap(int arr[], int start, int end)
{
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}
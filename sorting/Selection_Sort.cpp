#include <iostream>
#include <stdio.h>

using namespace std ;
/*
function prototyping 
*/
void Selection_Sort( int arr[] , int size); 
int maxIndex(int arr[] , int start , int last);
void Swap(int arr[] , int max , int last);


int main (void )
{
    int n;
    cout <<"enter the length of an array "<<endl;
    cin >> n ;
    
    int arr[n];
    
    for (int i = 0 ; i <n ; i++)
    {
        cin >>arr[i];
    }
    
    Selection_Sort (arr , n); // calling of sorting function 
    
}

void Selection_Sort(int *arr , int size)
{
    for(int i = 0 ; i< size ; i++)
    {
        int last = size - i -1;
        int max = maxIndex(arr , 0 , last);
        Swap(arr , max , last);
        
    }
    
    for (auto i = 0 ; i < size ; i++)
    {
        cout <<arr[i]<<"  ";
    }
    cout <<endl;
}

int maxIndex(int arr[] ,int start , int last)
{
    int max = start ;
    for (int i =start ; i <= last ; i++)
    {
        if (arr[max] < arr [i])
        {
            max = i;
        }
        
    }
    return max ;
}

void Swap(int arr[] , int max , int last) // swapping the elements of an array 
{
    int temp = arr[max];
    arr[max] = arr[last];
    arr[last] = temp ;
    
}
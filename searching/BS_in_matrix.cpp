// using binary search for the matrix
// considering matrix as 1-D array

// #include <iostream>
// #include <stdio.h>
// #define m 100
// #define n 100

// using namespace std;

// void BS_in_matrix(int mat[3][3], int);

// int main(void)
// {
//     int matrix[3][3];
//     int target = 6;

//     matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

//     BS_in_matrix(matrix, target);

//     return 0;
// }

void BS_in_matrix (int mat[][] , int target)
{
    int row = mat.size() - 1;
    int column = mat[0].size() - 1;

    int start = 0 ;
    int end = column * row ;

    int mid ;

    while (start <= end )
    {
        mid =  start + (end - start)/2 ;

        if (mat[mid] == target )
        {
            cout <<"ROW : " << mid/column <<" ";
            cout <<"COLUMN : " << mid%column <<" ";
        }

        else if (mat[mid] > target )
        {
            end = mid -1;
        }

        else{
            start = mid +1 ;
        }
    }

// else return 0;

}
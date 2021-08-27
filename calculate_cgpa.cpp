#include <iostream>
#include <stdio.h>

using namespace std;

int main(void )
{
    cout <<"Enter the number of  subjects "<<endl;
    int num ;

    cin>> num ;

    double sum = 0 ;

    cout <<"ENter the marks of N subjects (out of 100) "<<endl;
    double marks[num];

    for (int i = 0 ; i< num ; i++){
        cout <<"Enter the marks of "<<i+1<<" subjects =>";
        cin>>marks[i];

        marks[i] /=10;

        sum = marks[i] + sum ;

    }

    double cgpa = sum /num ;

    cout<<"cgpa = "<<cgpa<<endl;

    return 0;

}
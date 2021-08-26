#include <iostream>
#include <stdio.h>

using namespace std;

int main (void){

    cout <<"ENter the base length , base width , pyramid height of sphere";

    float bas_len , bas_wid , height ;
    cin >> bas_len >> bas_wid >> height ;

    float volume = (bas_len * bas_wid * height )/3 ;

    cout <<"volume of pyramid "<<volume ;

    return 0; 
}
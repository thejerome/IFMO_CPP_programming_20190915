//Дано три числа. Упорядочите их в порядке неубывания.
//
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//1
//Sample Output:
//
//1 1 2

#include "t10_sort3.h"
#include <iostream>

using namespace std;

int t10_sort3() {
 int x,y,z;
    cin>>x>>y>>z;
    if(x <=y && x<=z){
        if(y<=z){
            cout<<x<<" "<<y<<" "<<z;
        }
        else{
            cout<<x<<" "<<z<<" "<<y;
        }
    }
    else if(y<=x && y<=z){
        if(x<=z){
            cout<<y<<" "<<x<<" "<<z;
        }
        else{
            cout<<y<<" "<<z<<" "<<x;
        }
    }
    else if(z<=x&&z<=y){
        if(x<=y){
            cout<<z<<" "<<x<<" "<<y;
        }
        else{
            cout<<z<<" "<<y<<" "<<x;
        }
    }
}

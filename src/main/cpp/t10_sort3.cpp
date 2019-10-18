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

    int a,b,c;
    cin >> a >> b >> c;
    if(a <= b){
        if(b <= c){
            cout << a << " " << b << " " << c;
        }else{
            if(c <= a){
                cout << c << " " << a << " " << b;
            }else{
                cout << a << " " << c << " " << b;
            }
        }
    }else{
        if(b > c){
            cout << c << " " << b << " " << a;
        }else{
            if(c <= a){
                cout << b << " " << c << " " << a;
            }else{
                cout << b << " " << a << " " << c;
            }
        }
    }
    return 0;

};
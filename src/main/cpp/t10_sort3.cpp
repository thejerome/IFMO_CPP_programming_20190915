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
    int a, b, c3, tempf,tempm,templ = 0;
    cin >>a >>b >> c;
    if (a>=b && a>=c) {
        tempf = a;
        tempm = b;
        templ = c;
    }
    if (b>=a && b>=c) {
        temp = b;
        tempm = a;
        templ = c;
    }
    if (c>=a && c>=b) {
        temp = c;
        tempm = a;
        templ = b;
    }
    if (tempm>templ){
        cout << templ << " " << tempm << " " << tempf;
    }
    else{
        cout << tempm << " " << templ << " " << tempf;
    };
    return 0;


};

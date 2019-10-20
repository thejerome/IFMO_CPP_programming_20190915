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
    int A1, B2, C3, tmp,tmp_middle,tmp_last = 0;
    cin >>A1 >>B2 >> C3;
    if (A1>=B2 && A1>=C3) {
        tmp = A1;
        tmp_middle = B2;
        tmp_last = C3;
    }
    if (B2>=A1 && B2>=C3) {
        tmp = B2;
        tmp_middle = A1;
        tmp_last = C3;
    }
    if (C3>=A1 && C3>=B2) {
        tmp = C3;
        tmp_middle = A1;
        tmp_last = B2;
    }
    if (tmp_middle>tmp_last)
        cout << tmp_last << " " << tmp_middle << " " << tmp;
    else
        cout << tmp_middle << " " << tmp_last << " " << tmp;

};
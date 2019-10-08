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
    int q,w,r,s,s1,s2;
    cin >> q >> w >> r;
    if (q>w) {
        s=q;
        q=w;
        w=s;
    }
    if (q>r) {
        s1=q;
        q=r;
        r=s1;
    }
    if (w>r) {
        s2=w;
        w=r;
        r=s2;
    }
    cout<<q<<" "<<w<<" "<<r;
    return 0;
}
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
    int m,n,k;
    cin>>m;
    cin>>n;
    cin>>k;
if (m>=n && m>=k) {
    if (k>=n) {
        cout<<n<<' '<<k<<' '<<m;
    }
    else {
        cout<<k<<' '<<n<<' '<<m;
    }
}
if (n>m && n>k) {
    if (k>m) {
        cout<<m<<' '<<k<<' '<<n;
    }
    else {
        cout<<k<<' '<<m<<' '<<n;
    }
}
if (k>m && k>=n) {
    if (n>m) {
        cout<<m<<' '<<n<<' '<<k;
    }
    else {
        cout<<n<<' '<<m<<' '<<k;
    }
}

    return 0;
}

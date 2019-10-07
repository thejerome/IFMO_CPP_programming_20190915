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
    int N1=0;
    int N2=0;
    int N3=0;
    int n1=0;
    int n2=0;
    int n3=0;
    cin >> N1 >> N2 >> N3;

    if (N1 <= N2) {
        n1 = N1;
        n2 = N2;
    }
    else {
        n1 = N2;
        n2 = N1;
    }

    if (n1 <= N3) n3 = N3;
    else {
        n3 = N1;
        n1 = N3;
    }
    if (n2 >= n3) {
        int temp=0;
        temp = n2;
        n2 = n3;
        n3 = temp;
    }
    cout << n1 << ' ' << n2 << ' ' << n3;
};
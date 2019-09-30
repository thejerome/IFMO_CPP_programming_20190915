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
    int a = 0, b = 0, c = 0, max = 0, mid = 0, min = 0;
    cin >> a >> b >> c;
    if(a>b)
    {
        max = a;
        mid = b;
        min = c;
    }
    else
    {
        max = b;
        mid = a;
        min = c;
    }
    if (c>max && max == a)
    {
        max = c;
        mid = a;
        min = b;
    }
    else if (c > max && max == b)
    {
        max = c;
        mid = b;
        min = a;
    }
    else if (c>b && max ==a)
    {
        mid = c;
        min = b;
    }
    else if (c>a && max == b)
    {
        mid = c;
        min = a;
    }
    cout << min << ' ' << mid << ' ' << max << endl;
    
    return 0;
}
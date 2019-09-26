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
    int a, b, c, one, two, three;
    cin >> a >> b >> c;
    if (a > b)
    {one = a;
        if (c > a)
        {one = c;
         two = a;
         three = b;}
            else
        {
            if (c > b)
             {two = c;
              three = b;}
            else
             {two = b;
              three = c;}
        }
    }
    else
    {
        one = b;
        if (c > b)
        {one = c;
         two = b;
         three = a;}
            else
        {
            if (a > c)
             {two = a;
              three = c;}
            else
             {two = c;
              three = a;}
        }
    }
    cout << three << " " << two << " " << one;
    return 0;
};

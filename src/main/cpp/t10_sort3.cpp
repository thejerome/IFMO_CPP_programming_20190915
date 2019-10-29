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

int t10_sort3()
{
     int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    if ((x1 >= x2)&&(x1 >= x3))
    {
        if (x2 >= x3)
            cout << x3 << ' ' << x2 << ' ' << x1;
        else
            cout << x2 << ' ' << x3 << ' ' << x1;
    }
    else
        {
        if ((x2 >= x1) && (x2 >= x3))
        {
            if (x1 >= x3)
                cout << x3 << ' ' << x1 << ' ' << x2;
            else
                cout << x1 << ' ' << x3 << ' ' << x2;
        }
        else
        if ((x3 >= x1) && (x3 >= x2))
        {
            if (x2 >= x1)
                cout << x1 << ' ' << x2 << ' ' << x3;
            else
                cout << x2 << ' ' << x1 << ' ' << x3;
        }
    }
    return 0;
};

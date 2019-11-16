//Напишите функцию min(a, b), вычисляющую минимум двух чисел. 
// Затем напишите функцию min4(a, b, c, d), вычисляющую минимум 4 чисел с помощью функции min. 
// Считайте четыре целых числа и выведите их минимум.
//Формат входных данных
//        Вводятся четыре целых числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//4
//5
//6
//7
//Sample Output:
//
//4

#include "t01_min.h"
#include <iostream>


using namespace std;

int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int min4(int x1, int x2, int x3, int x4)
{
    return min(min(x1, x2), min(x3, x4));
}


int t01_min() {
int q, w, e, r;
cin >> q >> w >> e >> r;
cout << min4(q, w, e, r);
return 0;
}

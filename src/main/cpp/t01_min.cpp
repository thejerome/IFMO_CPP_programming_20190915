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

int min (int a1, int a2) {
    if (a1>a2){
        return a2;
    }
    else return a1;
}
int min4 (int a1, int a2, int b1, int b2){
    if (min(a1,a2)> min (b1,b2)) {
        return min (b1,b2);
    }
    else return min (a1,a2);
}

int t01_min()
{
    int a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cout<<min4(a,b,c,d);

    return 0;
}

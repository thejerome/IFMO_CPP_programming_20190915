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

int min (int num1, int  num2){
    int min;
    if (num1 > num2){
        min = num2;
    }
    else{
        min = num1;
    }
    return min;
}

int min4 (int num1, int num2, int num3, int num4){
   return min(min(num1, num2), min(num3, num4));
}

int t01_min() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min4(a, b, c, d);
    return 0;
}

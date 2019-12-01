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

long min(long a, long b){
    if (a > b){
        return b;
    }
    return a;
} 

long min4(long a, long b, long c, long d){
    return min(min(a, b), min(c,d));
}

int t01_min() {
    long a = 0, b = 0, c = 0, d = 0;
    cin >> a >> b >> c >> d;
    cout << min4(a, b, c, d) << endl;
    return 0;
}

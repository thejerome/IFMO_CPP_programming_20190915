//По данному целому числу N распечатайте все квадраты натуральных чисел, не превосходящие N, в порядке возрастания.
//
//Формат входных данных
//        Вводится натуральное число.
//
//Формат выходных данных
//        Выведите ответ на задачу.
//
//Sample Input:
//
//50
//Sample Output:
//
//1 4 9 16 25 36 49

#include "t01_quad.h"
#include <iostream>

using namespace std;

int t01_quad() {
    
    int n, k;
    cin >> n >> k;
    k = 1;
    while (k*k <= n){
        cout << k*k << ' ';
        k += 1;
    }
    return 0;
};

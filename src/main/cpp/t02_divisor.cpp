//Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.
//
//Формат входных данных
//        Вводится целое положительное число.
//
//Формат выходных данных
//        Выведите ответ на задачу.
//
//Sample Input:
//
//15
//Sample Output:
//
//3

#include "t02_divisor.h"
#include <iostream>

using namespace std;

int t02_divisor() {
    long int a = 0;
    cin >> a;
    if (a % 2 == 0){
        cout << 2 << endl;
    }
    else
    {
        long int i = 3;
        while (true)
        {
            if (a % i == 0){
                cout << i << endl;
                break;
            }
            i += 2;
        }
        
    }
    return 0;
}
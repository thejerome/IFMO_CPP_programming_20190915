//Даны три целых числа. Определите, сколько среди них совпадающих. Программа должна вывести одно из чисел: 3 (если все совпадают), 2 (если два совпадает) или 0 (если все числа различны).
//
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//3
//Sample Output:
//
//0

#include "t03_equal3.h"
#include <iostream>

using namespace std;

int t03_equal3() {
    int a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    if(a == b && b == c)
    {
        cout << 3 << endl;
    }
    else if (a == b)
    {
        cout << 2 << endl;
    }
    else if (a == c)
    {
        cout << 2 << endl;
    }
    else if (b == c)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    
    return 0;

}
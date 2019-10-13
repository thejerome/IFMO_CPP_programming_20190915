//Дана последовательность натуральных чисел, завершающаяся числом 0.
// Определите, какое наибольшее число подряд идущих элементов этой последовательности равны друг другу.
// Если не нашлось ни одной пары, тройки и т.д. элементов, равных друг другу, то программа должна вывести число 1.
//Формат входных данных
//        Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//7
//7
//9
//1
//0
//Sample Output:
//
//2

#include "t09_row.h"
#include <iostream>

using namespace std;

int t09_row() {
    long int a = 0, current_row = 0, max_row = 0, prev_a = 0;
    while (true)
    {
        cin >> a;
        if (a == 0)
        {
            break;
        }
        if (a == prev_a)
        {
            current_row++;
        }
        else
        {
            if (current_row)
            {
                if (current_row > max_row){
                    max_row = current_row;
                }
                current_row = 0;
            }
            
        }
        prev_a = a;

    }
    if (max_row < current_row)
    {
        max_row = current_row;
    }
    cout << max_row + 1 << endl;
    
    return 0;
}
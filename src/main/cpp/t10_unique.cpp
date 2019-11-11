//Дан массив. Выведите те его элементы, которые встречаются в массиве только один раз. Элементы нужно выводить в том порядке, в котором они встречаются в списке.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//6
//1 2 2 3 3 3
//Sample Output 1:
//
//1
//Sample Input 2:
//
//8
//4 3 5 2 5 1 3 5
//Sample Output 2:
//
//4 2 1

#include "t10_unique.h"
#include <iostream>

using namespace std;

int t10_unique() {
    long n = 0;
    cin >> n;
    const long a = n;
    long znacheniya[a];
    for (int i = 0; i < n; i++)
    {
        long zn = 0;
        cin >> zn;
        znacheniya[i] = zn;
    }
    bool is = 1;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        {
            if (i == j){
                continue;
            }
            if (znacheniya[i] == znacheniya[j]){
                is = 0;
                break;
            }
        }
        if (is){
            cout << znacheniya[i] << ' ';
        }
        is = 1;
    }
    cout << endl;
    return 0;
}

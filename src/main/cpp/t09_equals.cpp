//Дан массив чисел. Посчитайте, сколько в нем пар элементов, равных друг другу. Считается, что любые два элемента, равные друг другу образуют одну пару, которую необходимо посчитать.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//5
//1 2 3 2 3
//Sample Output 1:
//
//2
//Sample Input 2:
//
//5
//1 1 1 1 1
//Sample Output 2:
//
//10

#include "t09_equals.h"
#include <iostream>


using namespace std;

int t09_equals() {
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
    long kol = 0;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++)
        {
            if (i == j){
                continue;
            }
            if (znacheniya[i] == znacheniya[j]){
                kol++;
            }
        }
        
    }
    cout << kol << endl;
    return 0;
}

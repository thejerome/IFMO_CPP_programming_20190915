//Найдите индексы первого вхождения максимального элемента.
//
//Формат входных данных
//        Программа получает на вход размеры массива n и m, 
// затем n строк по m чисел в каждой. n и m не превышают 100.
//
//Формат выходных данных
//        Выведите два числа: номер строки и номер столбца, 
// в которых стоит наибольший элемент в двумерном массиве. 
// Если таких элементов несколько, то выводится тот, у которого меньше номер строки, 
// а если номера строк равны то тот, у которого меньше номер столбца.
//
//Sample Input:
//
//3 4
//0 3 2 4
//2 3 5 5
//5 1 2 3
//Sample Output:
//
//1 2

#include "t01_max.h"
#include <iostream>


using namespace std;

int t01_max() {
    long n = 0, m = 0;
    cin >> n >> m;
    const long stroki = n;
    const long stolb = m;
    long mass[stroki][stolb];
    for (int i = 0; i < stroki; i++)
    {
        for (int j = 0; j < stolb; j++)
        {
                long zn = 0;
                cin >> zn;
                mass[i][j] = zn;
        }
    }
    long max = 0;
    long koordinati = 0;
    for (int i = 0; i < stroki; i++)
    {
        for (int j = 0; j < stolb; j++)
        {
                if (i == 0 && j == 0){
                    max = mass[i][j];
                    koordinati = i*100 + j;
                    continue;
                }
                if (mass[i][j] > max){
                    max = mass[i][j];
                    koordinati = i*100 + j;
                }
        }
    }
    cout << koordinati/100 << ' ' << koordinati%100 << endl;
    return 0;
}

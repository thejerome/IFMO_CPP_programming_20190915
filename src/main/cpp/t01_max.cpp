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
    int n=0;
    int m=0;
    int max_i=0;
    int max_j=0;

    cin>>n>>m;

    double  mas[n][m]= {};

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cin>>mas[i][j];
        }
    }


    if ( n!=0 && m!=0 )
    {
        max_i=0;
        max_j=0;
    }


    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            if (mas[i][j]>mas[max_i][max_j])
            {
                max_i=i;
                max_j=j;
            }
        }
    }

    cout<<max_i<<" "<<max_j;

    return 0;
}

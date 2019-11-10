//Дан двумерный массив и два числа: i и j. Поменяйте в массиве столбцы с номерами i и j
//        Формат входных данных
//Программа получает на вход размеры массива n и m, не превосходящие 100, 
// затем элементы массива, затем числа i и j.
//Формат выходных данных
//        Выведите результат.
//
//Sample Input:
//
//3 4
//11 12 13 14
//21 22 23 24
//31 32 33 34
//0 1
//Sample Output:
//
//12 11 13 14
//22 21 23 24
//32 31 33 34

#include "t04_swap.h"
#include <iostream>


using namespace std;

int t04_swap() {
    int n=0, m=0;
    cin >>n >>m;
    int a[n][m];
    for (int p=0; p<n; p++){
        for (int g=0; g<m; g++){
            cin >>a[p][g];
        }
    }
    int i=0, j=0;
    cin >>i >>j;
    int f=n;
    int b [f];
    for (int p=0; p<f; p++){
        b[p] = a[p][i];
    }
    for (int p=0; p<f; p++){
        a[p][i] = a[p][j];
    }
    for (int p=0; p<f; p++){
        a[p][j] = b[p];
    }
    for (int p=0; p<n; p++){
        for (int g=0; g<m; g++){
            cout <<a[p][g] <<" ";
        }
        cout <<endl;
    }
    return 0;
}

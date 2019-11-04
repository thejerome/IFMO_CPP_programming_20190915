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
    int b,c,j1,j2;
    int a[100][100];
    cin>>b>>c;
    for (int i=0;i<b;i++) {
        for (int j=0;j<c;j++) {
            cin>>a[i][j];
        }
    }
    cin>>j1>>j2;
     for (int i=0;i<b;i++) {
        b=a[i][j1];
        a[i][j1]=a[i][j2];
        a[i][j2]=b;
    }
    for (int i=0;i<b;i++) {
        for (int j=0;j<c;j++) {
            cout<<a[i][j]<<' ';
        }
        cout<<endl;
    }
    
    return 0;
}

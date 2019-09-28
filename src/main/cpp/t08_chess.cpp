//Даны числа n и m. Заполните массив размером n × m в шахматном порядке: 
// клетки одного цвета заполнены нулями, 
// а другого цвета - заполнены числами натурального ряда сверху вниз, слева направо. 
// В левом верхнем углу записано число 1.
//Формат входных данных
//        Вводятся два числа n и m, не превышающие 100.
//
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//3 5
//Sample Output:
//
//   1   0   2   0   3
//   0   4   0   5   0
//   6   0   7   0   8

#include "t08_chess.h"
#include <iostream>
#include <iomanip>

using namespace std;

int t08_chess() {
    int n=0;
    int m=0;
    int k=1;

    cin>>n>>m;

    int  mas[n][m]= {};

    for (int i=0; i<n; i++)
    {
        int c=0;
        if (i%2!=0)
            c=1;
        else
            c=0;
        for (int j=c; j<m; j+=2)
        {
            mas[i][j]=k;
            k++;
        }
    }

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            cout<<setw(4)<<mas[i][j];
        }
        cout<<endl;
    }

    return 0;
}

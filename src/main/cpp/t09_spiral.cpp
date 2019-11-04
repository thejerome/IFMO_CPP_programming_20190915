//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали, выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.
//Формат входных данных
//        Вводятся два числа n и m, не превышающие 100.
//
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//4 5
//Sample Output:
//
//   1   2   3   4   5
//  14  15  16  17   6
//  13  20  19  18   7
//  12  11  10   9   8

#include "t09_spiral.h"
#include <iostream>


using namespace std;

int t09_spiral() {
    int n,m;
    cin>>m>>n;
    int a[101][101];
    int startX = 0, startY = 0;
    int endX = m-1, endY = n-1;
    int num = 1;
    int i;
    while (startX <= endX && startY <= endY)
    {
        for (i=startY; i<=endY && num<=m*n; i++)
        {
            a[startX][i] = num;
            num++;
        }
        startX++;

        for (i=startX; i<=endX && num<=m*n; i++)
        {
            a[i][endY] = num;
            num++;
        }
        endY--;

        for (i=endY; i>=startY && num<=m*n; i--)
        {
            a[endX][i] = num;
            num++;
        }
        endX--;

        for (i=endX; i>=startX && num<=m*n; i--)
        {
            a[i][startY] = num;
            num++;
        }
        startY++;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
    }
    return 0;
}

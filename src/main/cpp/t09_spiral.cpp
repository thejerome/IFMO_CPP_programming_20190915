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
#include <iomanip>


using namespace std;

int t09_spiral() {
    int n=0;
    int m=0;
    int i=0;
    int j=0;
    int way=1;
    int wall=0;

    cin>>n>>m;

    int  mas[n][m]= {};

    for ( int k=1; k<=n*m; k++)
    {
        switch (way)
        {
            case 1:
                if( j < m-wall-1 )
                {
                    mas[i][j]=k;
                    j++;
                    if (j == m-wall-1)
                    {
                        way=2;
                    }
                }
                break;
            case 2:
                if( i < n-wall-1 )
                {
                    mas[i][j]=k;
                    i++;
                    if (i == n-wall-1)
                    {
                        way=3;
                    }
                }
                break;
            case 3:
                if( j > wall )
                {
                    mas[i][j]=k;
                    j--;
                    if (j == wall)
                    {
                        way=4;
                    }
                }
                break;

            case 4:
                if( i > wall+1 )
                {
                    mas[i][j]=k;
                    i--;
                    if (i == wall+1)
                    {
                        way=1;
                        wall++;
                    }
                }
                break;
        }
        if (k==m*n)
            mas[i][j]=k;

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

//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”,
// как показано в примере.
//
//Формат входных данных
//        Вводятся два числа n и m, каждое из которых не превышает 30.
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//3 5
//Sample Output:
//
//   1   2   3   4   5
//  10   9   8   7   6
//  11  12  13  14  15

#include "t07_snake.h"
#include <iostream>
#include <iomanip>


using namespace std;

int t07_snake() {
    int n=0, m=0;
    cin >>n >>m;
    int a[n][m];
    int num = 1;
    bool ch = (n % 2 == 0);
    if (ch){
        for (int i = 0; i<n+1; i=i+2){
            for (int j = 0; j < m; j++){
                a[i][j] = num;
                num++;
            }
            for (int k = m-1; k > -1; k--){
                a[i+1][k] = num;
                num++;
            }
        }
    }
    if (!ch){
        for (int i = 0; i<n+1; i=i+2){
            for (int j = 0; j < m; j++){
                a[i][j] = num;
                num++;
            }
            for (int k = m-1; k > -1; k--){
                a[i+1][k] = num;
                num++;
            }
        }
        for (int j = 0; j < m; j++){
            a[n][j] = num;
            num++;
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            cout <<setw(4) <<a[i][j] <<" ";
        }
        cout <<endl;
    }
    return 0;
}

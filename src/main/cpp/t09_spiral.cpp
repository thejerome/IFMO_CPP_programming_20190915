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
    int n,m;
    cin >> n >> m;
    int a[n][m];
    int l = 0;
    int i = 0;
    int j = 0;
    int k = 1;
    while(k <= m*n){
        while(j < m-1-l){
            a[i][j] = k;
            k++;
            j++;
        }
        while(i < n-1-l){
            a[i][j] = k;
            k++;
            i++;
        }
        while(j > 0+l){
            a[i][j] = k;
            k++;
            j--;
        }
        while(i > 1+l){
            a[i][j] = k;
            k++;
            i--;
        }
        l++;
    }
    int p;
    int y = n*m;
    while(y > 0){
        y /= 10;
        p++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << setw(5) << a[i][j];
        }
        cout << "\n";
    }
    
    return 0;
}

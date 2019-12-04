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
    int x;
    int i,j;
    int counter;
    x = 0;
    i = 0;
    j= 0;
    counter = 0;
    cin >> n >> m;
    int a[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            a[i][j] = 0;
        };
    };

    while (x < n*m){
        x++;
        a[i][j] = x;
        if ((j + 1 < m - counter) && (i - counter == 0)){
            j++;
        }
        else {
            if ((i + 1 < n - counter) && (j + counter == m - 1)) {
                i++;
            } else {
                if ((j - 1 >= counter) && (i + counter == n - 1)) {
                    j--;
                } else {
                    i--;
                    if (i == counter + 1) {
                        counter++;
                    };
                };
            };
        };
    };

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            cout.width(4);
            cout << a[i][j];
        };
        cout << endl;
    };
    return 0;
}

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
    int n=0,m=0;
    cin >> n >> m;
    int mas[n][m];
    int k = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            mas[i][j] = 0;
        }
    }
    mas[0][0]=1;
    int i = 0;
    int j = 0;
    while ((mas[i][j + 1] == 0 and j < m - 1) or (mas[i + 1][j] == 0 and i < n - 1) or (mas[i][j - 1] == 0 and j > 0) or (mas[i - 1][j] == 0 and i > 0)) {
        while (mas[i][j + 1] == 0 and j < (m - 1)) {
            mas[i][j+1] = k++;
            j++;
        }
        while (mas[i + 1][j] == 0 and i < (n - 1)) {
            mas[i + 1][j] = k++;
            i++;
        }
        while (mas[i][j - 1] == 0 and j > 0) {
            mas[i][j - 1] = k++;
            j--;
        }
        while (mas[i - 1][j] == 0 and i > 0) {
            mas[i - 1][j] = k++;
            i--;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mas[i][j] % 10 == mas[i][j]) cout << "   ";
            else if (mas[i][j] % 100 == mas[i][j]) cout << "  ";
            else if (mas[i][j] % 1000 == mas[i][j]) cout << " ";
            cout << mas[i][j];
        }
        cout << endl;
    }
    return 0;
}

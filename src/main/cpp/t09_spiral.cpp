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
    short n = 0, m = 0;
    cin >> n >> m;
    const short visota = n + 1;
    const short shirina = m + 1;
    long mass[visota][shirina];
    int k = 2;
    int i = 0;
    int j = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            mass[i][j] = -2;
        }
        
    }
    mass[0][0] = 1;
    while (k <= n*m){
        if(mass[i][j] == -2 && mass[i][j - 1] == k -1){
            mass[i][j] = k++;
            j++;
        }
        else if(mass[i][j] != -2 && mass[i][j - 1] == k -1){
            j--;
            i++;
        }
        else if(mass[i][j] == -2 && mass[i - 1][j] == k -1){
            mass[i][j] = k++;
            i++;
        }
        else if(mass[i][j] != -2 && mass[i - 1][j] == k -1){
            i--;
            j--;
        }
        else if(mass[i][j] == -2 && mass[i][j + 1] == k -1){
            mass[i][j] = k++;
            j--;
        }
        else if(mass[i][j] != -2 && mass[i][j + 1] == k -1){
            j++;
            i--;
        }
        else if(mass[i][j] == -2 && mass[i + 1][j] == k -1){
            mass[i][j] = k++;
            i--;
        }
        else if(mass[i][j] != -2 && mass[i + 1][j] == k -1){
            i++;
            j++;
        }
    }
    for (int i = 0; i < visota - 1; i++)
    {
        for (int j = 0; j < shirina - 1; j++)
        {
            cout << setw(4) << setfill(' ') << mass[i][j];
        }
        cout << endl;
    }
    return 0;
}

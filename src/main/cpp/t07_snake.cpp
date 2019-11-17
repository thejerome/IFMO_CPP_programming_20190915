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
    short n = 0, m = 0;
    cin >> n >> m;
    const short visota = n;
    const short shirina = m;
    long mass[visota][shirina];
    n = 0;
    for (int i = 0; i < visota; i++)
    {
        if (i%2 == 0){
            for (int j = 0; j < shirina; j++)
            {
                mass[i][j] = ++n;
            }
        }
        else
        {
            for (int j = shirina - 1; j >= 0; j--)
            {
                mass[i][j] = ++n;
            }
            
        }
        
    }
    for (int i = 0; i < visota; i++)
    {
        for (int j = 0; j < shirina; j++)
        {
            cout << setw(4) << setfill(' ') << mass[i][j];
        }
        cout << endl;
    }
    return 0;
}

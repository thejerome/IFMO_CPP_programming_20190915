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
                if(j%2 == 0){
                    mass[i][j] = ++n;
                }
                else{
                    mass[i][j] = 0;
                }
            }
        }
        else
        {
            for (int j = 0; j < shirina; j++)
            {
                if(j%2 == 1){
                    mass[i][j] = ++n;
                }
                else{
                    mass[i][j] = 0;
                }
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

//Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.
//Формат входных данных
//
//        Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.
//Формат выходных данных
//        Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.
//Sample Input 1:
//
//1 7
//2 4
//3 2
//4 8
//5 6
//6 1
//7 3
//8 5
//Sample Output 1:
//
//NO
//        Sample Input 2:
//
//1 8
//2 7
//3 6
//4 5
//5 4
//6 3
//7 2
//8 1
//Sample Output 2:
//
//YES

#include "t11_queen.h"
#include <iostream>
#include <cmath>


using namespace std;

int t11_queen() {
    int arrx[8];
    int arry[8];
    for (int i = 0; i < 8; i++)
    {
        cin >> arrx[i];
        cin >> arry[i];
    }
    int i = 0;
    int k = 1;
    while ((i < 8) && (k != 0))
    {
        int j = 0;
        while ((j < 8) && (k != 0))
        {
            if ((i != j) && ((arrx[i] == arrx[j]) || (arry[i] == arry[j]) || (abs(arry[i] - arry[j]) == abs(arrx[i] - arrx[j]))))
            {
                k = 0;
            }
            //cout << i << ' ' << j << endl;
            //if ((i == 3) and (j == 6))
            //   cout << arrx[i] << ' ' << arrx[j] << ' ' << arry[i] << endl;
            j++;

        }
        i++;
    }
    if (k == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

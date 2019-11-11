//Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.
//
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//5
//0 1 2 3 4
//Sample Output 1:
//
//1
//Sample Input 2:
//
//5
//2 4 6 8 10
//Sample Output 2:
//
//0

#include "t05_minodd.h"
#include <iostream>
#include <cmath>


using namespace std;

int t05_minodd() {
    long n = 0;
    cin >> n;
    const long kol = n;
    long mas[kol];
    for (int i = 0; i < kol; i++)
    {
        int znachenie = 0;
        cin >> znachenie;
        mas[i] = znachenie;
    }
    long min = 0;
    for (int i = 0; i < kol; i++)
    {
        if (min == 0 && mas[i] % 2 == 1)
        {
            min = mas[i];
        }
        if (mas[i] < min && (mas[i] % 2 == 1 || mas[i] % 2 == -1))
        {
            min = mas[i];
        }
        
    }
    cout << min << endl;
    return 0;
}

//Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента .
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//5
//1 5 2 4 3
//Sample Output:
//
//5 4

#include "t03_bigger.h"
#include <iostream>


using namespace std;

int t03_bigger() {

int P;

cin >> P;
int C[P];

for(int L = 0;L<P;L++)
{
    cin >> C[L];
    if (C[L] > (C[L - 1]))
    {
         cout << C[L] << " ";

    }


}
}

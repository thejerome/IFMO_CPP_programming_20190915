//Дан массив целых чисел. Если в нем есть два соседних элемента одного знака, выведите эти числа.
// Если соседних элементов одного знака нет - не выводите ничего.
// Если таких пар соседей несколько - выведите первую пару.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива. Все числа отличны от нуля.
//Формат выходных данных
//        Выведите ответ на задачу. Элементы выводятся в порядке неубывания их индексов.
//Sample Input:
//
//5
//-1 2 3 -1 -2
//Sample Output:
//
//2 3

#include "t04_neighbors.h"
#include <iostream>


using namespace std;

int t04_neighbors() {
int P;
cin >> P;
int C[P];
for(int L = 0;L<P;L++)
{
    cin >> C[L];
    if ((C[L] > 0 && C[L-1] > 0) || (C[L] < 0 && C[L-1] < 0 ))
    {
        cout << C[L-1] << " " << C[L];
        break;
 }
}
}

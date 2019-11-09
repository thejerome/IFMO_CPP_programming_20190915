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

    int N;
    cin >> N;

    int A[N];

    for (int i = 0; i < N; i++)
        cin >> A [i];

    for (int i = 0; i < N-1; i++)
        if ((A[i] < 0) && (A[i+1] < 0) || (A[i] >= 0) && (A[i+1] >= 0)) {
           cout << A [i] << " " << A [i+1];
           break;
        }

return 0;
};

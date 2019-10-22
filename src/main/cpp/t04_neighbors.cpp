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
    int size=1;
    cin >> size;
    int a[size]{};
    for (int i=0; i<size; i++) {
        cin >> a[i];
    }
    for (int i=1; i<size; i++) {
        if ((a[i-1]<0 and a[i]<0) or (a[i-1]>0 and a[i]>0)) {
            cout << a[i-1] << " " << a[i];
            break;
        }
    }
}

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
#include <vector>

using namespace std;

int t04_neighbors() {
   int n, i;
    cin >> n;
    vector <int> a(n);
    cin >> a[0];
    for ( i = 1; i < n; i++) {
        cin >> a[i];
      if ( a[i] >= 0 && a[i-1] >= 0 || a[i] < 0 && a[i-1] < 0) {
       cout << a[i-1] << " " << a[i];
          break;
      }
    }
  return 0;
}

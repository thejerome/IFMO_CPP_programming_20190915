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
#include <vector>

using namespace std;

int t05_minodd() {
  int n, i, min;
    bool b = 1;
    cin >> n;
    vector <int> a(n);
    for (i = 0; i < n; i ++) {
        cin >> a[i];
      if ( a[i] % 2 != 0 && b) {
        min = a[i]; 
          b = 0;
      }
    }
    for (i = 0; i < n; i ++) {
     if (a[i] < min && a[i] % 2 != 0) {
      min = a[i];   
     }
    }
    if ( b == 0 ) {
    cout << min;
    }
    else {
     cout << 0;   
    }
  return 0;
}

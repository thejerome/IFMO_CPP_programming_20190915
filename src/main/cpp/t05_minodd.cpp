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
#include <vector>
#include <limits.h>

using namespace std;

int t05_minodd() {
 int a[100], n;
cin >> n;
for (int i=0; i<n; i++){
cin >> a[i];
}
int min=INT_MAX;
for (int i=0; i<n; i++){
if (a[i] % 2 != 0){
min = (a[i]<min)?a[i]:min;
}
}
// (min == INT_MAX)?0:min
if (min == INT_MAX) cout << 0;
else cout << min;
    return 0;
}

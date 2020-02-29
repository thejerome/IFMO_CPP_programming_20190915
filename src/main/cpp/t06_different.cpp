//Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//6
//1 2 2 3 3 3
//Sample Output:
//
//3

#include "t06_different.h"
#include <iostream>
#include <vector>

using namespace std;

int t06_different() {
int a[100], n;
cin >> n;
for (int i=0; i<n; i++){
cin >> a[i];
}
int elem, j;
elem = a[0];
j=1;
for (int i=0; i<n; i++){
if (a[i] != elem) {
j++;
elem = a[i];
}
}
cout << j;
    return 0;
}

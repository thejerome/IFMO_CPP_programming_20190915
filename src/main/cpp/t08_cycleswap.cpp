//Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ..., последний элемент переходит на место A[0]).
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//5
//1 2 3 4 5
//Sample Output:
//
//5 1 2 3 4

#include "t08_cycleswap.h"
#include <iostream>


using namespace std;

int t08_cycleswap() {
int count;
cin >> count;
int a[count];
int b[count+1];
for (int i=0;i <= (count-1);i++) {
    cin >> a[i];
    b[i+1]=a[i];
};
for (int i=1;i <= (count-1);i++) {
     a[i]=b[i];}
a[0]=b[count];
for (int i=0;i <= (count-1);i++) {
    cout << a[i]<< " ";
};}

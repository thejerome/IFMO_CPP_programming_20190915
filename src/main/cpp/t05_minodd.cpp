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
int count,i,m;
bool flag;
i=0;
m=0;
flag=false;
cin >> count;
int a[count];
for (i;i <= (count-1);i++) {
    cin >> a[i];
};
for (int i=0;i <= (count-1);i++) {
     if ((a[i]%2==1) or(a[i]%2==-1))  {
        m=a[i];
        flag=true;
     };};
for (int i=0;i <= (count-1);i++) {
     if (((a[i]%2==1)or(a[i]%2==-1)) and (a[i]<m)) {
        flag=true;
        m=a[i];
         cout<<m;
     };
     };
if (flag) {
    cout << m;}
    else cout << 0;
}
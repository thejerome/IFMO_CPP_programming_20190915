//Дан массив. Выведите те его элементы, которые встречаются в массиве только один раз. Элементы нужно выводить в том порядке, в котором они встречаются в списке.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//6
//1 2 2 3 3 3
//Sample Output 1:
//
//1
//Sample Input 2:
//
//8
//4 3 5 2 5 1 3 5
//Sample Output 2:
//
//4 2 1

#include "t10_unique.h"
#include <iostream>

using namespace std;

int t10_unique() {
int count,i,c,j;
bool flag;
i=0;
cin >> count;
int a[count];
for (i;i <= (count-1);i++) {
    cin >> a[i];
};
c=0;
for (int i=0;i <= (count-1);i++) {
    flag=true;
    for (int j=0;j <= (count-1);j++) {
        if ((a[i]==a[j]) and (i!=j))
            flag=false;};
    if (flag)
        cout<<a[i]<< " ";};
}

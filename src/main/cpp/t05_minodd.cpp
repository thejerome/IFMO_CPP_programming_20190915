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

    int n,i,min,t;
    cin >> n;
    int a[1000];
    cin >> a[0];
    min = 1;
    t = 2;
    if (a[0]%2!=0){
        t = 1;
        min = a[0];
    }
    for (i = 1; i < n; i++) {
        cin >> a[i];
        if (a[i]%2 != 0 && a[i] <= min){
            min = a[i];
            t = 1;
        }
    }
    if (t == 2) {
        cout << 0;
    }
    else {
        cout << min;
    }
    return(0);
}

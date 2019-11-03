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
    int N = 0;
    cin >>N;
    int a[N];
    for (int i=0; i < N; i++) {
        cin >> a[i];
    }
    bool f=false;
    int h1;
    for (int i=0; (i < N) and !f; i++){
        if (a[i] != 0) {
            h1 = a[i];
            f = true;
        }
        if ((i==N) and (a[i] == 0)) {
            h1 = 0;
        }
    }
    int min = h1;
    for (int i=0; (i < N); i++){
        if ((a[i] < min) and (a[i]%2 != 0)) {
            min = a[i];
        }
    }
    if (min%2 == 0) {
        min =0;
    }
    cout <<min;
    return 0;
    /*int N = 0;
    cin >>N;
    int a[N];
    for (int i=0; i < N; i++) {
        cin >> a[i];
    }
    int f=1;
    int h1;
    for (int i=0; (i < N) and (f != 1); i++){
        if (a[i] != 0) {
            h1 = a[i];
            f = 0;
        }
        if ((i==N) and (a[i] == 0)) {
            h1 = 0;
        }
        //cout <<"i =" <<i <<"; a[i] = " <<a[i] <<"; min = " <<h1 <<endl;
    }
    int min = h1;
    for (int i=0; (i < N); i++){
        if ((a[i] < min) and (a[i]%2 != 0)) {
            min = a[i];
        }
    }
    if (min%2 == 0) {
        min =0;
    }
    cout <<min;
    return 0;*/
}

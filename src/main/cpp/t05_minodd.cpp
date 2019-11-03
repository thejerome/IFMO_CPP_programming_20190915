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
    int N=0, b=0, d=INT32_MAX;
    cin >> N;
    int arr[N];


    for (int i = 0;i<N; i++) {
        cin >> arr[i];

        if (arr[i] % 2 != 0 && arr[i] < d) {
            b = arr[i];
            d = arr[i];
        }
    }
            cout << b << " ";

}

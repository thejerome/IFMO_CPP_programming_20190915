//Дан массив чисел. Посчитайте, сколько в нем пар элементов, равных друг другу. Считается, что любые два элемента, равные друг другу образуют одну пару, которую необходимо посчитать.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//5
//1 2 3 2 3
//Sample Output 1:
//
//2
//Sample Input 2:
//
//5
//1 1 1 1 1
//Sample Output 2:
//
//10

#include "t09_equals.h"
#include <iostream>


using namespace std;

int t09_equals() {
    int N, K, A;
    K = 0;
    cin >> N;
    int *mas = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> mas[i];
    }
    for (int i = 0; i < N; i++) {
        for (int A = i + 1; A < N; A++) {
            if (mas[i] == mas[A])
                K++;
        }
    }
    cout << K;
    delete [] mas;
    return 0;
}

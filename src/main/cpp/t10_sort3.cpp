//Дано три числа. Упорядочите их в порядке неубывания.
//
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//1
//Sample Output:
//
//1 1 2

#include "t10_sort3.h"
#include <iostream>

using namespace std;

int t10_sort3() {
  int N, M, K, Q;
    cin >> N >> M >> K;
    if (N > M) {
        Q = N;
        N = M;
        M = Q;
    }
    if (M > K) {
        Q = K;
        K = M;
        M = Q;
    }
    if (N > M) {
        Q = N;
        N = M;
        M = Q;
    }
    cout << N << " " << M << " " << K << endl;
    return 0;
}; 

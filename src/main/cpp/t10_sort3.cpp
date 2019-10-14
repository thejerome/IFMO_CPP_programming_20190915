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
  int N, M, K;
    cin >> N >> M >> K;
    if (N <= M && N <= K && K <= M) cout << N << K << M;
    if (K <= N && K <= M && N >= M) cout << K << M << N;
    if (M <= N && M <= K && K >= N) cout << M << N << K;
    return 0;
};

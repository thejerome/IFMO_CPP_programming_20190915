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
    int N,M,K;
    cin >> N >> M >> K;
    if ( N >= M){
        if (K>= N)
            cout << M << ' ' << N << ' ' << K;
        else if (K<= M)
            cout << K << ' ' << M << ' ' << N;
        else if (K>M && K<N)
            cout << M << ' ' << K << ' ' << N;
    }

    if ( N < M){
        if (K>= M)
            cout << N << ' ' << M << ' ' << K;
        else if (K<= N)
            cout << K << ' ' << N << ' ' << M;
        else if (K>N && K<M)
            cout << N << ' ' << K << ' ' << M;
    }


};
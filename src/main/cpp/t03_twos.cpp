//Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.
//
//Формат входных данных
//        Вводится натуральное число.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//1
//Sample Output 1:
//
//YES
//        Sample Input 2:
//
//2
//Sample Output 2:
//
//YES

#include "t03_twos.h"
#include <iostream>

using namespace std;

int t03_twos() {
    int A,N;
    cin >> N;
    A = 1;
    while (A < N) {
        A = A*2;
    };
    if (A == N) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    };
    return 0;
};
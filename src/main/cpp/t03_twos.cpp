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
    int N = 0;
    bool b = false;
    cin >>N;
    while (N/2 >= 1) {
        if (N%2 == 0) {
            b = true;
            N = N/2;
        } else {
            b = false;
            N = 1;
        }

    }
    if (b) {
        cout <<"YES";
    } else {cout <<"NO";}
    return 0;
};
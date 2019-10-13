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
#include <cmath>

using namespace std;

int t03_twos() {
    long int a = 0, i = 0;
    cin >> a;
    if ((i % 2) == 0){
        while (true)
        {
            if (a == pow(2, i)){
                cout << "YES" << endl;
                break;
            }
            else if (a < pow(2, i))
            {
                cout << "NO" << endl;
                break;
            }
            ++i;
        }
    }
    else
    {
        cout << "NO" << endl;   
    }
    return 0;
}
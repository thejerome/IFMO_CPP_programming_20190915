//Сумма цифр трехзначного числа
//
//Дано целое трехзначное число. Найдите сумму его цифр.
//
//Формат входных данных
//
//        На вход дается число от 100 до 999.
//
//Формат выходных данных
//
//        Выведите одно целое число - ответ на задачу.
//
//Sample Input:
//
//476
//Sample Output:
//
//17

#include "t06_3digits.h"
#include <iostream>

using namespace std;

int t06_3digits() {
    int a = 0;
    int b = 0;
    cin >> a;
    b = a%10 + (a/10)%10 + (a/100)%10;
    cout << b << endl;
    return 0;
}
//Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада через год. Вклад составляет X рублей Y копеек. Определите размер вклада через K лет.
//Формат входных данных
//        Программа получает на вход целые числа P, X, Y, K .
//Формат выходных данных
//        Программа должна вывести два числа: величину вклада через K лет в рублях и копейках. Дробное число копеек по истечение года отбрасывается. Перерасчет суммы вклада (с отбрасыванием дробных частей копеек) происходит ежегодно.
//Примечание
//        В этой задаче часто возникают проблемы с точностью. Если они возникли у вас - попробуйте решить задачу в целых числах.
//Sample Input:
//
//12
//179
//0
//5
//Sample Output:
//
//315 43

#include "t04_deposit.h"
#include <iostream>
#include <cmath>

using namespace std;

int t04_deposit() {
    int P, X, Y, K, cur = 0;
    cin >> P >> X >> Y >> K;

    double k;
    k = 1 + (double) P / 100;

    while (cur++ < K) {
        int tmx = k * X;
        int deb = P * X % 100
        int tmy = Y + P * Y / 100;
        X = tmx + (tmy / 100);
        Y = deb + tmy % 100;
        X += Y / 100;
        Y %= 100;
    }

    cout << X <<  ' ' << Y;

    return 0;
};
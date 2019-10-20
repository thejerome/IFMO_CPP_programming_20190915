//Электронные часы
//
//Электронные часы показывают время в формате h:mm:ss (от 0:00:00 до 23:59:59),
// то есть сначала записывается количество часов,
// потом обязательно двузначное количество минут,
// затем обязательно двузначное количество секунд.
// Количество минут и секунд при необходимости дополняются до двузначного числа нулями.
//
//С начала суток прошло N секунд. Выведите, что покажут часы.
//
//Формат входных данных
//
//        На вход дается натурально число N, не превосходящее 107 (10000000).
//
//Формат выходных данных
//
//        Выведите ответ на задачу.
//
//Sample Input 1:
//
//3602
//Sample Output 1:
//
//1:00:02
//Sample Input 2:
//
//129700
//Sample Output 2:
//
//12:01:40

#include "t08_watch.h"
#include <iostream>

using namespace std;

int t08_watch() {
    int n, h = 0, m, s;
    std::cin >> n;
    s = n % 60;
    h = n / 3600;
    n -= h * 3600;
    h %= 24;
    m = n / 60 % 60;
    std::cout << h << ':';
    std::cout << (m < 10 ? "0" : "") << m << ':';
    std::cout << (s < 10 ? "0" : "") << s << std::endl;
    return 0;
};
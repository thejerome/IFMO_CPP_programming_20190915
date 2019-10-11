//Шахматный слон ходит по диагонали. Даны две различные клетки шахматной доски, определите, может ли слон попасть с первой клетки на вторую одним ходом.
//
//Формат входных данных
//        Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.
//Формат выходных данных
//        Программа должна вывести YES, если из первой клетки ходом слона можно попасть во вторую или NO в противном случае.
//Sample Input:
//
//4
//4
//5
//5
//Sample Output:
//
//YES

#include "t06_chess_bishop.h"
#include <iostream>

using namespace std;

int t06_chess_bishop() {
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << ((x1 - y1 == x2 - y2) || (x1 - y1 == y2 - x2) ? "YES" : "NO");

};
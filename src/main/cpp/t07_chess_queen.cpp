//Шахматный ферзь ходит по диагонали, горизонтали или вертикали. Даны две различные клетки шахматной доски, определите, может ли ферзь попасть с первой клетки на вторую одним ходом.
//
//Формат входных данных
//        Программа получает на вход четыре числа от 1 до 8 каждое, задающие номер столбца и номер строки сначала для первой клетки, потом для второй клетки.
//Формат выходных данных
//        Программа должна вывести YES, если из первой клетки ходом ферзя можно попасть во вторую или NO в противном случае.
//Sample Input 1:
//
//1
//1
//2
//2
//Sample Output 1:
//
//YES
//        Sample Input 2:
//
//1
//1
//2
//3
//Sample Output 2:
//
//NO

#include "t07_chess_queen.h"
#include <iostream>

using namespace std;

int t07_chess_queen() {
	int start1, start2, fin1, fin2;
	int r1, r2;
	bool is = 0;

	cin >> start1 >> start2 >> fin1 >> fin2;

	r1 = fin1 - start1;
	r2 = fin2 - start2;

	if(r1 * r1 == r2 * r2)
		is = 1;

	if(start1 == fin1 || start2 == fin2)
		is = 1;

    if(is)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

	return 0;
};
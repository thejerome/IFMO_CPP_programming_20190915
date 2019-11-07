//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали, выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.
//Формат входных данных
//        Вводятся два числа n и m, не превышающие 100.
//
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//dw
//Sample Input:
//
//4 5
//Sample Output://
//
//   1   2   3   4   5
//  14  15  16  17   6
//  13  20  19  18   7
//  12  11  10   9   8

#include "t09_spiral.h"
#include <iostream>


using namespace std;

int t09_spiral() {
	int n, m, k,i, j, t;
	int mas[100][100];
	k = 1;
	cin >> n;
	cin >> m;
	for (t = 0; t < m + n - 1; t++)
		for (i = 0; i < n; i++)
			for (j = 0; j < m; j++)
				if (i + j == t) {
					mas[i][j] = k;
					k++;
				}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mas[i][j] % 10 == mas[i][j]) {
				cout << " ";
			}
			else if (mas[i][j] % 100 == mas[i][j]) {
				cout << " ";
			}
			else if (mas[i][j] % 1000 == mas[i][j]) {
				cout << " ";
			}
			cout << mas[i][j];
		}
	}
    return 0;
}

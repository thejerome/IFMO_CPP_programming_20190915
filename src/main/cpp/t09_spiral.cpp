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
	int n, m, k , i, j;
	cin >> n;
	cin >> m;
	int mas[100][100];
	k = 1;


	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			mas[i][j] = 0;
		}
	}
	i = 0; j = 0;
	while (k <= m * n) {
		mas[i][j] = k;
		if (mas[i][j + 1] == 0 and j + 1 < m)  j++;
		else if (mas[i + 1][j] == 0 and i + 1 < n)  i++;
		else if (mas[i][j - 1] == 0 and j - 1 >= 0)  j--;
		else i--;
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

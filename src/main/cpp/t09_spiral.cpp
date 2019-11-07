//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали, выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.
//Формат входных данных
//        Вводятся два числа n и m, не превышающие 100.
//
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//4 5
//Sample Output:
//
//   1   2   3   4   5
//  14  15  16  17   6
//  13  20  19  18   7
//  12  11  10   9   8

#include "t09_spiral.h"
#include <iostream>


using namespace std;

int t09_spiral() {
	int n = 0, m = 0;
	cin >> n >> m;
	int** a = new int* [n];
	for (int i = 0; i < n; i++) {
		a[i] = new int[m];
		for (int j = 0; j < m; j++)
			a[i][j] = 0;
	}

	for (int i = 0, j = 0, k = 1; k <= n * m;) {
		if (k <= n * m) {
			while (j < m - 1 && !a[i][j + 1])
				a[i][j++] = k++;
			a[i++][j] = k++;
		}

		if (k <= n * m) {
			while (i < n - 1 && !a[i + 1][j])
				a[i++][j] = k++;
			a[i][j--] = k++;
		}

		if (k <= n * m) {
			while (j > 0 && !a[i][j - 1])
				a[i][j--] = k++;
			a[i--][j] = k++;
		}

		if (k <= n * m) {
			while (i > 0 && !a[i - 1][j])
				a[i--][j] = k++;
			a[i][j++] = k++;
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
			cout << a[i][j] << ' ';
		cout << endl;
	}

	for (int i = 0; i < n; i++)
		delete[] a[i];
	delete[] a;

	return 0;
}

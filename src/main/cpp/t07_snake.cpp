//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”,
// как показано в примере.
//
//Формат входных данных
//        Вводятся два числа n и m, каждое из которых не превышает 30.
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//3 5
//Sample Output:
//
//   1   2   3   4   5
//  10   9   8   7   6
//  11  12  13  14  15

#include "t07_snake.h"
#include <iostream>


using namespace std;

int t07_snake() {
	int n, m, d = 0;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			d++;
			if (i % 2 == 0) a[i][j] = d;
			else a[i][m - j - 1] = d;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] % 10 == a[i][j]) cout << "   ";
			else if (a[i][j] % 100 == a[i][j]) cout << "  ";
			else if (a[i][j] % 1000 == a[i][j]) cout << " ";
			cout << a[i][j];
		}
		cout << endl;
	}
    return 0;
}

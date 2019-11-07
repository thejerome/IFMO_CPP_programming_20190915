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
	int n, m, a;
	cin >> n
	cin>> m;
	a = 0;
	int mas[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a++;
			if (i % 2 == 0) mas[i][j] = a;
			else mas[i][m - j - 1] = a;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (mas[i][j] % 10 == mas[i][j]) {
				cout << "   ";
			}
			else if (mas[i][j] % 100 == mas[i][j]) {
				cout << "  ";
			}
			else if (mas[i][j] % 1000 == mas[i][j]) {
				cout << " ";
			}
			cout << mas[i][j];
		}
	}
    return 0;
}

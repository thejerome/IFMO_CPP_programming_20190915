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
#include <iomanip> 


using namespace std;

int t09_spiral() {
	int n = 0, m = 0;
	cin >> n >> m;
	int mas[100][100] = { 0 };
	bool right = false, down = false, left = false, up = false;
	int x = 0, y = 0, c = 0;
	while (right == false || down == false || left == false || up == false) {
		while (right == false) {
			if (y < m && mas[x][y] == 0) { c++; mas[x][y] = c; y++; }
			else { right = true; y--; x++; }
		}
		if (mas[x][y] == 0) { down = false; }
		while (down == false) {
			if (x < n && mas[x][y] == 0) { c++; mas[x][y] = c; x++; }
			else { down = true; x--; y--; }
		}
		if (mas[x][y] == 0) { left = false; }
		while (left == false) {
			if (y >= 0 && mas[x][y] == 0) { c++; mas[x][y] = c; y--; }
			else { left = true; y++; x--; }
		}
		if (mas[x][y] == 0) { up = false; }
		while (up == false) {
			if (x >= 0 && mas[x][y] == 0) { c++; mas[x][y] = c; x--; }
			else { up = true; x++; y++; }
		}

		if (mas[x][y] == 0) { right = false; }

	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << mas[i][j] << " ";
		}
	}
	return 0;
}
			
	
			









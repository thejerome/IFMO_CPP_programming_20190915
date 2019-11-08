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
	int n, m;
	cin >> n >> m;
	int mas[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			mas[i][j] = 0;
		} 
	}
	bool right = false, down = false, left = false, up = false;
	int count = 1, i = 0, j = 0;

	while (right == false || left == false || down == false || up == false) {

		while (right == false) {
			if (right == false && j < m) {
				mas[i][j] = count;
				j++; count++;
			}
			else { right = true; j--; i++; }
		}
		if (mas[i][j] == 0) { right = false; }


		while (down = false) {
			if (down == false && i < n) {
				mas[i][j] = count;
				count++; i++;
			}
			else { down = true; i--; j--; }
		}
		if (mas[i][j] == 0) { down = false; }



		while (left == false) {
			if (left == false && j >= 0) {
				mas[i][j] = count;
				count++; j--;
			}
			else { left = true; j++; i--; }
		}
		if (mas[i][j] == 0) { left = false; }



		while (up == false) {
			if (up == false && i >= 0) {
				mas[i][j] = count;
				count++; i++;
			}
			else { up = true; i++; j++; }
		}
		if (mas[i][j] == 0) { up = false; }
	}



	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << mas[i][j] << " ";
		}
	}

	return 0;
}
	

			
	
			









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
	int c = 0;
	int x = 0, y = 0;
	bool REnd = false, DEnd = false, LEnd = false, UEnd = false;
	cin >> n >> m;
	int a[100][100] = { 0 };
	while (REnd == false || DEnd == false || LEnd == false || UEnd == false)
	{
		//Go right
		while (REnd == false)
		{
			if (a[y][x] == 0 && x < m) { c++; a[y][x] = c; x++; }
			else { REnd = true; x--; y++; }
		}
		if (a[y][x] == 0) { DEnd = false; }
		//Go down
		while (DEnd == false)
		{
			if (a[y][x] == 0 && y < n) { c++; a[y][x] = c; y++; }
			else { DEnd = true; y--; x--; }
		}
		if (a[y][x] == 0) { LEnd = false; }
		//Go left
		while (LEnd == false)
		{
			if (a[y][x] == 0 && x >= 0) { c++; a[y][x] = c; x--; }
			else { LEnd = true; x++; y--; }
		}
		if (a[y][x] == 0) { UEnd = false; }
		//Go up
		while (UEnd == false)
		{
			if (a[y][x] == 0 && y >= 0) { c++; a[y][x] = c; y--; }
			else { UEnd = true; y++; x++; }
		}
		if (a[y][x] == 0) { REnd = false; }
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) { cout << setw(4) << a[i][j] << " "; }
	}
}

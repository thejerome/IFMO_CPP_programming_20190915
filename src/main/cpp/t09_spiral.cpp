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
    int a[100][100], n, m, s = 1, x;
	cin >> n >> m;
	if (n >= m)x = m;
	else x = n;
	for (int i = 0; i < (x % 2 ? x / 2 + 1: x / 2) ; i++)
	{
		for (int j = i; j < m - i; j++)
		{
			a[i][j] = s;
			s++;
		}
		for (int j = i + 1; j < n - i; j++)
		{
			a[j][m - i - 1] = s;
			s++;
		}
		for (int j = m - i - 2;  !((x % 2 == 1) && (i == x / 2)) && j > i; j--)
		{
			a[n - i - 1][j] = s;
			s++;
		}
		for (int j = n - i - 1; !((x % 2 == 1) && (i == x / 2)) && j > i; j--)
		{
			a[j][i] = s;
			s++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			if (a[i][j] < 10)cout << "   " << a[i][j];
			else if (a[i][j] < 100)cout << "  " << a[i][j];
			else if (a[i][j] < 1000)cout << " " << a[i][j];
			else cout << a[i][j];
		cout << endl;
	}
	return 0;
}

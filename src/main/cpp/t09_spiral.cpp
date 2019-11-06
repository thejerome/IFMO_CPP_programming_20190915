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
	int n, m, k = 1, x, y;
	cin >> n >> m;
	int a[n][m];
	if (n >= m)
		x = m;
	else
		x = n;
	if (x % 2 == 1)
		y = x / 2 + 1;
	else
		y = x / 2;
	for (int i = 0 ; i < y ; i++)
	{
		for (int j = i ; j < m - i ; j++)
		{
			a[i][j] = k;
			k++;
		}
		for (int j = i + 1 ; j < n - i ; j++)
		{
			a[j][m - i - 1] = k;
			k++;
		}
		for (int j = m - i - 2 ;  !((x % 2 == 1) && (i == x / 2)) && j > i ; j--)
		{
			a[n - i - 1][j] = k;
			k++;
		}
		for (int j = n - i - 1 ; !((x % 2 == 1) && (i == x / 2)) && j > i ; j--)
		{
			a[j][i] = k;
			k++;
		}
	}
	for (int i = 0 ; i < n ; i++)
	{
		for (int j = 0 ; j < m ; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
    return 0;
}

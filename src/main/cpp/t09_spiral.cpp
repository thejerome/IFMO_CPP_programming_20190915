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

#include <iostream>
#include <iomanip>

int t09_spiral() {
	int n, m, a[100][100] = {}, c = 0, i = 1, j = 0;
	std::cin >> n >> m;
	while (c < m * n) {
		while (a[i][j + 1] == 0 && j < m)
			a[i][++j] = ++c;
		while (a[i + 1][j] == 0 && i < n)
			a[++i][j] = ++c;
		while (a[i][j - 1] == 0 && j > 1)
			a[i][--j] = ++c;
		while (a[i - 1][j] == 0 && i > 1)
			a[--i][j] = ++c;
	}
	for (i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++)
			std::cout << std::setw(4) << a[i][j];
		std::cout << std::endl;
	}
	return 0;
}

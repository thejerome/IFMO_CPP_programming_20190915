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
#include <iomanip>

using namespace std;

int t07_snake() {
	int a = 0, b = 0, z[31][31], q = 0, w = 4;
	w=0;
	cin >> a >> b;
	for (int i = 0; i < a; i++)
	{
		w = 0;
		if (i % 2 == 1)
			for (int j = (i + 1) * b; j > z[i - 1][b - 1]; j--)
			{
				z[q][w] = j;
				w++;
				cout << setw(4) << j << fixed;
			}
		else
			for (int j = (i == 0 ? 1 : z[i - 1][0] + 1); j <= b * (i + 1); j++)
			{
				z[q][w] = j;
				w++;
				cout << setw(4) << j << fixed;
			}
		cout << endl;
		q++;
	}
}

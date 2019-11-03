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
		int a = 0, b = 0, ac = 0, bc = 0, ab = 1, bb = 0, z[21][21], count = 1, summary = 0;
	cin >> a >> b;summary = a * b;int i = 0, j = 0;ac = a;bc = b;
	while (1)
	{if (count == summary + 1)break;
		while (j < b)
		{z[i][j] = count;j++;count++;}j--;b--;
		if (count == summary + 1)
			break;
		while (i < a)
		{i++;if (i >= a){i--;break;}z[i][j] = count;count++;}
		a--;
		if (count == summary + 1)
			break;
		while (j > bb)
		{j--;z[i][j] = count;count++;}bb++;
		if (count == summary + 1)break;
		while (i > ab)
		{i--;z[i][j] = count;count++;}
		ab++;
		j++;
		if (count == summary + 1)
			break;
	}
	for (int de = 0; de < ac; de++)
	{
		for (int ko = 0; ko < bc; ko++)
		{
			cout << setw(4) << z[de][ko] << fixed;
		}
		cout << endl;
	}
}

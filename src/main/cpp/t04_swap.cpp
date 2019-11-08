//Дан двумерный массив и два числа: i и j. Поменяйте в массиве столбцы с номерами i и j
//        Формат входных данных
//Программа получает на вход размеры массива n и m, не превосходящие 100, 
// затем элементы массива, затем числа i и j.
//Формат выходных данных
//        Выведите результат.
//
//Sample Input:
//
//3 4
//11 12 13 14
//21 22 23 24
//31 32 33 34
//0 1
//Sample Output:
//
//12 11 13 14
//22 21 23 24
//32 31 33 34

#include "t04_swap.h"
#include <iostream>


using namespace std;

int t04_swap() {
	int n=0, m=0;
	cin >> n >> m;
	int mas[n][m];
	for (int I = 0; I < n; I++) {
		for (int J = 0; J < n; J++) {
			cin >> mas[I][J];
		}
	}
	int i=0, j=0;
	cin >> i >> j;
	for (int I = 0; I < n; I++) {
		int k = mas[I][i];
		mas[I][i] = mas[I][j];
		mas[I][i] = k;
	}
	for (int I = 0; I < n; I++) {
		for (int J = 0; J < n; J++) {
			cout << mas[I][J]<<" ";
		}
		cout << endl;
	}

	return 0;
}

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
    	int n, m, i, j;
	cin >> n >> m;
	int arr[n][m];
	for (int a = 0; a < n; a++){
		for (int b = 0; b < m; b++){
			cin >> arr[a][b];
		}
	}
	 i = 0, j =0;
	cin >> i >> j;
	for (int h =0; h < n; h++){
	int	c = arr[h][i];
	int	b = arr[h][j];
	int	d = c;
		arr[h][i]= b;
		arr[h][j]= d;
	}
	
		for (int a = 0; a < n; a++){
			for (int b = 0; b <m; b++){
			cout <<arr[a][b] << " ";
		}
		cout << endl;
	}
    return 0;
}

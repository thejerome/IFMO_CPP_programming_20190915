//Дано число n, не превышающее 100. Создайте массив размером n×n и заполните его по следующему правилу. 
// На главной диагонали должны быть записаны числа 0. На двух диагоналях, прилегающих к главной, числа 1.
// На следующих двух диагоналях числа 2, и т.д. 
// Выведите полученный массив на экран, разделяя элементы массива пробелами.
//
//Sample Input:
//
//5
//Sample Output:
//
//0 1 2 3 4
//1 0 1 2 3
//2 1 0 1 2
//3 2 1 0 1
//4 3 2 1 0

#include "t03_diag.h"
#include <iostream>
#include <cmath>


using namespace std;

int t03_diag() {
    	int n= 0, i =0;
	cin >> n;
	int arr[n][n];
	for  ( i = 0; i < n; i++){
		for (int row=i, col=0;row<n && col <n; row++, col++){
			arr[row][col] = i;}
		for (int row = 0, col = i; row <n && col <n; row++, col++){
			arr[row][col] = i;
	}
	}
	
	
	
	for (int row =0; row <n; row++){
		for(int col = 0; col <n; col++){
			cout << arr[row][col]<< " ";
		}
	cout << endl;
	}
}
    return 0;
}

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
    int num1, num2, arr[100][100] = {}, z = 0, i = 1, j = 0;
    cin >> num1 >> num2;
	while (z < num1 * num2) {
		while (arr[i][j + 1] == 0 && j < num2){
		    arr[i][++j] = ++z;
		}
		while (arr[i + 1][j] == 0 && i < num1){
			arr[++i][j] = ++z;
		}
		while (arr[i][j - 1] == 0 && j > 1){
			arr[i][--j] = ++z;
		}
		while (arr[i - 1][j] == 0 && i > 1){
			arr[--i][j] = ++z;
		}
	}
	for (i = 1; i <= num1; i++) {
		for (int j = 1; j <= num2; j++){
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
    return 0;
}

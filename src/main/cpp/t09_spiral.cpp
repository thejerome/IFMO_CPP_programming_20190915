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
    int n, m;
	cin >> n >> m;
    int arr[100][100];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            arr[i][j] = 0;

    int k = 1;

    int napr = 6;

	int i, j;

	bool is = 1;
	int i0 = 0, j0 = 0;

	while(is){
        is = 0;
        int last = -1;

        switch(napr){
            case 6:
                for(int i = 0; i == n - 1 || i < n && arr[i + 1] == 0; i++){
                    arr[i0][i] = k;
                    last = i;
                    is = 1;
                    k++;
                }
                j0 = i;
                napr = 2;
                break;

            case 4:
                for(int i = n - 1; i == 0 || i > 0 && arr[i - 1] == 0; i++){
                    arr[i0][i] = k;
                    is = 1;
                    k++;
                }
                j0 = i;
                napr = 8;
                break;

            case 8:
                for(int i = n - 1; i == 0 || i > 0 && arr[i - 1] == 0; i++){
                    arr[i][j0] = k;
                    is = 1;
                    k++;
                }
                i0 = i;
                napr = 6;
                break;

            case 2:
                for(int i = n - 1; i == 0 || i > 0 && arr[i - 1] == 0; i++){
                    arr[i][j0] = k;
                    last = j0;
                    is = 1;
                    k++;
                }
                i0 = i;
                napr = 8;
                break;

        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout << setw(4) << arr[i][j];

        cout << endl;
    }

    return 0;
}

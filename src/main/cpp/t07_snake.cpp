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


using namespace std;

int t07_snake() {
    int N=0, M=0;
    cin >> N >> M;
    int arr[N][M];
    for (int i = 0;i<N; i++) {
        for (int j = 0; j < M; j++) {
            if (i%2==0)
                arr[i][j]=(M*i+j)+1;
            else
                arr[i][j]=(M+M*i)-j;
        }
    }
    for (int i = 0;i<N; i++) {
        for (int j = 0; j < M; j++) {
            cout << arr[i][j] << endl;
            cout.width(4);
        }
    }
    return 0;
}

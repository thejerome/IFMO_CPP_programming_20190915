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
    int N, M, Q;
    cin >> N >> M;
    int a[30][30];
    for (int i = 1;i <= N;i++){
        for (int j = 1; j <= M; j++){
            if (i % 2 != 0){
                Q = j + M * (i - 1);
                for(int e = j; e <= M; e++){
                    a[i][e] = Q;
                    Q++;
                    cout << a[i][e] << " ";
                }
                break;
            }
            else {
                Q = M * i - (j - 1);
                for (int e = j;e <= M; e++){
                    a[i][e] = Q;
                    Q--;
                    cout << a[i][e] << " ";
                }
                break;
            }
        }
        cout << endl;
    }
    return 0;
}

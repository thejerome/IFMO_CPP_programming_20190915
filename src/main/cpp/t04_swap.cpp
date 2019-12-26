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
    int N=0, M=0, x1=0, y2=0, swp=0;
    cin >> N >> M;
    int arr[N][M];
    for (int i = 0;i<N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }
    cin >> x1 >> y2;

    for (int i=0; i<N; i++){
        swp=arr[i][x1];
        arr[i][x1]=arr[i][y2];
        arr[i][y2]=swp;
    }

    for (int i = 0;i<N; i++) {
        for (int j = 0; j < M; j++) {
            cout << arr[i][j] << ' ' << endl;
        }
    }
    return 0;
}

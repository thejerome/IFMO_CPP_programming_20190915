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
    int P,D;
    cin >> P >> D;
    int C[P][D];
    for(int L=0; L < P; L++){
        for(int H=0; H < D; H++){
            cin >> C[L][H];
        }
    }
    int T , U;
    cin >> T >> U;
    for (int L = 0; L < P; L++) {
        int S=C[L][T];C[L][T]=C[L][U];C[L][U]=S;}

    for (int L = 0; L < P; L++) {
        for (int H = 0; H < D; H++) {
            cout <<  C[L][H] << " ";
        }
        cout << endl;
    }
}

//В кинотеатре n рядов по m мест в каждом (n и m не превосходят 20). 
// В двумерном массиве хранится информация о проданных билетах, число 1 означает, 
// что билет на данное место уже продан, число 0 означает, что место свободно. 
// Поступил запрос на продажу k билетов на соседние места в одном ряду. 
// Определите, можно ли выполнить такой запрос.
//
//Формат входных данных
//        Программа получает на вход числа n и m. Далее идет n строк, содержащих m чисел (0 или 1), разделенных пробелами. Затем дано число k.
//Формат выходных данных
//        Программа должна вывести номер ряда, в котором есть k подряд идущих свободных мест. 
// Если таких рядов несколько, то выведите номер наименьшего подходящего ряда. 
// Если подходящего ряда нет, выведите число 0.
//
//Sample Input:
//
//3 4
//0 1 0 1
//1 0 0 1
//1 1 1 1
//2
//Sample Output:
//
//2

#include "t06_cinema.h"
#include <iostream>


using namespace std;

int t06_cinema() {
    int N=0, M=0, x=0, flag=16, t0=0;
    cin >> N >> M;
    int arr[N][M];
    for (int i = 0;i<N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }
    cin >> x;
    for (int i = 0;i<N; i++) {
        t0=0;
        for (int j = 0; j < M; j++) {

            if (!arr[i][j] and flag==16) {
                t0++;
                if (t0==x)
                    flag=i+1;
            }
            else {
                t0=0;
                }


        }
    }
    if (flag==16)
        cout << "0";
    else
        cout << flag;
    
    return 0;
}

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
    short n = 1, m = 1;
    cin >> n >> m;
    int a[n][m];
    for (int i = 1; i < n+1; i++) {
        for (int j = 1; j < m+1; j++) {
            cin >> a[i][j];
        }
    }
    int k=1;
    cin >> k;
    int l=0, f=0;
    for (int i = 1; i < n+1; i++) {
        for (int j = 1; j < m+1; j++) {
            if (a[i][j] == 0) {
                l++;
                if (k==l and f==0) {
                    f=i;
                }
            } else {
                l=0;
            }
        }
    }
    cout << f;
    return 0;
}

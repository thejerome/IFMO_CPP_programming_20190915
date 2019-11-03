//Дано нечетное число n, не превосходящее 15.
//Создайте двумерный массив из n×n элементов, заполнив его символами "."
// (каждый элемент массива является строкой из одного символа).
// Затем заполните символами "*" среднюю строку массива,
// средний столбец массива, главную диагональ и побочную диагональ.
// В результате "*" в массиве должны образовывать изображение звездочки.
// Выведите полученный массив на экран, разделяя элементы массива пробелами.
//
//Sample Input:
//
//5
//Sample Output:
//
//* . * . *
//. * * * .
//* * * * *
//. * * * .
//* . * . *

#include "t02_star.h"
#include <iostream>


using namespace std;

int t02_star() {
    int N;
     cin >> N;
     int a[N][N];
     for (int i = 1;i < N+1;i++){
        for (int j = 1;j < N+1;j++){
            if(j == ((N + 1) / 2)) cout << "*" << " ";
            if (i == (N + 1) / 2) cout << "*" << " ";
            else if ((i + j) == (N + 1)) cout << "*" << " ";
            else if (i == j) cout << "*" << " ";
            else cout << "." << " ";
        }
         cout << endl;
     }
     return 0;
 }

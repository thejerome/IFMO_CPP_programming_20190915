//Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента .
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//5
//1 5 2 4 3
//Sample Output:
//
//5 4

#include "t03_bigger.h"
#include <iostream>


using namespace std;

int t03_bigger() {
    long n = 0;
    cin >> n;
    const long kol = n;
    long mas[kol];
    for (int i = 0; i < kol; i++)
    {
        int znachenie = 0;
        cin >> znachenie;
        mas[i] = znachenie;
    }
    for (int i = 1; i < kol;i++){
        if (mas[i] > mas[i -1]){
            cout << mas[i] << ' ';
        }
    }
    cout << endl;
    return 0;
}

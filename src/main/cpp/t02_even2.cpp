//Выведите все четные элементы массива.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу. Элементы выводятся в том же порядке, в котором они стояли в массиве.
//Sample Input:
//
//7
//1 2 2 3 3 3 4
//Sample Output:
//
//2 2 4

#include "t02_even2.h"
#include <iostream>


using namespace std;

int t02_even2() {
    int num;
    cin >> num;
    int *arr = new int[num];
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++) {
        if (arr[i]%2 == 0){
            cout << arr[i] << " ";
        }
    }
    delete [] arr;
    return 0;
}

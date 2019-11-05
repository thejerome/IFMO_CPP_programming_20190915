//Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//6
//1 2 2 3 3 3
//Sample Output:
//
//3

#include "t06_different.h"
#include <iostream>


using namespace std;

int t06_different() {
    int num = 0, count = 1;
    cin >> num;
    int *arr = new int[num];
    for (int i = 0; i < num; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < num-1; i++) {
        if ( arr[i] != arr[i+1] ){
            count++;
        }
    }
    cout << count;
    delete [] arr;
    return 0;
    
}

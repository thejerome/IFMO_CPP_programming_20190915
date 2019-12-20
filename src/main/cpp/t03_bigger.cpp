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

#include <iostream>
#include "t03_bigger.h"
#include <vector>
using namespace std;

int t03_bigger() {
     int n, num, count = 0;
    std::cin >> n;
    while (n > 0){
        std::cin >> num;
        if (num > 0){
            count++;   
        }
        n--;
    }
    std::cout << count;
    return 0;
}

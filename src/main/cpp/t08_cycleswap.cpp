//Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ..., последний элемент переходит на место A[0]).
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//5
//1 2 3 4 5
//Sample Output:
//
//5 1 2 3 4

#include "t08_cycleswap.h"
#include <iostream>


using namespace std;

int t08_cycleswap() {
    int n, t;
    std::cin >> n;
    std::list <int> a;
    for (int i = 0; i < n; i++){
        std::cin >> t;
        a.push_back(t);
    }
    a.push_front(a.back());
    a.pop_back();
    for (auto el : a) {
        std::cout << el << ' ';
    }
    return 0;
}

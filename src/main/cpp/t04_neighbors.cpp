//Дан массив целых чисел. Если в нем есть два соседних элемента одного знака, выведите эти числа.
// Если соседних элементов одного знака нет - не выводите ничего.
// Если таких пар соседей несколько - выведите первую пару.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива. Все числа отличны от нуля.
//Формат выходных данных
//        Выведите ответ на задачу. Элементы выводятся в порядке неубывания их индексов.
//Sample Input:
//
//5
//-1 2 3 -1 -2
//Sample Output:
//
//2 3
#include "t04_neighbors.h"
#include <iostream>
#include <vector>
using namespace std;

int t04_neighbors() {
    int number;
    std::cin >> number;
    int previous;
    std::cin >> previous;
    for (int i = 1; i < number; ++i)
    {
        int value;
        std::cin >> value;
        if (value*previous>0){
            std::cout << std::min(value, previous) << " " << std::max(value, previous);
            break;
        }
        previous = value;            
    }
    return 0;
}

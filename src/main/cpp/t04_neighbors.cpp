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
	std::vector <int> value(number);
	for (int i = 0; i < number; i++) {
		std::cin >> value[i];
		if ((value[i] > 0 and value[i - 1] > 0) or (value[i]<0 and value[i-1] < 0)) {
			std::cout << std::min(value[i],value[i-1]) << " " << std::max(value[i-1],value[i]);
            break;
		}
	}
    return 0;
}

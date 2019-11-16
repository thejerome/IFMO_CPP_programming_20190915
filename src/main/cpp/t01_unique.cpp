//Дан список целых чисел, который может содержать до 100000 чисел. 
// Определите, сколько в нем встречается различных чисел.
//
//Входные данные
//
//Вводится число N - количество элементов списка, а затем N чисел.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//5
//1 2 3 2 1
//Sample Output:
//
//3

#include "t01_unique.h"
#include <iostream>
#include <set>

int t01_unique() {
	int n = 0, x = 0;
	std::set<int> st;
	std::cin >> n;

	for (int i = 0; i < n; ++i) {
		std::cin >> x;
		st.insert(x);
	}

	std::cout << st.size();

	return 0;
}
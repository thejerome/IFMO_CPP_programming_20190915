//Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
// Выведите все числа, которые входят как в первый, так и во второй список в порядке возрастания.
//
//Входные данные
//
//Вводится число N - количество элементов первого списка, а затем N чисел первого списка.
//
//Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//3
//1 3 2
//3
//4 3 2
//Sample Output:
//
//2 3

#include "t04_both2.h"
#include <iostream>
#include <set>

int t04_both2() {
	int n = 0, m = 0, x = 0;
	std::multiset<int> mst;

	std::cin >> n;

	for (int i = 0; i < n; ++i) {
		std::cin >> x;
		mst.insert(x);
	}

	std::cin >> m;

	for (int i = 0; i < m; ++i) {
		std::cin >> x;
		mst.insert(x);
	}

	for (std::multiset<int>::iterator it = mst.begin(); it != mst.end(); ++it)
		if (mst.count(*it) > 1) {
			std::cout << *it << ' ';
			it = ++mst.find(*it);
		}

	return 0;
}

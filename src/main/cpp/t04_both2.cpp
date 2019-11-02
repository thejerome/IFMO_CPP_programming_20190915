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

using namespace std;

int t04_both2() {
	int n_first, n_second, x, count = 0;
	set<int> set_first, set_second;
	cin >> n_first;
	for (int i = 0; i < n_first; i++)
	{
		cin >> x;
		set_first.emplace(x);
	}
    cin >> n_second;
	for (int i = 0; i < n_second; i++)
	{
		cin >> x;
		if (set_first.find(x) != set_first.end())
		{
			count++;
			set_second.emplace(x);
		}
	}
	for (auto i = set_second.begin(); i != set_second.end(); i++)
		cout << *i << " ";
	return 0;
}

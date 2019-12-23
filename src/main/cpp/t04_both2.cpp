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
	set <int> a;
	set <int> b;
	set <int> d;

	int N, M;
	int number = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int q;
		cin >> q;
		a.insert(q);
	}
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		int q;
		cin >> q;
		b.insert(q);
		if (a.find(q) != a.end()) {
			d.insert(q);
		}
	}

	d <int>::iterator t;
	for (it = d.begin(); t != d.end(); ++t) {
		cout << *t << " ";
	}
	return 0;
}

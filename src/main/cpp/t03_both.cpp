//Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
// Посчитайте, сколько чисел содержится одновременно как в первом списке, так и во втором.
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
//2

#include "t03_both.h"
#include <iostream>
#include <set>

using namespace std;

int t03_both() {
	set <int> a;
	set <int> b;
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
			number++;
		}
	}
	cout << number;
	return 0;
}

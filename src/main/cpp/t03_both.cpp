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
	set <int> a1;
	set <int> s3;
	int c;
	cin >> c;

	for (int i = 0; i < c; i++)
	{
		int b;
		cin >> b;
		a.insert(b);
	}
	int c1;
	cin >> c1;
	int k = 0;
	for (int i = 0; i < c1; i++)
	{
		int b;
		cin >> b;
		a1.insert(b);

	}

	s3.insert(a.begin(), a.end());
	auto it = s3.begin();
	for (auto& v : a1)
	{
		it = s3.insert(it, v);
	}

	int f = a.size() + a1.size();
	k = f - s3.size();

	cout << k;
}

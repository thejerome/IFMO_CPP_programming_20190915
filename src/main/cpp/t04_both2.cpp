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
#include <algorithm>
#include <iterator>

using namespace std;

int t04_both2() {


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
	set_intersection(a.begin(), a.end(), a1.begin(), a1.end(), inserter(s3, s3.begin()));
	for (auto i : s3)
		cout << i << " ";

}

//Отсортируйте массив.
//
//Входные данные
//
//Первая строка входных данных содержит количество элементов в массиве N ≤ 10^5. 
// Далее идет N целых чисел, не превосходящих по абсолютной величине 10^9.
//
//Выходные данные
//
//Выведите эти числа в порядке неубывания.
//
//Sample Input:
//
//5
//5 4 3 2 1
//Sample Output:
//
//1 2 3 4 5

#include "t01_sort.h"
#include <iostream>
#include <algorithm>

using namespace std;
bool cmp(int a1, int a2)
{
	return a1 < a2;
}
int t01_sort() {
	int n,a[100001];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int h;
		cin >> h;
		a[i] = h;
	}
	sort(a, a+n ,cmp);
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
}

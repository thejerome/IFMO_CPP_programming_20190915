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
	set<int> mmq;
	int h, q=0, sum = 0;
	cin >> h;
	sum = h > q ? sum + 0 : sum + 0;
	for (int i = 0; i < h; i++)
	{
		sum=0;
		int num;
		cin >> num;
		mmq.insert(num);
	}
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int num;
		cin >> num;
		if (mmq.count(num) > 0)
			sum++;
	}
	cout << sum;
}

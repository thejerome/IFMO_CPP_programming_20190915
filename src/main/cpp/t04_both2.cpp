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
	set<int> mmq,out;
	int h, q, sum = 0;
	cin >> h;
	for (int i = 0; i < h; i++)
	{
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
			out.insert(num);
	}
	for (int i :out)
		cout << i << " ";
}

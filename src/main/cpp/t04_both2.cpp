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
	set <int> mif, leg, kap;
	int cry, bae;
	cin >> cry;
	for (int i = 0; i < cry; i++)
	{
		int tim;
		cin >> tim;
		mif.insert(tim);
	}
	cin >> bae;
	for (int i = 0; i < bae; i++)
	{
		int lou;
		cin >> lou;
		leg.insert(lou);
		if (mif.find(lou) != mif.end())
			kap.insert(lou);
	}
	set <int>::iterator j;
	for (j = kap.begin(); j != kap.end(); ++j)
		cout << *j << ' ';
}

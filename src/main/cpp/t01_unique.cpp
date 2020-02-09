//Дан список целых чисел, который может содержать до 100000 чисел. 
// Определите, сколько в нем встречается различных чисел.
//
//Входные данные
//
//Вводится число N - количество элементов списка, а затем N чисел.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//5
//1 2 3 2 1
//Sample Output:
//
//3

#include "t01_unique.h"
#include <iostream>
#include <set>
using namespace std;

int t01_unique() {
	set <int> a;
	int c;
	cin >> c;
	for (int i = 0; i < c; i++)
	{
		int b;
		cin >> b;
		a.insert(b);

	}
	cout << a.size();


}

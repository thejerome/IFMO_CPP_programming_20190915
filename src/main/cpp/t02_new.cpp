//Во входной строке записана последовательность чисел через пробел. 
// Для каждого числа выведите слово YES (в отдельной строке), 
// если это число ранее встречалось в последовательности или NO, если не встречалось.
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
//6
//1 2 3 2 3 4
//Sample Output:
//
//NO
//NO
//NO
//YES
//YES
//NO

#include "t02_new.h"
#include <iostream>


using namespace std;
#include <set>
int t02_new() {
    
	set <int> a;
	int c;
	cin >> c;
	int s = a.size();
	for (int i = 0; i < c; i++)
	{
		int b;
		cin >> b;
		a.insert(b);

		if (s != a.size())
		{
			cout << "NO" << endl;
			s = a.size();
		}
		else
		{
			cout << "YES" << endl;
		}
		//s = a.count(b);
	}
}

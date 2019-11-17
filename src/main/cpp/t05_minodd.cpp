//Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.
//
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//5
//0 1 2 3 4
//Sample Output 1:
//
//1
//Sample Input 2:
//
//5
//2 4 6 8 10
//Sample Output 2:
//
//0

#include "t05_minodd.h"
#include <iostream>
#include <cmath>


using namespace std;

int t05_minodd() {
	int min = 0;
	bool m = 0;
	bool s = 0;
	int n;
	cin >> n;
	int mas[1000];
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
		if ((mas[i] % 2 == 1) && (m == 0))
		{
			min = mas[i];
			m = 1;
		}
	}
	for (int i = 1; i < n; i++)
	{

		if (mas[i] < min && mas[i] % 2 == 1)
		{
			min = mas[i];
			s = 1;
		}

	}




	if (s = 1)
	{
		cout << min;
	}
	else
	{
		cout << "0";
	}


}

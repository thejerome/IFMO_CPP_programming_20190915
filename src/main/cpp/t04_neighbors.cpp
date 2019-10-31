//Дан массив целых чисел. Если в нем есть два соседних элемента одного знака, выведите эти числа.
// Если соседних элементов одного знака нет - не выводите ничего.
// Если таких пар соседей несколько - выведите первую пару.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива. Все числа отличны от нуля.
//Формат выходных данных
//        Выведите ответ на задачу. Элементы выводятся в порядке неубывания их индексов.
//Sample Input:
//
//5
//-1 2 3 -1 -2
//Sample Output:
//
//2 3

#include "t04_neighbors.h"
#include <iostream>


using namespace std;

int t04_neighbors() {
	int z = 0;

	cin >> z;

	int a [40];
	int b [40];
	for (int i = 0; i < z; i++)
		cin >> a[i];

	int j = 0, mn = 2;
	bool nitsketazo = false;
	bool is_higher = false;
	while (j < z-1)
	{
		if (a[j] < 0 && a[j + 1] < 0 && nitsketazo == false)
		{
			nitsketazo = true;
			is_higher = false;
			b[mn - 2] = a[j];
			b[mn - 1] = a[j + 1];
			j++;
		}
		else if (a[j] > 0 && a[j + 1] > 0 && nitsketazo == false)
		{
			nitsketazo = true;
			is_higher = true;
			b[mn - 2] = a[j];
			b[mn - 1] = a[j + 1];
			j++;
		}
		else if (nitsketazo == true)
		{
			if ((is_higher && a[j] > 0) || (!is_higher && a[j] < 0))
			{
				b[mn] = a[j];
				mn++;
			}
			else {
				j = z;
				break;
			}
		}
		j++;
	}
	if (nitsketazo)
	{
		for (int i = 0; i < mn; i++)
			cout << b[i] << " ";
	}
}

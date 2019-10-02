//Есть две коробки, первая размером A1×B1×C1, вторая размером A2×B2×C2. Определите, можно ли разместить одну из этих коробок внутри другой, при условии, что поворачивать коробки можно только на 90 градусов вокруг ребер.
//
//Формат входных данных
//        Программа получает на вход числа A1, B1, C1, A2, B2, C2.
//Формат выходных данных
//        Программа должна вывести одну из следующих строчек:
//Boxes are equal, если коробки одинаковые,
//The first box is smaller than the second one, если первая коробка может быть положена во вторую,
//        The first box is larger than the second one, если вторая коробка может быть положена в первую,
//Boxes are incomparable, во всех остальных случаях.
//Sample Input 1:
//
//1
//2
//3
//3
//2
//1
//Sample Output 1:
//
//Boxes are equal
//        Sample Input 2:
//
//2
//2
//3
//3
//2
//1
//Sample Output 2:
//
//The first box is larger than the second one

#include "t11_boxes.h"
#include <iostream>

using namespace std;

int t11_boxes() {
	int a1, b1, c1, a2, b2, c2, sm1,m1,h1,sm2,m2,h2;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	
	if (a1 <= b1 && b1 >= c1)
	{
		h1 = b1;
		if (a1 <= c1)
		{
			sm1 = a1;
			m1 = c1;
		}
		else
		{
			sm1 = c1;
			m1 = a1;
		}
	}
	else if (b1 <= a1 && a1 >= c1) 
	{
		h1 = a1;
		if (b1 <= c1)
		{
			sm1 = b1;
			m1 = c1;
		}
		else
		{
			sm1 = c1;
			m1 = b1;
		}
	}
	else 
	{
		h1 = c1;
		if (a1 <= b1)
		{
			sm1 = a1;
			m1 = b1;
		}
		else
		{
			sm1 = b1;
			m1 = a1;
		}
	}

	if (a2 <= b2 && b2 >= c2)
	{
		h2 = b2;
		if (a2 <= c2)
		{
			sm2 = a2;
			m2 = c2;
		}
		else
		{
			sm2 = c2;
			m2 = a2;
		}
	}
	else if (b2 <= a2 && a1 >= c2)
	{
		h2 = a2;
		if (b2 <= c2)
		{
			sm2 = b2;
			m2 = c2;
		}
		else
		{
			sm2 = c2;
			m2 = b2;
		}
	}
	else
	{
		h2 = c2;
		if (a2 <= b2)
		{
			sm2 = a2;
			m2 = b2;
		}
		else
		{
			sm2 = b2;
			m2 = a2;
		}
	}
	if (sm1 == sm2 && m1 == m2 && h1 == h2)
		cout << "Boxes are equal";
	else
	{
		if (sm1 <= sm2 && m1<=m2 && h1<=h2)
		{
			cout << "The first box is smaller than the second one";
		}
		else if (sm1 >= sm2 && m1 >=m2 && h1>=h2)
		{
			cout << "The first box is larger than the second one";
		}
		else
			cout << "Boxes are incomparable";
	}
};
//Дано натуральное число N. Выведите слово YES, если число N является точной степенью двойки, или слово NO в противном случае.
//
//Формат входных данных
//        Вводится натуральное число.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//1
//Sample Output 1:
//
//YES
//        Sample Input 2:
//
//2
//Sample Output 2:
//
//YES

#include "t03_twos.h"
#include <iostream>

using namespace std;

int t03_twos() 
{
	int n , h=0;
	h=1;
	h++;
	cin >> n;
	if (n == 1 || n==2)
		cout << "YES";
	else
	{
	while (h<=n)
	{
		h *= 2;
		if (n == h)
		{
			cout << "YES";
			break;
		}
		else if (h>n)
		{
			cout << "NO";
			break;
		}
	}
	}
};

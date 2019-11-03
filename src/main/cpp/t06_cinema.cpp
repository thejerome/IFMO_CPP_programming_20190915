//В кинотеатре n рядов по m мест в каждом (n и m не превосходят 20). 
// В двумерном массиве хранится информация о проданных билетах, число 1 означает, 
// что билет на данное место уже продан, число 0 означает, что место свободно. 
// Поступил запрос на продажу k билетов на соседние места в одном ряду. 
// Определите, можно ли выполнить такой запрос.
//
//Формат входных данных
//        Программа получает на вход числа n и m. Далее идет n строк, содержащих m чисел (0 или 1), разделенных пробелами. Затем дано число k.
//Формат выходных данных
//        Программа должна вывести номер ряда, в котором есть k подряд идущих свободных мест. 
// Если таких рядов несколько, то выведите номер наименьшего подходящего ряда. 
// Если подходящего ряда нет, выведите число 0.
//
//Sample Input:
//
//3 4
//0 1 0 1
//1 0 0 1
//1 1 1 1
//2
//Sample Output:
//
//2

#include "t06_cinema.h"
#include <iostream>


using namespace std;

int t06_cinema() {
    
	int a = 0, b = 0, z[21][21], k = 0, max = 0;
	cin >> a>>b;
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			cin >> z[i][j];
		}
	}
	cin >> k;
	for (int i = 0; i < a; i++)
	{
		int row = 0;
		bool found = false;
		for (int j = 0; j < b; j++)
		{
			if (z[i][j] == 0 && found == true)
				row++;
			if ((z[i][j] == 1 || (z[i][j] == 0 && j == b - 1 && row + 1 >= k)) && found == true && row >= k && max == 0)
			{
				max = i + 1;
				i = a;
				break;
			}
			if (z[i][j] == 0 && found == false)
			{
				row++;
				found = true;
			}
			else if (z[i][j] == 1 && found == true)
			{
				found = false;
				row = 0;
			}
			
		}
	}
	cout << max;
}

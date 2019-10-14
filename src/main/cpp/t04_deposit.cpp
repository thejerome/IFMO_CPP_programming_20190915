//Процентная ставка по вкладу составляет P процентов годовых, которые прибавляются к сумме вклада через год. Вклад составляет X рублей Y копеек. Определите размер вклада через K лет.
//Формат входных данных
//        Программа получает на вход целые числа P, X, Y, K .
//Формат выходных данных
//        Программа должна вывести два числа: величину вклада через K лет в рублях и копейках. Дробное число копеек по истечение года отбрасывается. Перерасчет суммы вклада (с отбрасыванием дробных частей копеек) происходит ежегодно.
//Примечание
//        В этой задаче часто возникают проблемы с точностью. Если они возникли у вас - попробуйте решить задачу в целых числах.
//Sample Input:
//
//12
//179
//0
//5
//Sample Output:
//
//315 43

#include "t04_deposit.h"
#include <iostream>
#include <cmath>

using namespace std;

int t04_deposit() {
	double P = 0, X = 0, Y = 0, K = 0, J = 0;
	int i = 0;
	cin >> P >> X >> Y >> K;
	while (i < K) 
	{
		i++;
		J = X;
		X = int(X * (1 + P / 100)) + int((Y * (1 + P / 100))/100);
		Y = int(Y * (1 + P / 100)) % 100 + (J * (1 + P / 100)-int(J * (1 + P / 100)))*100;
		if (Y >= 100) { X = X + 1; Y = Y - 100; }
	}
	cout << X << " " << Y;
};
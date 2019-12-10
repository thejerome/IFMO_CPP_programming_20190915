//Даны четыре действительных числа: x1, y1, x2, y2. 
// Напишите функцию distance(x1, y1, x2, y2), вычисляющую расстояние между точкой (x1. y1) и (x2, y2).
// Считайте четыре действительных числа и выведите результат работы этой функции.
//
//Формат входных данных
//        Вводятся четыре действительных числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//0
//0
//1
//1
//Sample Output:
//
//1.41421

#include <iostream>
#include <cmath>

using namespace std;

int distance(int x1,int y1,int x2,int y2)  {
		int sx, sy;
	sx = x2 - x1;
	sy = y2 - y1;

	return sqrt(pow(sx, 2)+pow(sy, 2));
}       //function distance

int t02_dist() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	cout << distance(a, b, c, d);
    return 0;
}

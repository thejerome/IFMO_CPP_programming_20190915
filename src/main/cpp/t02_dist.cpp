//Даны четыре действительных числа: x1, y1, x2, y2. 
// Напишите функцию distance(x1, y1, x2, y2), вычисляющую расстояние между точкой (x1. y1) и (x2, y2).
// Считайте четыре действительных числа и выведите результат работы этой функции.
//
//Формат входных данных
//        Вводятся четыре действительных числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:l
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

float distance(float x1, float x2, float y1, float y2) {
		return sqrt(pow((x2 - x1), 2) + (pow((y2 - y1), 2)));
	}

int t02_dist() {
	
	float x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << distance(x1, x2, y1, y2);
    return 0;
}

//Даны пять действительных чисел: x, y, xc, yc, r. 
// Проверьте, принадлежит ли точка (x, y) кругу с центром (xc, yc) и радиусом r. 
// Если точка принадлежит кругу, выведите слово YES, иначе выведите слово NO.
//Решение должно содержать функцию IsPointInCircle(x, y, xc, yc, r), 
// возвращающую True, если точка принадлежит кругу и False, если не принадлежит. 
// Основная программа должна считать координаты точки, вызвать функцию IsPointInCircle 
// и в зависимости от возвращенного значения вывести на экран необходимое сообщение.
//Функция IsPointInCircle не должна содержать инструкцию if.
//
//Формат входных данных
//        Вводятся пять действительных чисел.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//0.5
//0.5
//0
//0
//1
//Sample Output 1:
//
//YES
//        Sample Input 2:
//
//0.5
//0.5
//1
//1
//0.1
//Sample Output 2:
//
//NO

#include <iostream>
#include <cmath>

using namespace std;


bool IsPointInCircle(double x, double y, double xr, double yr, double r)
{
	if (sqrt(pow((xr - x), 2) + pow((yr - y), 2)) <= r)
		return true;
	else return false;
}//function IsPointInCircle

int t03_circle() {
	double x, y, xr, yr, r;
	cin >> x >> y >> xr >> yr >> r;
	if (IsPointInCircle(x, y, xr, yr, r) == true)
		cout << "YES";
	else cout << "NO";
    return 0;
}

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


bool sr(double a, double b)
{
	if (a <= b)
		return true;
	else
		return false;
}
//function IsPointInCircle
bool IsPointInCircle(double x, double y, double xc, double yc, double r)
{
	double dis;
	dis = sqrt((x - xc) * (x - xc) + (y - yc) * (y - yc));
	return sr(dis, r);


}
int t03_circle() {
	double a, b, c, d, r;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> r;
	if (IsPointInCircle(a, b, c, d, r) == true)
		cout << "YES";
	else
		cout << "NO";
    return 0;
}

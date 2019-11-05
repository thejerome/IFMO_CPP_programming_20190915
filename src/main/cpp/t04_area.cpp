//Проверьте, принадлежит ли точка данной закрашенной области:
//
// https://www.dropbox.com/s/3h3nl34g4ciiglt/3795.png?dl=1
//
//Если точка принадлежит области (область включает границы), выведите слово YES, иначе выведите слово NO.
//Решение должно содержать функцию IsPointInArea(x, y), возвращающую True, если точка принадлежит области 
// и False, если не принадлежит. 
// Основная программа должна считать координаты точки, вызвать функцию IsPointInArea 
// и в зависимости от возвращенного значения вывести на экран необходимое сообщение.
//Функция IsPointInArea не должна содержать инструкцию if.
//Формат входных данных
//        Вводятся два действительных числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//-4
//-4
//Sample Output 1:
//
//NO
//        Sample Input 2:
//
//-4
//-3
//Sample Output 2:
//
//NO

#include <iostream>
#include <cmath>

using namespace std;

//function IsPointInArea
bool IsPointInArea(double x, double y) {
	int xc = -1, yc = 1, r = 2, a1 = 2, b1 = 2, a2 = -1;
	return (sqrt(pow(xc - x, 2) + pow(yc - y, 2)) <= r && y >= a1 * x + b1 && y >= a2 * x
		|| sqrt(pow(xc - x, 2) + pow(yc - y, 2)) >= r && y <= a1 * x + b1 && y <= a2 * x);
}

int t04_area() {
	double x = 0, y = 0;
	cin >> x >> y;
	if (IsPointInArea(x, y))
		cout << "YES";
	else
		cout << "NO";

    return 0;
}

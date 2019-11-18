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
/*double distance(double x1, double y1, double x2, double y2){
    double dx = abs(x2 - x1);
    dx = dx*dx;
    double dy = abs (y2 - y1);
    dy = dy*dy;
    return (sqrt(dx+dy));
}*/
//function IsPointInCircle
bool IsPointInCircle(double x, double y, double xc, double yc, double r){
    return (distance(x, y, xc, yc) <= r);
}

int t03_circle() {
    double x=0, y=0, xc=0, yc=0, r=0;
    cin >>x >>y >>xc >>yc >>r;
    if(IsPointInCircle(x, y, xc, yc, r)){
        cout <<"YES";
    } else {
        cout <<"NO";
    }
    return 0;
}

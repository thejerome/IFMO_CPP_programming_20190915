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
bool IsPointInCircle(double x, double y, double xc, double yc, double r);
//function IsPointInArea
bool IsPointInArea(double x, double y){
    bool bl1 = (IsPointInCircle(x, y, -1, 1, 2));
    bool bl2 = (y >= 2*x + 2);
    bool bl3 = (y >= -x);
    bool bl4 = (y <= 2 * x + 2);
    bool bl5 = (y <= -x);
    bool bl0 = (!bl1 or (sqrt((-1-x)*(-1-x) + (1-y)*(1-y)) == 2));
    bl1 = bl1 and bl2 and bl3;
    bl2 = bl0 and bl4 and bl5;
    bool bl6 = bl1 or bl2;
    return bl6;
}
int t04_area() {
    double x=0, y=0;
    cin >>x >>y;
    if (IsPointInArea(x, y)){
        cout <<"YES";
    } else {
        cout <<"NO";
    }
    return 0;
}
//fixed-1
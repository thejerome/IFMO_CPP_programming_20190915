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
bool IsPointInCircle(float x, float y, float xc, float yc, float r){
    float rc;
    rc = sqrt(pow(xc-x, 2) + pow(yc-y, 2));
    return rc <= r;
}
bool IsPointNotInCircle(float x, float y){
    float rc;
    rc = sqrt(pow(1+x, 2) + pow(1-y, 2));
    return rc >= 2;
}
bool IsPointOverLine(float x, float y, float k, float b){
    float l = y - k * x;
    return l >= b;
}
bool IsPointUnderLine(float x, float y, float k, float b){
    float l = y - k * x;
    return l <= b;
}
bool IsPointInArea(float x, float y){
    bool c = IsPointInCircle(x, y, -1, 1, 2);
    bool l1 = IsPointOverLine(x, y, -1, 0);
    bool l2 = IsPointOverLine(x, y, 2, 2);
    if (c && l1 && l2)
        return true;
    else{
        bool nc = IsPointNotInCircle(x, y);
        bool nl1 = IsPointUnderLine(x, y, -1, 0);
        bool nl2 = IsPointUnderLine(x, y, 2, 2);
        if (nc && nl1 && nl2)
            return true;
        else
            return false;
    }
    
}

//function IsPointInArea

int t04_area() {
  float x, y;
    std::cin >> x;
    std::cin >> y;
    if (IsPointInArea(x, y))
        std::cout << "YES";
    else
        std::cout << "NO";
    return 0;
}

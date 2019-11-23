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

string IsPointInCircle(float x, float y, float xc, float yc, float r){
    float x2=x-xc;
    float y2=y-yc;
    if ((x2*x2 + y2*y2) <= r) {
    return "YES";
    }
    else return "NO";
}

int t03_circle(int argc, char* argv[])
{
    float x, y, xc, yc, r;
    cin>>x;
    cin>>y;
    cin>>xc;
    cin>>yc;
    cin>>r;
    cout<<IsPointInCircle(x, y, xc, yc, r);

    return 0;
}

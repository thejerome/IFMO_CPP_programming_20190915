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

string IsPointInCircle(int x, int y){
    if (((pow(x+1,2)+pow(y-1,2)<=4) && (y>=-x) && (y>=2*(x+1))) || ((pow(x+1,2)+pow(y-1,2)>=4) && (y<=-x) && (y<=2*(x+1)) )) {
    return "YES";
    }
    else return "NO";
}

int t04_area()
{
    float x, y;
    cin>>x;
    cin>>y;
    cout<<IsPointInCircle(x, y);

    return 0;
}

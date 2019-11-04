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
bool IsPointInArea(float W, float R)
{
  float CIC = (abs((W + 1)*(W+1))+ abs((R - 1)*(R-1))  <= 4);
   float LA = (W + R >= 0);
   float LB = (R*0.5-W >= 1);
   float LB1 = (R*0.5-W <= 1);
   float LA1 = (W + R <= 0);
   float CCIC = (abs((W + 1)*(W+1))+ abs((R - 1)*(R-1))  == 4);
   return CIC && LA && LB || (CCIC || not CIC) && LB1 && LA1;

}
int t04_area() {

  float W,R;
cin >> W >> R;
    if (IsPointInArea(W,R))
    cout << "YES";
    else cout << "NO";
}

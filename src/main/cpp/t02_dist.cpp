//Даны четыре действительных числа: x1, y1, x2, y2. 
// Напишите функцию distance(x1, y1, x2, y2), вычисляющую расстояние между точкой (x1. y1) и (x2, y2).
// Считайте четыре действительных числа и выведите результат работы этой функции.
//
//Формат входных данных
//        Вводятся четыре действительных числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
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

//function distance

double distance(int & a,int & b,int & c,int & d)
{
    return sqrt(pow((b-a),2) + pow((d - c),2));
}

int t02_dist() {
 int a,b,c,d;
    cin >>a>>b>>c>>d;
    cout << distance(a,c,b,d);
    return 0;
}

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

float distance(float W, float R ,float F , float C)
{
   float answer1 = abs(W - F);
   float answer2 = abs(R - C);
   float Dis = sqrt(pow(answer1,2)+ pow(answer2,2));
   return Dis;
}

int t02_dist() {

    float W,R,F,C;
cin >> W >> R >> F >> C;

    cout << distance(W,R,F,C);
}

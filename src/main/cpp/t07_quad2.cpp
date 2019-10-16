//Даны действительные коэффициенты a, b, c. Решите уравнение ax2 + bx + c = 0 и выведите все его корни.
//
//Формат входных данных
//
//        Вводятся три действительных числа.
//Формат выходных данных
//        Если данное уравнение не имеет корней, выведите число 0. Если уравнение имеет один корень, выведите число 1, а затем этот корень. Если уравнение имеет два корня, выведите число 2, а затем два корня в порядке возрастания. Если уравнение имеет бесконечно много корней, выведите число 3.
//Sample Input:
//
//1
//-1
//-2
//Sample Output:
//
//2 -1 2

#include "t07_quad2.h"
#include <iostream>
#include <cmath>

using namespace std;

int t07_quad2() {
int a, b, c,d;
double x1,x2;
cin >>a>>b>>c;
d=0;
if (a!=0) d=b*b-4*a*c;
if (d<0)
    cout<< 0;
if (d==0)
    if(a==0) cout << 1 <<" "<< double(-c/b);
        else cout<< 1 <<" "<< double((-b)/(2*a));
if (d>0)
    cout<< 2 <<" "<< double((-b-sqrt(d))/(2*a))<<" "<<double((-b+sqrt(d))/(2*a));
};
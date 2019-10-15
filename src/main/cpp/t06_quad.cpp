//Даны действительные коэффициенты a, b, c, при этом a != 0 . Решите квадратное уравнение ax2 + bx + c = 0 и выведите все его корни.
//
//Формат входных данных
//
//        Вводятся три действительных числа.
//Формат выходных данных
//        Если уравнение имеет два корня, выведите два корня в порядке возрастания, если один корень — выведите одно число, если нет корней — не выводите ничего.
//Sample Input:
//
//1
//-1
//-2
//Sample Output:
//
//-1 2

#include "t06_quad.h"
#include <iostream>
#include <cmath>

using namespace std;

int t06_quad() {
            double a,b,c;
            cin>>a>>b>>c;
            double delta = b*b - 4.0*a*c;
            if(delta >= 0.0){
                double x1 = (-b + sqrt(delta)) / (2.0 * a);
                double x2 = (-b - sqrt(delta)) / (2.0 * a);
                if(delta == 0.0){
                    cout<<x1;
                } else {
                    cout<<min(x1,x2)<<' '<<max(x1,x2);
                }
            }
}

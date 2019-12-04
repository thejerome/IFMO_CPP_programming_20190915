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

int main()
{
    double q, b, c;
    int Z;
    cin >> q >> b >> c;
    if(q == 0)
    {
        if(b == 0)
        {
            if(c == 0)
            {
                cout << 3;
            }
            else
            {
                cout << 0;
            }
        }
        else
        {
            if(c == 0)
            {
                cout << 1 << " " << 0;
            }
            else
            {
                cout << 1 << " " << (-c/b);
            }
        }
    }
    else
    {
        if(b == 0)
        {
            if(c == 0)
            {
                cout << 1 << " " << 0;
            }
            else
            {
                if(q > 0 && c < 0 || q < 0 && c > 0)
                {
                    cout << 2 << " " << -sqrt(-c/q) <<  " " << sqrt(-c/q);
                }
                else
                {
                    cout << 0;
                }
            }
        }
        else
        {
            if(c == 0)
            {
                cout << 2 << " ";
                if((-b/q) < 0)
                {
                    cout << (-b/q) << " " << 0;
                }
                else
                {
                    cout << 0 << " " << (-b/q);
                }
            }
            else
            {
                double d = pow(b,Z) - 4 * c * q;
                if(d == 0)
                {
                    cout << 1 << " " << (-b/(2*q));
                }
                else if(d > 0)
                {
                    double x = (-b + sqrt(d))/(2 * q), X = (-b - sqrt(d))/(2 * q);
                    cout << 2 << " ";
                    if(x > X)
                    {
                        cout << X << " " << x;
                    }
                    else
                    {
                        cout << x << " " << X;
                    }
                }
                else
                {
                    cout << 0;
                }
            }
        }
    }
    return 0;
}
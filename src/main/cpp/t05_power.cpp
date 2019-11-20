//Дано действительное положительное число a и целоe число n.
//
//Вычислите an. Решение оформите в виде рекурсивной функции power(a, n).
//Не используйте циклы.
//
//Формат входных данных
//        Вводится действительное положительное число a и целоe число n.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//2
//1
//Sample Output 1:
//
//2
//Sample Input 2:
//
//2
//2
//Sample Output 2:
//
//4

#include <iostream>
#include <cmath>

using namespace std;

//function power
double power(double a, double b, int n);
double power(double a, double b, int n) {
    if (n == 1) {
        return b;
    }
    if (n == 0) {
        return 1;
    }
    if (n == -1) {
        return 1 / b;
    }
    if (n > 1) {
        b = b * a;
        return power(a, b, n - 1);
    }
    if (n < -1) {
        b = 1 / a;
        return power(a, b, n + 1);
    }
}

int t05_power() {
    double a=0; int n=0;
    cin >>a >>n;
    double b=a;
    cout <<power(a,b,n);
    return 0;
}

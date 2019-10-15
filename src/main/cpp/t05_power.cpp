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
double power(double a, double b, int n) {
    if (n > 0) {
        a = power(a, b, n - 1);
        return a * b;
    }
    if (n < 0) {
        a = power(a, b, n + 1);
        return a / b;
    }
    return a;
}

int t05_power() {

    double a;
    int n;
    cin >> a >> n;
    cout << power(1, a, n);
    
    return 0;
}

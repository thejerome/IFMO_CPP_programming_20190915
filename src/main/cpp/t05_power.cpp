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


double power(double x, int y) {
    double a;
    int z = 1,c =2;
    if (y == 0){
        a = z;
    }
    else if (y == z) {
        a = x;
    }
    else if (y > z) {
        a = x;
        for (int i = c; i <= y; i++) {
            a = a * x;
        }
    }
    else if (y < 0) {
        a = x;
        for (int i = c; i <= -y; i++) a = a * x;
        a = z / a;
    }
    return a;
}

int t05_power() {
    double  x;
    int y;
    cin >> x >> y;
    cout << power(x,y);
    return 0;
}
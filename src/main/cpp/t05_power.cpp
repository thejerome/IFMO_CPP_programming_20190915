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

double power(double a, long n){
    if (n == 0){
        return 1;
    }
    return a*power(a, --n);  
}

int t05_power() {
    double a = 0;
    long n = 0;
    cin >> a >> n;
    if (n >= 0)
    {
        cout << power(a, n) << endl;
    }
    else if (n < 0){
        cout << 1/power(a, abs(n)) << endl;
    }
    return 0;
}

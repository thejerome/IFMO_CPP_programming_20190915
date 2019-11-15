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

double power(double, int);

int t05_power() {
    int n;
    double a;
    cin >> a >> n;
    cout << power(a,n);
    return 0;
}

double power(double b, int m){
    if (m==1){
        return b;
    }
    if (m==0){
        return 1;
    }
    if (m>0){
        return (b*power(b,--m));
    }
    if (m<0){
        return (1/b*power(b,++m));
    }
}

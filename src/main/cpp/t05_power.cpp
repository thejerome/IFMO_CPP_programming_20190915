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

double power(double a, int n){
    if(n != 1){
        n--;
        a *= power(a, n);
    }
    return a;    

int t05_power() {
    int n;
    double a;
    cin >> a >> n;
    cout << power(a, n);
    return 0;
}

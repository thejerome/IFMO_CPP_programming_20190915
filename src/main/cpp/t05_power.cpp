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
double power(double a, int n) {
double x;
if (n == 0) x = 1;
else if (n == 1) x = a;
else if (n > 1) {
x = a;
for (int i = 2; i <= n; i++) x = x * a;}
else if (n < 0) {
x = a;
for (int i = 2; i <= -n; i++) x = x * a;
x = 1 / x;}
return x;}

int t05_power() {
double  a;
int n;
cin >>a>>n;
cout<<power(a,n);
return 0;
}


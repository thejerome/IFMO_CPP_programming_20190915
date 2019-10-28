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
double power(double a,int n){
    int k=0;
    if (n<0) {k=1;}
    if (n==0){k=2;}
    n=abs(n);
    double z=a;
    while (n-1>0) {
        a*=z;
        n--;
    }
    if (k==2) {return 1;} else {
    if (k==0) {return a;} else {return 1/a;}}
}

int t05_power() {
    double a;
    int n;
    cin >> a >> n;
    cout << power(a,n);
    return 0;
}

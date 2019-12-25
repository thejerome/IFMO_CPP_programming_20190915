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
int func(int& a,int& b){
    if (b > 0){
        b--;
        return a * func(a,b); 
      }
    else if (b == 0) {
        return 1;
    }
    else {
        b++
        return 1/a * func (a,b); 
}
}
using namespace std;

//function power

int t05_power() {
    int a, b;
    cin >> a>> b;
    cout << func(a,b);
    return 0;
}

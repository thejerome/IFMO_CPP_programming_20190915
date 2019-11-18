//Дано действительное положительное число a и целоe число n.
//
//Вычислите a^n. Решение оформите в виде рекурсивной функции power(a, n).
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
int power(int a, int n)
{
	int s = 1;
	if (n > 0) { return s = s*a*power(a, n - 1); }
	else { return s; }
}

int t05_power() {

	int a = 0, n = 0;
	cin >> a >> n;
	double res = power(a, abs(n));
	if(n>=0){ cout << res; }
	else{ cout << 1/res; }
}

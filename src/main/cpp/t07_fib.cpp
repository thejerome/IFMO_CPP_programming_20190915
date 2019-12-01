//Напишите функцию fib(n), которая по данному целому положительному n возвращает n-e число Фибоначчи. 
// В этой задаче нельзя использовать циклы - используйте рекурсию.
//Первое и второе числа Фибоначчи равны 1, а каждое следующее равно сумме двух предыдущих.
//Формат входных данных
//        Вводится целое число.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//Sample Output:
//
//1

#include <iostream>
#include <cmath>

using namespace std;

long fib(long n, long a = 1){
    if (n <= 2)
    {
        return 1;
    }
    return fib(--n, a) + fib(--n, a + a);
    
}

int t07_fib()
{
    long n = 0;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}

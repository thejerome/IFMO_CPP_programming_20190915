//Последовательность Фибоначчи определяется так:
//
//F(0) = 0, F(1) = 1, …, F(n) = F(n−1) + F(n−2).
//
//По данному числу N определите N-е число Фибоначчи F(N).
//
//Формат входных данных
//        Вводится натуральное число N.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//6
//Sample Output:
//
//8

#include "t08_fibb.h"
#include <iostream>

using namespace std;

int t08_fibb() {
	int n, fib1 = 0, fib2 = 1;
    cin >> n;
	
	if(n == 0){
		cout << 0;
		return 0;
	}

    for(int i = 1; i < n; i++){
        int temp = fib1 + fib2;
        fib1 = fib2;
        fib2 = temp;
    }

    cout << fib2 << endl;
    return 0;
};
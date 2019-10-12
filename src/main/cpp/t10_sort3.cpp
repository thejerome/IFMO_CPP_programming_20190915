//Дано три числа. Упорядочите их в порядке неубывания.
//
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//1
//Sample Output:
//
//1 1 2

#include "t10_sort3.h"
#include <iostream>

using namespace std;

int t10_sort3() {
	int a1, a2, a3, temp;
    cin >> a1 >> a2 >> a3;
	
    if(a2 > a3){
        temp = a3;
        a3 = a2;
        a2 = temp;
    }

    if(a1 > a3){
        temp = a3;
        a3 = a1;
        a1 = temp;
    }

    if(a1 > a2){
        temp = a2;
        a2 = a1;
        a1 = temp;
    }

    cout << a1 << " " << a2 << " " << a3 << endl;
    return 0;
};
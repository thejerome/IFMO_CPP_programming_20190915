//Напишите функцию min(a, b), вычисляющую минимум двух чисел. 
// Затем напишите функцию min4(a, b, c, d), вычисляющую минимум 4 чисел с помощью функции min. 
// Считайте четыре целых числа и выведите их минимум.
//Формат входных данных
//        Вводятся четыре целых числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//4
//5
//6
//7
//Sample Output:
//
//4

#include "t01_min.h"
#include <iostream>


using namespace std;

//function min 

//function min4 
int function_min(int a, int b){
        if(a < b)
            return a;
        else
            return b;
    }
    int function_min4(int a, int b, int c, int d){
        int ans;
        ans = function_min(function_min(function_min(a,b),c),d); 
        return ans;
    }
int t01_min() {
    int a, b, c , d;
    cin >> a >> b >> c >> d;
    cout << function_min4(a,b,c,d);
    return 0;
}

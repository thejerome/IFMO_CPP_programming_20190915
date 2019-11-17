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

int min(int num1,int num2){
    int result1;
    if(num1>num2)
        result1 = num2;
    else
        result1 = num1;
    return result1;
}//function min 

int min4(int num1,int num2,int num3,int num4){
    int result2;
    result2 = min(min(num1,num2),min(num3,num4));
    return result2;
}//function min4 

int t01_min() {
    int num1,num2,num3,num4,min;
    cin>>num1>>num2>>num3>>num4;
    min = min4(num1,num2,num3,num4);
    cout<<min<<endl;
    return 0;
}

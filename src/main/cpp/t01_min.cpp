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
int min(int h1, int h2) {
	if (h1 < h2) return h1;
	else return h2;
}
int min4(int a, int b, int c, int d) {
	int min4 = min(min(a, b), min(c, d));
}
int t01_min() {
	int z1, z2, z3, z4;
	cin >> z1 >> z2 >> z3 >> z4;
	cout << min4(z1,z2,z3,z4);
    return 0;
}

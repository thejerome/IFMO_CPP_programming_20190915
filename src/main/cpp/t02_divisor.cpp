//Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.
//
//Формат входных данных
//        Вводится целое положительное число.
//
//Формат выходных данных
//        Выведите ответ на задачу.
//
//Sample Input:
//
//15
//Sample Output:
//
//3

#include "t02_divisor.h"
#include <iostream>

using namespace std;

int t02_divisor() {
int i,nd,n;
nd = 1;
cin >> n;
i=1;
while ((nd==1)&&(i<n)) {
	i++;
     if (n % i == 0){
     	nd = i;
     };
};
cout << nd;
return 0;
};
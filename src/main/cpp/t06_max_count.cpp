//Последовательность состоит из натуральных чисел и завершается числом 0. Определите, какое количество элементов этой последовательности, равны ее наибольшему элементу.
//
//Формат входных данных
//        Вводится непустая последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//1
//7
//9
//0
//Sample Output 1:
//
//1
//Sample Input 2:
//
//1
//3
//3
//1
//0
//Sample Output 2:
//
//2

#include "t06_max_count.h"
#include <iostream>

using namespace std;

int t06_max_count() {
     int  a,s,d;
     a = 0;
     s = 0;
     cin >> d;
     while(d!=0) {
         if(d>a) {
             a=d;
             s=0;
         }
         if(d==a) {
             s++;
         }
         cin >> d;
     }
     cout << s;
     return 0;
 }
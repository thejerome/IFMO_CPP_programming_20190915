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
     int Z,X,C,V;
     X = 0;
     C = 1;
     V = 0;
     cin >> Z;
     if(Z == 0){
         cout << X;
     }
     if(Z == 1){
         cout << C;
     }
     if(Z > 1){
         while(--Z > 0)
         {
             V = X + C;
             X = C;
             C = V;
         }
         cout << V;
     }
     return 0;
 }
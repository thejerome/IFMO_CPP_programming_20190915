//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m по спирали, выходящей из левого верхнего угла и закрученной по часовой стрелке, как показано в примере.
//Формат входных данных
//        Вводятся два числа n и m, не превышающие 100.
//
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//4 5
//Sample Output:
//
//   1   2   3   4   5
//  14  15  16  17   6
//  13  20  19  18   7
//  12  11  10   9   8

#include "t09_spiral.h"
#include <iostream>


using namespace std;

int t09_spiral() {
 int P,D;
    cin >> P >> D;
    int C[100][100];

      for(int L = 0; L <= P +1 ; L++){
        for(int H = 0; H <= D +1; H++){ C[L][H] = 3;}
      }
     for(int L = 1; L <= P; L++){
        for(int H = 1; H <= D; H++){C[L][H]=-3;}
    }
    int V = 0,R = 1,U=0;
    while (V < P * D){
       while(C[R][U+1]==-3)
       { U++;V++;C[R][U] = V;}
       while(C[R+1][U]==-3)
       { R++;V++;C[R][U] = V;}
       while(C[R][U-1]== -3)
       {U--;V++;C[R][U] = V;}
       while(C[R-1][U]==-3)
       { R--;V++;C[R][U] = V;}
}
        for(int L = 1; L <= P; L++){
        for(int H = 1; H <= D; H++){
        if 
            (C[L][H] %10 == C[L][H] ){cout << "   ";}
        else if 
        (C[L][H] %100 == C[L][H] ){cout << "  ";}
        else  if 
        (C[L][H] %1000 == C[L][H]){cout << "   ";}
        cout << C[L][H];
        }
        cout << endl;
    }
}

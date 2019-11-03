//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”,
// как показано в примере.
//
//Формат входных данных
//        Вводятся два числа n и m, каждое из которых не превышает 30.
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//3 5
//Sample Output:
//
//   1   2   3   4   5
//  10   9   8   7   6
//  11  12  13  14  15

#include "t07_snake.h"
#include <iostream>


using namespace std;

int t07_snake() {
    
    int P,D,S=0;
    cin >> P >> D;
    int C[30][30];
    for(int L = 0; L < P; L++){
        for(int H = 0; H < D; H++){

        S++;
        if (L%2==0)
        { C[L][H]= S;}
        else 
        {C[L][D - H -1]= S;}
        }
    }

    for(int L = 0; L < P; L++){
        for(int H = 0; H < D; H++){
        if (C[L][H]%10==C[L][H])
        {cout << "   ";}
        else if  (C[L][H]%100==C[L][H])
        {cout << "  ";}
        else  if (C[L][H]%1000==C[L][H])
        {cout << " ";}
            cout << C[L][H];
        }
        cout << endl;
    }
}

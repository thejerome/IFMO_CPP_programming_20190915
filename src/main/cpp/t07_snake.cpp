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
#include <iomanip>


using namespace std;

int t07_snake() {
    int n, m;
    cin >> n >> m;
    int k = 0;
    int a[n][m];
    for(int i = 0; i < n; i++){
        
            if(i%2 == 0){
                k++;
                for(int j = 0; j < m; j++)
                    a[i][j] = k+j;
                //cout << setw(4) << k << '*' << endl;
                k--;
            }
            else{
                for(int j = 0; j < m; j++)
                    a[i][j] = k+m-j;
                //cout << k << '*' << endl;
            }
            
        
        k += m;
    }        
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++)
            cout  << a[i][j] << setw(4);
        cout << "\n";
    }
            
    return 0;
}

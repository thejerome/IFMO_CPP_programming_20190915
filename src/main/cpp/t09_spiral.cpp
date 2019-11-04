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
  int n = 0, m = 0, s = 0, h = 0, j = -1, ind = 0;
  cin >> n >> m;
  int a[n][m];
  for (int i = 0; i < n; i++) {for (int k = 0; k < m; k++) {a[i][k] = 0;}}

  while (s < n*m) {
    if (ind == 0) {j++;  while (j < m and (a[h][j]<1 or a[h][j]>n*m)) {s++; a[h][j] = s; j++;} ind = 1;j--;}
        if (s > n*m) {break;}
    if (ind == 1) {h++; while (h < n and (a[h][j]<1 or a[h][j]>n*m)) { s++; a[h][j] = s;h++; } ind = 2;h--;}    
        if (s > n*m) {break;}
    if (ind == 2) {j--; while (j >= 0 and (a[h][j]<1 or a[h][j]>n*m)) {s++; a[h][j] = s;j--;} ind = 3;j++;}    
        if (s > n*m) {break;}
    if (ind == 3) {h--; while (h >= 0 and (a[h][j]<1 or a[h][j]>n*m)) {s++; a[h][j] = s;h--;} ind = 0;h++;}      
    
  }
  for (int i = 0; i < n; i++)
   {
  for (int k = 0; k < m; k++){
  cout << a[i][k]; if(a[i][k] < 10) {cout << "   ";} else {cout << "  ";}
  }
  cout << endl;
   }    
    return 0;
}

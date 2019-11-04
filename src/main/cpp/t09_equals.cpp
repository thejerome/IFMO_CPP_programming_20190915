//Дан массив чисел. Посчитайте, сколько в нем пар элементов, равных друг другу. Считается, что любые два элемента, равные друг другу образуют одну пару, которую необходимо посчитать.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//5
//1 2 3 2 3
//Sample Output 1:
//
//2
//Sample Input 2:
//
//5
//1 1 1 1 1
//Sample Output 2:
//
//10

#include "t09_equals.h"
#include <iostream>


using namespace std;

int t09_equals() {
  int n;
    int k = 0;
  cin >> n;
  int a[n];
  int b[n];
  int c[n];
  int nul = 0;
  for(int i = 0; i < n; i++){
    b[i] = 0;
    c[i] = 0;
  }
  int j;
  for(int i = 0; i < n; i++){
    cin >> a[i];
    if(a[i] != 0){
      for(j = 0; j < n; j++){
        if(a[i] == b[j]){
          c[j]++;
          j = n+1;
        }
      }
      if(j != n+1){
        for(int l = 0; l < n; l++){
          if(b[l] == 0){
            b[l] = a[i];
            c[l]++;
            l = n+2;
          }
        }
      }
    }
    else{
        nul++;
    }
  }
  for(int i = 0; i < n; i++){
      if(b[i] != 0){
          int h = c[i];
          while(h > 1){
              k += h-1;
              h--;
          }
      }
  }
  while(nul > 1){
      k += nul-1;
      nul--;
  }
  cout << k;

}

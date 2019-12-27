//Переставьте соседние элементы массива (A[0] c A[1], A[2] c A[3] и т.д.). Если элементов нечетное число, то последний элемент остается на своем месте.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//5
//1 2 3 4 5
//Sample Output:
//
//2 1 4 3 5

#include "t07_swap.h"
#include <iostream>


using namespace std;

int t07_swap() {
  int qua;
  cin >> qua;
  int *arr = new int[qua];
  int swapper = 0;
  for(int i = 0; i<qua; i++){
    cin >> arr[i];
    if(i+1 < qua){
      swapper = arr[i+1];
      arr[i+1] = arr[i];
      arri[i] = swapper;
      i++;
      cout << arr[i] << " " << arr[i+1] << " ";
    }
    if(i+1 == qua) cout << arr[i];
  }
}

//Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ..., последний элемент переходит на место A[0]).
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
//5 1 2 3 4

#include "t08_cycleswap.h"
#include <iostream>


using namespace std;

int t08_cycleswap() {
  int qua;
  cin >> qua;
  int *arr = new int[qua];
  int swapper = 0;
  for(int i = 0; i<qua; i++){
    cin >> arr[i];
  }
  swapper = arr[qua-1];
    for(int n = qua-1; n >0; n--){
      arr[n] = arr[n-1];
    }
     arr[0] = swapper;
   for(int i = 0; i<qua; i++){
     cout << arr[i] << " ";
   }  
}

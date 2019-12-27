//Дан массив. Выведите те его элементы, которые встречаются в массиве только один раз. Элементы нужно выводить в том порядке, в котором они встречаются в списке.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//6
//1 2 2 3 3 3
//Sample Output 1:
//
//1
//Sample Input 2:
//
//8
//4 3 5 2 5 1 3 5
//Sample Output 2:
//
//4 2 1

#include "t10_unique.h"
#include <iostream>

using namespace std;

int t10_unique() {
  int qua;
  cin >> qua;
  int *arr = new int[qua];
  counter = 0;
  for(int i = 0; i<qua; i++){
    cin >> arr[i];
  }
  for(i = 0; i<qua; i++){
    for(int n = 0; n<qua; n++){
      if(arr[n] == arr[i])  {
           counter++;
      }
      if(counter == 1) cout << arr[i] << " ";
}

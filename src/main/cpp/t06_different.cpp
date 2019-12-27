//Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//6
//1 2 2 3 3 3
//Sample Output:
//
//3

#include "t06_different.h"
#include <iostream>


using namespace std;

int t06_different() {
  int qua;
  cin >> qua;
  int *arr = new int[qua];
  int count = 1;
  for(int i = 0; i<qua; i++){
    cin >> arr[i];
    if(arr[i] != arr[i-1]){
      count ++;
    }
    cout << count;
  }
}

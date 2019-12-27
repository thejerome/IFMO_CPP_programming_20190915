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
    int qua;
  cin >> qua;
  int *arr = new int[qua];
  counter = 0;
  for(int i = 0; i<qua; i++){
    cin >> arr[i];
}
    for(i = 0; i<qua; z++){      
      for(int z = i+1; z < qua; z++){
            if (a[i] == a[z]) counter++; 
        }
      cout << counter;
}

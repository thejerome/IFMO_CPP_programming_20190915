//Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
// Выведите все числа, которые входят как в первый, так и во второй список в порядке возрастания.
//
//Входные данные
//
//Вводится число N - количество элементов первого списка, а затем N чисел первого списка.
//
//Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//3
//1 3 2
//3
//4 3 2
//Sample Output:
//
//2 3

#include "t04_both2.h"
#include <iostream>
#include <set>
using namespace std;

int t04_both2() {

int n, a, m;
cin >> n;
set <int> row;
set <int> common;
for(int i =0; i<n; i++) {
 cin >> a;
row.insert(a);
 }
cin >> m;
for(int i =0; i<m; i++) {
  cin >> a;
 if(row.find(a) != row.end()) {
common.insert(a);}
}for (auto i : common) {cout << i << " ";}
}

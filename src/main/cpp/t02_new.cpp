//Во входной строке записана последовательность чисел через пробел. 
// Для каждого числа выведите слово YES (в отдельной строке), 
// если это число ранее встречалось в последовательности или NO, если не встречалось.
//
//Входные данные
//
//Вводится число N - количество элементов списка, а затем N чисел.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//6
//1 2 3 2 3 4
//Sample Output:
//
//NO
//NO
//NO
//YES
//YES
//NO

#include "t02_new.h"
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int t02_new() {
  int n, i;
    cin >> n;
    set <int> s;
    vector <int> a(n);
    
    for (i = 0; i < n; i++) {
     cin >> a[i];
        if (s.find(a[i]) != s.end()) {
       cout << "YES" << endl;   
     }
     else 
       cout << "NO"  << endl;
    s.insert(a[i]);  
    }
  return 0;    
}

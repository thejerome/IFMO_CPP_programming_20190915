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
using namespace std;

int t02_new() {
    std::set<int> s;
    int num, N;
    int curr_size = 0;
    std::cin >> N;
    while (N > 0){
        std::cin >> num;
        s.insert(num);
        if (s.size() > curr_size){
            std::cout << "NO" << std::endl;
            curr_size++;
        }
        else
            std::cout << "YES" << std::endl;
        N--;
    }
  return 0;    
}

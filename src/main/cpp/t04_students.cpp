//Выведите фамилии и имена учащихся в порядке убывания их среднего балла.
//
//Входные данные
//
//Заданы сначала количество учащихся n, затем n строк, 
// каждая из которых содержит фамилию, имя и три числа 
// (оценки по трем предметам: математике, физике, информатике). 
// Данные в строке разделены одним пробелом. 
// Оценки принимают значение от 1 до 5.
//
//Выходные данные
//
//Необходимо вывести пары фамилия-имя по одной на строке, разделяя фамилию и имя одним пробелом. 
// Выводить оценки не нужно. 
// Если несколько учащихся имеют одинаковые средние баллы, 
// то их нужно выводить в порядке, заданном во входных данных.
//
//Sample Input:
//
//3
//Markov Valeriy 5 5 5
//Sergey Petrov 1 1 1
//Petrov Petr 3 3 3
//Sample Output:
//
//Markov Valeriy
//Petrov Petr
//Sergey Petrov

#include "t04_students.h"
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>

bool va(std::pair<std::pair<std::string, std::string>, int>p1, std::pair<std::pair<std::string, std::string>, int>p2){
    return p1.second > p2.second;
}

using namespace std;

int t04_students() {
  int n, m1,m2,m3;
    std::string name, last_name;
    std::cin >> n;
    std::vector<std::pair<std::pair<std::string, std::string>, int>> v(n);
    while (n>0){

        std::cin >> name;
        std::cin >> last_name;
        std::cin >> m1;
        std::cin >> m2;
        std::cin >> m3;
        v[v.size() - n] = {{name, last_name}, m1 +m2+ m3};
          n--;
    }
    std::stable_sort(v.begin(), v.end(), va);
    for (auto i : v){
        std::cout << i.first.first << " " << i.first.second << "\n";
    }
  return 0;   
}


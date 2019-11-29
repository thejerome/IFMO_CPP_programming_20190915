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
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
struct student{
    string name;
    int sum;
};
bool comp(student a,student b){
    return a.sum > b.sum;
}
int t04_students() {
int n;
    cin >> n;
    vector <student> bas(n);
    for(int i = 0; i < n; i++){
        student temp; string s, t; int a, b, c;
        cin >> s >> t >> a >> b >> c;
        temp.name = s + ' ' + t;
        temp.sum = a + b + c;
        bas[i] = temp;
    }
    stable_sort(bas.begin(),bas.end(),comp);
    for(auto i:bas)
        cout << i.name << '\n';
    return 0;
}

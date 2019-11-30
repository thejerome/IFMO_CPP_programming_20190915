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
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

struct smth {
    string name, surname;
    double p;
};

int t04_students() {
    int n;
    cin >> n;
    vector <smth> v(n);
    for (int i = 0; i < n; i++) {
        string str1, str2;
        double a, b, c;
        cin >> str1 >> str2 >> a >> b >> c;
        smth temp;
        temp.name = str1;
        temp.surname = str2;
        temp.p = (a + b + c) / 3;
        v[i] = temp;
    }
    sort(v.begin(), v.end(), [](smth x, smth y) { return x.p > y.p; });
    for (auto now : v) {
        cout << now.name << " " << now.surname << endl;
    }
}

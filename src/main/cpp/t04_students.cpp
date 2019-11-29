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
#include <string>
#include <algorithm>

using namespace std;
struct garbage {
    string name, surname;
    double k;
};
bool mark (garbage one, garbage two){
    return (one.k > two.k);
}

int t04_students() {
    int N;
    cin >> N;
    vector <garbage> qwe(N);
    for (int i = 0; i < N; i++){
        string n1, n2;
        double q, w, e;
        cin >> n1 >> n2 >> q >> w >> e;
        garbage ballast;
        ballast.name = n1;
        ballast.surname = n2;
        ballast.k = (q + w + e) / 3;
        qwe[i] = ballast;
    }
    sort(qwe.begin(), qwe.end(), mark);
    for (auto subject : qwe){
        cout << subject.name << subject.surname << endl;
    }
}

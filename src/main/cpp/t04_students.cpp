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
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

struct man{
    string first_name;
    string last_name;
    int mas[3];
};

int t04_students() {
    int n=0;
    cin>>n;
    vector <man> my_vec;
    for (int i=0; i<n; i++){
        man t;
        cin>>t.first_name;
        cin>>t.last_name;
        cin>>t.mas[0];
        cin>>t.mas[1];
        cin>>t.mas[2];
        my_vec.push_back(t);
    }

    sort(my_vec.begin(),my_vec.end(), [](man a, man b)
    {
        return (a.mas[0]+a.mas[1]+a.mas[2])/3.0 > (b.mas[0]+b.mas[1]+b.mas[2])/3.0;
    });

    for (int i=0; i<n; i++){
        cout<<my_vec[i].first_name<<" "<<my_vec[i].last_name<<" ";
    }

}


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

using namespace std;

struct stud{
    string fname;
    string lname;
    double x;
    double y;
    double z;
};

bool comp(stud &lhs, stud &rhs){
    double q=(lhs.x + lhs.y + lhs.z)/3;
    double w=(rhs.x + rhs.y + rhs.z)/3;
    return q>w;
}

int t04_students() {
    vector<stud> nums;
    stud s{};
    int N;
    cin >> N;
    for (int i = 0; i < N; ++i) {
        nums.push_back(s);
        cin >> nums.at(i).fname >> nums.at(i).lname >> nums.at(i).x >> nums.at(i).y >> nums.at(i).z;
    }
    sort(nums.begin(), nums.end(), comp);
    for (const auto& i: nums)
        cout << i.fname << " " << i.lname << endl;
    return 0;
}


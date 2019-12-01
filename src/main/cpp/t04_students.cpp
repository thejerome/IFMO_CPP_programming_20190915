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
#include <map>
#include <vector>

using namespace std;

int t04_students() {
int N,z1,z2,z3;
string x,y;
float distance;
multimap<float,int> point;
vector<string> xy;
cin >> N;
for(int i=0; i<N; i++){
    cin >> x>>y>>z1>>z2>>z3;
    xy.push_back(x);
    xy.push_back(y);
    distance=(z1+z2+z3)/3-i*0.01;
    point.insert(pair<float,int>(distance,i));
}
for (auto it = point.end(); it != point.begin();){
    --it;
    cout << xy[2*(*it).second] << " " <<  xy[2*(*it).second+1]<< " ";
}
    return 0;
}

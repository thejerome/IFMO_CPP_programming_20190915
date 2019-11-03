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

using namespace std;

        bool cmp_t04(const pair <int,int> x,const pair <int,int> y){
            return (x.first > y.first) or (x.first == y.first and x.second < y.second);
        }

int t04_students() {
            int n;
            cin>>n;
            pair <int,int> score[n + 1];
            string s[2][n + 1];
            for(int i = 0;i < n;++i){
                cin>>s[0][i]>>s[1][i];
                int x,y,z;
                cin>>x>>y>>z;
                score[i].first = x + y + z;
                score[i].second = i;
            }
            sort(score,score + n,cmp_t04);
            for(int i = 0;i < n;++i){
                int j = score[i].second;
                cout<<s[0][j]<<' '<<s[1][j]<<'\n';
            }
}


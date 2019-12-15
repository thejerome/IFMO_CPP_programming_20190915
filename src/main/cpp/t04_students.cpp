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
using namespace std;
struct Stud{
    string z;
    string x;
    int p;
    int pp;
    int ppp;

};
int SOSTU (Stud PER1, Stud PER2)
{
    int BRW1 = PER1.p+PER1.pp+PER1.ppp;
    int BRW2 = PER2.p+PER2.pp+PER2.ppp;
    return (BRW1 > BRW2);
}
int t04_students(){
    int O = 0;
    int Q;
    cin >> Q;
    vector <Stud> TAb(Q);
    for(int y = O; y < Q;y++)
    {
        cin >> TAb[y].z >> TAb[y].x;
        cin >> TAb[y].p >> TAb[y].pp >> TAb[y].ppp;
    }
    sort(TAb.begin(), TAb.end(),SOSTU);
    for(int y = O;y < Q;y++)cout << TAb[y].z << " " << TAb[y].x << "\n";
    return 0;
}

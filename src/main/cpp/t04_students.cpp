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

using namespace std;
struct PR
{
    string NM;string FAM;int B1;int B2;int B3;
};
int SR(PR S1,PR S2)
{
   int BSR1= S1.B1+S1.B2+S1.B3;
   int BSR2= S2.B2+S2.B2+S2.B3;
   return BSR1 > BSR2 ? 1:0;
}
int t04_students() {
    int D;
cin >> D;
vector<PR> DB(D);
for(int L = 0;L < D;L++)
{cin >> DB[L].FAM >> DB[L].NM ;
 cin >> DB[L].B1 >> DB[L].B2 >> DB[L].B3;}
sort(DB.begin(), DB.end(),SR);
for(int L = 0;L < D;L++)
{cout << DB[L].FAM << " " << DB[L].NM << "\n";}
}


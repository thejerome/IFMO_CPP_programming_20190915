//Вам дан словарь, состоящий из пар слов. 
// Каждое слово является синонимом к парному ему слову. 
// Все слова в словаре различны. 
// Для одного данного слова определите его синоним.
//
//Входные данные
//
//Программа получает на вход количество пар синонимов N. 
// Далее следует N строк, каждая строка содержит ровно два слова-синонима. 
// После этого следует одно слово.
//
//Выходные данные
//
//Программа должна вывести синоним к данному слову.
//
//Sample Input:
//
//3
//Hello Hi
//Bye Goodbye
//List Array
//Goodbye
//
//Sample Output:
//
//Bye

#include "t05_syn.h"
#include <iostream>
#include <map>


using namespace std;

int t05_syn() {
int D;
 string FS,CS;
 cin >> D;
    map <string, string> C;
    for(int L = 0; L < D; L++) {
        cin >> FS;
		cin >> CS;
        C.insert(pair<string,string>(FS,CS));
        }
    cin >> CS;
    for(auto L : C)
    {if(L.second == CS )
        {cout << L.first;break;}
        else if (L.first == CS)
        {cout << L.second;break;}
    }
}

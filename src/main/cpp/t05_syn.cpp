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
    int a;
    cin >> a;
    string q;
    string w;
    string r;

    map <string, string> z, x;

    for (int i = 0; i<a; i++)
    {
        cin >> w >> q;
        z[w] = q;
        x[q] = w;
    }

    cin>> r;

    map <string, string>::iterator it;
    if ((it = z.find(r)) != z.end())
    {
        cout << it->second;
    }
    else if ((it = x.(r)) != x.end())
    {
        cout << it->second;
    }

    return 0;
}


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
#include <set>


using namespace std;

int t05_syn() {
    set <int> a1;
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; i++)
    {
        int x1;
        cin >> x1;
        a1.insert(x1);
    }
    set <int> a2;
    set <int> a3;
    cin >> n;
    for (int i = 0 ; i < n ; i++)
    {
        int x2;
        cin >> x2;
        a2.insert(x2);
        if (a1.find(x2) != a1.end())
            a3.insert(x2);
    }
    for (auto now : a3)
        cout << now << ' ';
}

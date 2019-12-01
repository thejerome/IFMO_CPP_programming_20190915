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
    int n=0;
    cin >>n;
    map <string, string> voc;
    pair<string, string> p1, p2;
    string st;
    for (int i=0; i<n; i++){
        cin >>st;
        p1.first = st;
        p2.second = st;
        cin >>st;
        p1.second = st;
        p2.first = st;
        voc.insert(p1);
        voc.insert(p2);
    }
    cin >>st;
    string smth = voc.find(st)->second;
    cout <<smth;
    return 0;
}

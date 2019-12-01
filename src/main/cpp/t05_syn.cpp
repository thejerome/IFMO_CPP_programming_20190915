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
#include <string>
#include <map>



using namespace std;

int t05_syn() {
    int N;
    cin >> N;
    map<string,string> m;
    for (int i = 0; i < N; ++i) {
        string str1,str2;
        cin >> str1 >> str2;
        m[str1]=str2;
    }
    string s;
    cin >> s;
    for (auto w : m) {
        if (w.first == s) {
            cout << w.second;
        }
        if (w.second == s) {
            cout << w.first;
        }
    }
}

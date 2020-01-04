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
#include <string.h>

using namespace std;

int t05_syn() {
    map <string,string> slovarb;
    string s,s1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        cin >> s1;
        slovarb[s] = s1;
        slovarb[s1] = s;
    };
    cin >> s;
    cout << slovarb[s];
    return 0;
}

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
    int N;
    map <string, string> pair;
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        string s1;
        string s2;
        cin >> s1 >> s2;
        pair.emplace(s1, s2);//deletable comm for codacy
        pair.emplace(s2, s1);
    }
    string s;
    cin >> s;
    cout << pair[s];
    return 0;

}

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
    cin >> N;
    map <string, string> words;
    string word1, word2;
    for (int i = 0; i < N; ++i) {
        cin >> word1 >> word2;
        words[word1]=word2;
        words[word2]=word1;
    }
    string word0;
    cin >> word0;

    map<string, string>::iterator it = words.find(word0);
    if (it != words.end()){
        cout << it->second;
    }
    return 0;
}

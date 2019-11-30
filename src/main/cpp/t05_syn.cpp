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
#include <string>

using namespace std;

int t05_syn() {
int n;
cin>>n;
string a,b,c;
map <string,string> x,xx;
for (int i=0;i<n;i++){
cin>>b>>a;
x[b]=a;
xx[a]=b;
}
cin>>c;
map <string, string>::iterator f;
if ((f=x.find(c))!=x.end()){
cout<<f->second;
}
else if ((f=xx.find(c))!=xx.end()){
cout<<f->second;
}
return 0;
}

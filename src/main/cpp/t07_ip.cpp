//В сети интернет каждому компьютеру присваивается четырехбайтовый код,
// который принято записывать в виде четырех чисел,
// каждое из которых может принимать значения от 0 до 255, разделенных точками.
// Вот примеры правильных IP-адресов:
//127.0.0.0
//192.168.0.1
//255.0.255.255
//Напишите программу, которая определяет, является ли заданная строка правильным IP-адресом.
//
//Входные данные
//
//Программа получает на вход строку из произвольных символов.
//
//Выходные данные
//
//Если эта строка является корректной записью IP-адреса, выведите YES, иначе выведите NO.
//
//Примечание
//
//Для перевода из строки в число удобно пользоваться функцией stoi,
// которая принимает на вход строку, а возвращает число.
//
//Sample Input:
//
//127.0.0.1
//Sample Output:
//
//YES

#include "t07_ip.h"
#include <iostream>
#include<string>


using namespace std;

int t07_ip() {
string str,sub;
int probel=0;
bool flag=false;
getline(cin,str);
for(int i=0;i<str.length();i++)
{
  if(str[i]=='.'){
    if(probel==0)sub=str.substr(probel,i-probel);
    else sub=str.substr(probel+1,i-probel-1);
    if(i==str.length()-1)
    {
      sub=str.substr(probel+1,i-probel+1);
    }
    int number=stoi(sub,nullptr);
    if(number>=0 && number<=255)flag=true;
    else {flag=false;break;}
  }
}
if(flag)cout<<"YES";
else cout<<"NO";
}

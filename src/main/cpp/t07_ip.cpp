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
#include <string>

using namespace std;

int t07_ip() {
    string s;
    cin >> s;
    int dot1=0,dot2=0,dot3=0,dot4=0;
    bool k1=false,k2=false,k3=false,k4=false;
    dot1=s.find('.');
    dot2=s.find('.',dot1+1);
    dot3=s.find('.',dot2+1);
    dot4=s.find('.',dot3+1);
    if (dot3!=-1 && dot4==-1 && s.find('-')==s.npos) {
        int t=0;
        for (int i=0;i<dot1;++i){
            t=t*10+(s[i]-'0');
        }
        if (t<256 && t>=0) {
            k1=true;
        }
        t=0;
        for (int i=dot1+1;i<dot2;++i){
            t=t*10+(s[i]-'0');
        }
        if (t<256 && t>=0) {
            k2=true;
        }
        t=0;
        for (int i=dot2+1;i<dot3;++i){
            t=t*10+(s[i]-'0');
        }
        if (t<256 && t>=0) {
            k3=true;
        }
        t=0;
        for (int i=dot3+1;i<s.length();++i){
            t=t*10+(s[i]-'0');
        }
        if (t<256 && t>=0) {
            k4=true;
        }
    }
    if (k1 && k2 && k3 && k4) {
    cout << "YES";
    } else cout << "NO";
}

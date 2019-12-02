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


using namespace std;

int t07_ip() {
short dots = 0;
string ip = "", currnum = "";
getline(cin, ip);
for (int i = 0; i <= ip.length(); i++)
{
    if (ip[i] != '.' && i != ip.length())
    {
        currnum += ip[i];
    }
    else if (currnum != "")
    {
        if (stoi(currnum) > 255 || stoi(currnum) < 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    if (ip[i] == '.'){
        dots += 1;
        currnum = "";
    }
    
}
if (dots == 3)
{
    cout << "YES" << endl;
}
else
{
    cout << "NO" << endl;
}
return 0;
}

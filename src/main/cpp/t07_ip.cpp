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

    string a;
    cin >> a;
    int DotCount = 0;
    int Numbers [4];
    bool IsIp = true;

    for (int i = 0; i < 4; i++) {
        Numbers[i] = -1;
    }

    if (a[0] == '.') IsIp = false;
        else Numbers [0] = stoi (a);

    for (int i = 0; i < a.length(); i++) {
        if (a[i] == '.') {
            for (int j = 1; j < 4; j++) {
                if (Numbers[j] == -1) {
                    string b;

                    for (int k = (i + 1); k < a.length(); k++) b += a[k];

                    if (b[0] == '.') IsIp = false;
                    else Numbers [j] = stoi (b);

                    break;
                }
            }
            DotCount++;
        }
    }

    for (int i = 0; i < 4; i++) {
        if (Numbers[i] > 255 || Numbers [i] < 0) IsIp = false;
    }

    if (DotCount != 3) IsIp = false;

    if (IsIp) cout << "YES";
    else cout << "NO";
}

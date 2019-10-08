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

            string id;
            cin>>id;
            int l = -1;
            id = id + ".";
            int cnt = 0;
            while(id.find(".",l + 1) != string::npos){
                int r = id.find(".",l + 1);
                if(r - l - 1 > 0){
                    int val = 0;
                    for(int j = l + 1;j < r;++j){
                        val = val * 10 + (id[j] - '0');
                    }
                    if(!(0 <= val and val <= 255)){
                        cout<<"NO";
                        exit(0);
                    }
                } else {
                    cout<<"NO";
                    exit(0);
                }
                l = r;
                ++cnt;
            }
            cout<<(cnt == 4 ? "YES" : "NO");
}

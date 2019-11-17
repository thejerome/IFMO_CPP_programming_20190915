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
	int p1, p2, p3, p4;
    int cou = 0;
    int pos = 0;
    int arr[4];
    for(int i = 0; i < 4; i++)
        arr[i] = -1;

    p1 = p2 = p3 = p4 = -1;
    string s;
    getline(cin, s);

    while((int)s.find(".", pos) > -1){
        int pos2;
        pos2 = s.find(".", pos);

       try{
        	arr[cou] = stoi(s.substr(pos, pos2 - pos));
       }catch(exception e){
            cout << "NO";
            return 0;
       }

        cou++;
        pos = pos2 + 1;
    }
    
    if(arr[3] != -1){
        cout << "NO";
        return 0;
    }

    try{
    	arr[3] = stoi(s.substr(pos));
    }catch(exception e){
        cout << "NO";
        return 0;
    }

    bool is = 1;

    for(int i = 0; i < 4; i++)
        if(!(arr[i] < 256 && arr[i] > -1)){
            is = 0;
            break;
        }

    if(is)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

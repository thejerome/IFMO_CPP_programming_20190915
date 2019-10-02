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
    getline(cin, s);
    bool IP=true;
    string number;
    int count_number=0;

    for(int i=0; i<s.length(); i++ ){

        if(s[s.length()-1] =='.'){
            IP=false;
            break;
        }
        if( s[i]!='.' ){
            number+= s[i];
            if(i== s.length()-1){
                if(number!="" && stoi(number)>=0 && stoi(number)<=255 ) {
                    count_number++;
                }
                else{
                    IP= false;
                }
            }
        }
        else{
            if( number!="" && stoi(number)>=0 && stoi(number)<=255 ){
                count_number++;
                number= "";
            }
            else{
                IP= false;
                break;
            }
        }
    }

    if( count_number==4 && IP)
        cout<<"YES";
    else
        cout<<"NO";

}

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
    string ip, str;
    getline(cin, ip);
    int z=0, y;
    for (int i = 0; i < ip.length(); i++){
      if (ip[i] == '.'){
        if (str != "") {
        	y=stoi(str);
            z++;
        }
        if ((z > 3) || (y < 0) || (y > 255) || (str == "")){
            z = 0;
            break;
        }
        else {
        	str = "";
        	}
    }else {
    	str= str + ip[i];}
    	
}
if (z == 3){
	cout <<"YES";
}
else{
	cout <<"NO";
}
}

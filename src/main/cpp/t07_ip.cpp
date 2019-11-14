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
	string h, number = "";
	bool pass = true, num = true;
	int numofpoints = 0;
	int numofnumbers = 0;
	cin >> h;
	for (int i = 0; i < h.size(); i++)
	{
		if (h[i] == '.' && num ==false)
		{
			if (stoi(number) > 255)
			{

				pass = false;
				break;
			}
			if (!num)
			{
				num = true;
				numofpoints++;
			}
			number = "";
		}
		else if (((int)h[i] < 48 || (int)h[i] > 57) || ((h[i] == h[i + 1]) && h[i] == '.'))
		{
			pass = false;
			break;
		}
		else if ((int)h[i] >= 48 || (int)h[i] <= 57)
		{
			number += h[i];
			if (num)
			{
				num = false;
				numofnumbers++;
			}
		}
	}
	if (pass == true && numofnumbers == 4 && numofpoints == 3)
		cout << "YES";
	else
		cout << "NO";
}

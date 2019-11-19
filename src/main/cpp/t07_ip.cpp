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
#include <cstring>

using namespace std;
bool isIPAddressValid(const char* pszIPAddr)
{
    if (!pszIPAddr) return false;
    char IP1[100],cIP[4];
    int len = strlen(pszIPAddr);
    int i = 0,j=len-1;
    int k, m = 0,n=0,num=0;
    while (pszIPAddr[i++] == ' ');
    while (pszIPAddr[j--] == ' ');
    for (k = i-1; k <= j+1; k++)
    {
        IP1[m++] = *(pszIPAddr + k);
    }
    IP1[m] = '\0';
    char *p = IP1;
    while (*p!= '\0')
    {
        if (*p == ' ' || *p<'0' || *p>'9') return false;
        cIP[n++] = *p;
        int sum = 0;
        while (*p != '.'&&*p != '\0')
        {
            if (*p == ' ' || *p<'0' || *p>'9') return false;
            sum = sum * 10 + *p-48;
            p++;
        }
        if (*p == '.') {
            if ((*(p - 1) >= '0'&&*(p - 1) <= '9') && (*(p + 1) >= '0'&&*(p + 1) <= '9'))
                num++;
            else
                return false;
        };
        if ((sum > 255) || (sum > 0 && cIP[0] =='0')||num>3) return false;

        if (*p != '\0') p++;
        n = 0;
    }
    if (num != 3) return false;
    return true;
}
int t07_ip() {
    char IP[100];
    cin >> IP;
    bool tf = isIPAddressValid(IP);
    if(tf == 1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}

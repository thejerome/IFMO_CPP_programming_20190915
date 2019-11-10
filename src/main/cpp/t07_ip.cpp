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
#include <vector>
#include <string>

using namespace std;

int t07_ip() {
  string s, x1, x2, x3, x4;
    bool b = 1;
    char c;
    getline(cin, s);
    int i, j, pointcount = 0, length, y1, y2, y3, y4;
     vector <int> pointid(3);
     for (i = 0; i < s.size(); i++) {
         if (s[i] == '.') {
             pointid[pointcount] = i;
             pointcount++;
         }
     } 
    if (pointcount != 3) {
        cout << "NO";
    }
    
    else {
   x1 = s.substr(0, pointid[0]);                              
   x2 = s.substr(pointid[0]+1, pointid[1]-pointid[0]-1);    
   x3 = s.substr( pointid[1]+1, pointid[2]-pointid[1]-1);     
   x4 = s.substr( pointid[2]+1, s.size()-pointid[2]-1);         
 //-------------------------       
        for (auto c: x1) {
         if (c < '0' || c > '9') {
             b = 0;
             break;
         }
        }
        for (auto c: x2) {
         if (c < '0' || c > '9') {
             b = 0;
             break;
         }
        }
        for (auto c: x3) {
         if (c < '0' || c > '9') {
             b = 0;
             break;
         }
        }
        for (auto c: x4) {
         if (c < '0' || c > '9') {
             b = 0;
             break;
         }
       }
    //-----------------------      
 if (!b || pointid[0] * (pointid[1]-pointid[0]-1) * (pointid[2]-pointid[1]-1) * (s.size()-pointid[2]-1) == 0) {
       cout << "NO";   
      }
      else {
        y1 = stoi(x1);   
        y2 = stoi(x2);
        y3 = stoi(x3);
        y4 = stoi(x4); 
        if ( y1<0 || y1>255 || y2<0 || y2>255 || y3<0 || y3>255 || y4<0 || y4>255) {
         cout << "NO";  
        }
          else {
           cout << "YES";   
          }
      }
   }
  return 0;
}

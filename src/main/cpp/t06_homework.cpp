//Учительница задала Пете домашнее задание — в заданном тексте расставить ударения в словах, 
// после чего поручила Васе проверить это домашнее задание. 
// Вася очень плохо знаком с данной темой, поэтому он нашел словарь, 
// в котором указано, как ставятся ударения в словах. 
// К сожалению, в этом словаре присутствуют не все слова. 
// Вася решил, что в словах, которых нет в словаре, он будет считать, 
// что Петя поставил ударения правильно, если в этом слове Петей поставлено ровно одно ударение.
//
//Оказалось, что в некоторых словах ударение может быть поставлено больше, чем одним способом. 
// Вася решил, что в этом случае если то, как Петя поставил ударение, 
// соответствует одному из приведенных в словаре вариантов, 
// он будет засчитывать это как правильную расстановку ударения, 
// а если не соответствует, то как ошибку.
//
//Вам дан словарь, которым пользовался Вася и домашнее задание, сданное Петей. 
// Ваша задача — определить количество ошибок, которое в этом задании насчитает Вася.
//
//Входные данные
//
//Вводится сначала число N — количество слов в словаре (0 ≤ N ≤ 20000).
//
//Далее идет N строк со словами из словаря. Каждое слово состоит не более чем из 30 символов. 
// Все слова состоят из маленьких и заглавных латинских букв. 
// В каждом слове заглавная ровно одна буква — та, на которую попадает ударение. 
// Слова в словаре расположены в алфавитном порядке. 
// Если есть несколько возможностей расстановки ударения в одном и том же слове, 
// то эти варианты в словаре идут в произвольном порядке.
//
//Далее идет упражнение, выполненное Петей. Упражнение представляет собой строку текста, 
// суммарным объемом не более 300000 символов. Строка состоит из слов, 
// которые разделяются между собой ровно одним пробелом. 
// Длина каждого слова не превышает 30 символов. 
// Все слова состоят из маленьких и заглавных латинских букв 
// (заглавными обозначены те буквы, над которыми Петя поставил ударение). 
// Петя мог по ошибке в каком-то слове поставить более одного ударения или не поставить ударения вовсе.
//
//Выходные данные
//
//Выведите количество ошибок в Петином тексте, которые найдет Вася.
//
//Примечание к примеру
//
//
//1. В слове cannot, согласно словарю возможно два варианта расстановки ударения. 
// Эти варианты в словаре могут быть перечислены в любом порядке 
// (т.е. как сначала cAnnot, а потом cannOt, так и наоборот).
//Две ошибки, совершенные Петей — это слова be (ударение вообще не поставлено) 
// и fouNd (ударение поставлено неверно). Слово thE отсутствует в словаре, 
// но поскольку в нем Петя поставил ровно одно ударение, признается верным.
//
//2. Неверно расставлены ударения во всех словах, кроме The (оно отсутствует в словаре,
// в нем поставлено ровно одно ударение). В остальных словах либо ударные все буквы (в слове PAGE),
// либо не поставлено ни одного ударения.
//
//
//Sample Input 1:
//
//4
//cAnnot
//cannOt
//fOund
//pAge
//thE pAge cAnnot be fouNd
//
//Sample Output 1:
//
//2
//
//Sample Input 2:
//
//4
//cAnnot
//cannOt
//fOund
//pAge
//The PAGE cannot be found
//Sample Output 2:
//
//4

#include "t06_homework.h"
#include <iostream>
#include <string>
#include <set>

using namespace std;
string frase;
set<string> arr;
int j=0;
int count_accent=0;
void division() {
int n=frase.length();
string word, maxword;
for (int i=0; i<n;i++){
    if (frase[i] !=' '){
        word=word+frase[i];}
    else {
        arr.insert(word);
        j++;
        word="";
    };
};
arr.insert(word);
j++;
}

string upper(string s){
for (basic_string<char>::iterator p = s.begin();p != s.end(); ++p) {
    *p = toupper(*p); 
}
return s;
}
void countaccent(string s){
    count_accent=0;
    for (basic_string<char>::iterator p = s.begin();p != s.end(); ++p) {
        if ((*p>='A') and (*p<='Z')) count_accent++; 
    }
}

int t06_homework() {
int N, count=0;
string n,str="";
bool indictionary;
set<string>words;
cin>> N;
for(int i=0; i<N; i++){
    cin >> n;
    words.insert(n);
}
while (str=="") getline(cin,str);
frase=str;
division();
set <string> :: iterator it1 = arr.begin();
for (int i = 1; it1 != arr.end(); i++, it1=it1+1){
    indictionary=false;
    bool accent=false;
    set <string> :: iterator it2 = words.begin();
    for (int j = 1; it2 != words.end(); j++, it2=it2+1){
        if (upper(*it1)==upper(*it2)) {
            indictionary=true;
        } 
        if((*it1)==(*it2)){
            accent=true;
        }
    }
    if (indictionary and not(accent)) count++;
    countaccent(*it1);
    if ((count_accent != 1) and not(indictionary)) count++;
}
cout << count-1;
}

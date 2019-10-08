//Переведите символ в верхний регистр.
//
//Входные данные
//
//Вводится единственый символ.
//
//Выходные данные
//
//Если введеный символ является строчной буквой латинского алфавита, 
// то выведите такую же заглавную букву. 
// В противном случае выведите тот же символ, который был введен.
//
//Sample Input:
//
//b
//        Sample Output:
//
//B

#include "t02_up.h"
#include <iostream>
#include <string>

using namespace std;

int t02_up() {
            char ch;
            cin>>ch;
            if('A' <= ch and ch <= 'Z'){
                cout<<ch;
            } else if('a' <= ch and ch <= 'z'){
                ch -= 32;
                cout<<ch;
            } else {
                cout<<ch;
            }
}

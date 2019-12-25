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


using namespace std;

int t02_up() {
    
    char symb;
    cin >> symb;
    if (symb >= 'a' && symb <= 'z') {
        char s2;
        int d = symb - 'a';
        symbol2 = 'A' + d;
        cout << symbol2;
    } 
    else {
        cout << symb;\
    }
}


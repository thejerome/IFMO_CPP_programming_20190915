//В обувном магазине продается обувь разного размера. 
// Известно, что одну пару обуви можно надеть на другую, 
// если она хотя бы на три размера больше. 
// В магазин пришел покупатель. 
// Требуется определить, какое наибольшее количество пар обуви сможет предложить ему продавец так,
// чтобы он смог надеть их все одновременно.
//
//Входные данные
//
//Сначала вводится размер ноги покупателя 
// (обувь меньшего размера он надеть не сможет),
// затем количество пар обуви в магазине и размер каждой пары.
// Размер — натуральное число, не превосходящее 100, 
// количество пар обуви в магазине не превосходит 1000.
//
//Выходные данные
//
//Выведите единственное число — максимальное количество пар обуви.
//
//Sample Input:
//
//26
//5
//30 35 40 41 42
//Sample Output:
//
//3

#include "t02_shoes.h"
#include <iostream>


using namespace std;

int t02_shoes() {
    int sizel , kolv ;
    cin >> sizel ;
    int quan,s[quan] ;
    cin >> quan;
    for (int i = 0 ;i < quan; i++) {
        cin >> s[i];
        if (sizel == s[i]) kolv++;
    }
    for (int j = 0; j < quan; j++) {
        if ( ( s[j] - sizel ) >=3 ){
            sizel = s[j];
            kolv++;
        }
    }
    cout << kolv;
    return 0;
}

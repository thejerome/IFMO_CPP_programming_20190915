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
#include <algorithm>
#include <vector>


using namespace std;

int t02_shoes() {
    int c_size, n, counter = 0;
    bool not_found = true;
    cin >> c_size >> n;
    vector <int> array(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    sort(array.begin(), array.end());
    int i = 0;
    for(i; i < n and not_found; i++) {
        if (array[i] >= c_size) {
            c_size = array[i];
            not_found = false;
            counter++;
        }
    }
    if (not_found) i = 0;
    for (i; i < n; i++) {
        if (array[i] - 3 >= c_size) {
            c_size = array[i];
            counter++;
        }
    }
    cout << counter;
    return 0;
}

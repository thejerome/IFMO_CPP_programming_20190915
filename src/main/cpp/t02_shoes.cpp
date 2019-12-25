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
#include <vector>
#include <algorithm>
using namespace std;

int t02_shoes() {
    int n, initial_size, counter = 0;
    cin >> initial_size >> n;
    int courrent_size = initial_size;
    vector<int> shoes(n);
    for(auto & i : shoes)cin >> i;
    sort(shoes.begin(), shoes.end());
    for(auto & i : shoes){
        if(initial_size == courrent_size && i >= initial_size)
        {
            counter++;
            courrent_size = i;
        }
        else if (initial_size != courrent_size)if (i >= initial_size + 3){
            counter++;
            courrent_size = i;
        }
    }
    cout << counter;
    return 0;
}

//Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
// Выведите все числа, которые входят как в первый, так и во второй список в порядке возрастания.
//
//Входные данные
//
//Вводится число N - количество элементов первого списка, а затем N чисел первого списка.
//
//Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//3
//1 3 2
//3
//4 3 2
//Sample Output:
//
//2 3

#include "t04_both2.h"
#include <iostream>
#include <set>

using namespace std;

int t04_both2() {
    set <int>z;
    set <int>z2;
    set <int>z1;
    int q;
    int w;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        int a;
        cin >> a;
        z.insert(a);
    }
    cin >> w;
    for(int i = 0; i < w; i++)
    {
        int a;
        cin >> a;
        z1.insert(a);
        if(z.find(a) != z.end()) {
            z2.insert(a);
        }
    }
    set <int>::iterator j;
    for(j = z2.begin(); j != z2.end(); j++)
        cout << *j << ' ';
}
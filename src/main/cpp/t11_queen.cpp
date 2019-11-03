//Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. Вам дана расстановка 8 ферзей на доске, определите, есть ли среди них пара бьющих друг друга.
//Формат входных данных
//
//        Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.
//Формат выходных данных
//        Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.
//Sample Input 1:
//
//1 7
//2 4
//3 2
//4 8
//5 6
//6 1
//7 3
//8 5
//Sample Output 1:
//
//NO
//        Sample Input 2:
//
//1 8
//2 7
//3 6
//4 5
//5 4
//6 3
//7 2
//8 1
//Sample Output 2:
//
//YES

#include "t11_queen.h"
#include <iostream>
#include <cmath>


using namespace std;

struct queen{
    int x, y;
};

int t11_queen() {
	int n = 8, cou = 0;
    queen arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i].x >> arr[i].y;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j)
                continue;

            bool is;
            int r1, r2;

            r1 = arr[j].x - arr[i].x;
            r2 = arr[j].y - arr[i].y;

            if(r1 * r1 == r2 * r2)
                is = 1;

            if(arr[i].x == arr[j].x || arr[i].y == arr[j].y)
                is = 1;

            if(is)
                cou++;
        }
    }

    if(cou)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
//    cout << cou;

//    for(int i = 0; i < n; i++)
//        cout << arr[i] << " ";

    return 0;
}

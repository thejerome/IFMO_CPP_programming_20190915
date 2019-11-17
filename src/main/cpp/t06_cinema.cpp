//В кинотеатре n рядов по m мест в каждом (n и m не превосходят 20). 
// В двумерном массиве хранится информация о проданных билетах, число 1 означает, 
// что билет на данное место уже продан, число 0 означает, что место свободно. 
// Поступил запрос на продажу k билетов на соседние места в одном ряду. 
// Определите, можно ли выполнить такой запрос.
//
//Формат входных данных
//        Программа получает на вход числа n и m. Далее идет n строк, содержащих m чисел (0 или 1), разделенных пробелами. Затем дано число k.
//Формат выходных данных
//        Программа должна вывести номер ряда, в котором есть k подряд идущих свободных мест. 
// Если таких рядов несколько, то выведите номер наименьшего подходящего ряда. 
// Если подходящего ряда нет, выведите число 0.
//
//Sample Input:
//
//3 4
//0 1 0 1
//1 0 0 1
//1 1 1 1
//2
//Sample Output:
//
//2

#include "t06_cinema.h"
#include <iostream>


using namespace std;

int t06_cinema() {
    short n = 0, m = 0;
    cin >> n >> m;
    const short visota = n;
    const short shirina = m;
    bool mass[visota][shirina];
    for (int i = 0; i < visota; i++)
    {
        for (int j = 0; j < shirina; j++)
        {
            bool zn = 0;
            cin >> zn;
            mass[i][j] = zn;
        }
    }
    short iskomiy_ryad = 0;
    short kol_mest = 0;
    cin >> kol_mest;
    for (int i = 0; i < visota; i++)
    {
        short shcet = 0;
        for (int j = 0; j < shirina; j++)
        {
            if (!mass[i][j])
            {
                shcet++;
            }
            else
            {
                shcet = 0;
            }

            if (shcet == kol_mest)
            {
                cout << i+1 << endl;
                return 0;
            }
            
        }
        
    }
    cout  << 0 << endl;
    return 0;
}

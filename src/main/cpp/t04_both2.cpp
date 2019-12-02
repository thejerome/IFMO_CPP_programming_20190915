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

int t04_both2()
{
        int N;
        int M;
        int numb = 0;
        int counter = 0;
        set <int> list1;
        set <int> list2;
        cin >> N;
        for(int i = 0; i < N; i++)
        {
            cin >> numb;
            list1.insert(numb);
        }
        cin >> M;
        for(int i = 0; i < M; i++)
        {
            cin >> numb;
            if (list1.count(numb) != 0)
            {
                list2.insert(numb);
                counter++;
            }
        }
        for (int i : list2)
        {
            cout << i << ' ';
        }
        return 0;
}

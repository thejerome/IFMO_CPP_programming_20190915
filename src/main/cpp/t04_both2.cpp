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
#include <map>
#include <vector> 
#include <algorithm>

using namespace std;

int t04_both2() {
        int n,m;
        cin>>n;
        map <long long,bool> ma;
        for(int i = 1;i <= n;++i){
            long long x;
            cin>>x;
            ma[x] = true;
        }
        cin>>m;
        vector <long long> a;
        for(int i = 1;i <= m;++i){
            long long x;
            cin>>x;
            if(ma[x]){
                a.emplace_back(x);
            }
        }
        sort(a.begin(),a.end());
        for(int i = 0;i < a.size();++i){
            if(!i or a[i] != a[i - 1]){
                cout<<a[i]<<' ';
            }
        }
}

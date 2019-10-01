//Дан список целых чисел, который может содержать до 100000 чисел. 
// Определите, сколько в нем встречается различных чисел.
//
//Входные данные
//
//Вводится число N - количество элементов списка, а затем N чисел.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//5
//1 2 3 2 1
//Sample Output:
//
//3

#include "t01_unique.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int t01_unique() {
        int n;
        cin>>n;
        vector <int> a;
        for(int i = 1;i <= n;++i){
            int x;
            cin>>x;
            a.emplace_back(x);
        }
        sort(a.begin(),a.end());
        int ans = 0;
        for(int i = 0;i < a.size();++i){
            if(!i)++ans;
            else if(a[i] != a[i - 1]){
                ++ans;
            }
        }
        cout<<ans;
}

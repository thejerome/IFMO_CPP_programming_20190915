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
#include <vector>

using namespace std;

int t04_both2() {
set<int> v1;
    vector<int> v2;
    int n,m,a,x,y;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        v1.insert(x);
    }
    cin>>m;
    for (int j = 0; j < m; j++) {
        cin >> y;
        if(v1.find(y)!=v1.end())
               v2.push_back(y);
        else
            v1.insert(y);
    }
    a=v2.size()-1;
    for(int i=0;i<=a;i++){
        for(int j=i+1;j<=a;j++){
            if(v2[i]>v2[j]){
                int  tmp=v2[i];
                v2[i]=v2[j];
                v2[j]=tmp;
            }
        }
    }
    for(int i=0;i<=a;i++){
        cout<<v2[i]<<" ";
    }

}

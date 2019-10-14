//Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
// Посчитайте, сколько чисел содержится одновременно как в первом списке, так и во втором.
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
//2

#include "t03_both.h"
#include <iostream>
#include <set>

using namespace std;

int t03_both() {
    set<int> s,stmp,sres;
    int n,c,size;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>c;
        s.emplace(c);
    }
    cin>>n;
    stmp=s;
    for(int i=0;i<n;i++){
        size=stmp.size();
        cin>>c;
        stmp.emplace(c);
        if(stmp.size()==size){
            sres.emplace(c);
        }
        stmp=s;
    }
    cout<<sres.size();
	return 0;
}

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
#include <set> 

using namespace std;

int t04_both2() {
            int n,m;
            cin>>n;
            map <int,int> ma;
            for(int i = 1;i <= n;++i){
                int x;
                cin>>x;
                ma[x] = 1;
            }
            cin>>m;
            set <int> st;
            for(int i = 1;i <= m;++i){
                int x;
                cin>>x;
                if(ma[x] == 1){
                    st.insert(x);
                }
            }
            for(set <int> :: iterator it = st.begin();it != st.end();++it){
                cout<<*it<<' ';
            }
}

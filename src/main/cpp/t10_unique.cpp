//Дан массив. Выведите те его элементы, которые встречаются в массиве только один раз. Элементы нужно выводить в том порядке, в котором они встречаются в списке.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//6
//1 2 2 3 3 3
//Sample Output 1:
//
//1
//Sample Input 2:
//
//8
//4 3 5 2 5 1 3 5
//Sample Output 2:
//
//4 2 1

#include "t10_unique.h"
#include <iostream>

using namespace std;

int t10_unique() {
            int n,max_len = 0;
            cin>>n;
            int a[n + 1];
            for(int i = 1;i <= n;++i){
                cin>>a[i];
                max_len = max(max_len,a[i] < 0 ? -a[i] : a[i]);
            }
            int cnt_negative[max_len + 1],cnt_positive[max_len + 1];
            for(int i = 0;i <= max_len;++i){
                cnt_negative[i] = cnt_positive[i] = 0;
            }
            for(int i = 1;i <= n;++i){
                if(a[i] >= 0){
                    ++cnt_positive[a[i]];
                } else {
                    ++cnt_negative[-a[i]];
                }
            }
            for(int i = 1;i <= n;++i){
                if(a[i] >= 0 and cnt_positive[a[i]] == 1){
                    cout<<a[i]<<' ';
                }
                if(a[i] < 0 and cnt_negative[-a[i]] == 1){
                    cout<<a[i]<<' ';
                }
            }
}

//Дан массив чисел. Посчитайте, сколько в нем пар элементов, равных друг другу. Считается, что любые два элемента, равные друг другу образуют одну пару, которую необходимо посчитать.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//5
//1 2 3 2 3
//Sample Output 1:
//
//2
//Sample Input 2:
//
//5
//1 1 1 1 1
//Sample Output 2:
//
//10

#include "t09_equals.h"
#include <iostream>


using namespace std;

int t09_equals() {
            int n;
            int maxx = 0;
            cin>>n;
            int a[n + 1];
            for(int i = 0;i < n;++i){
                cin>>a[i];
                maxx = max(maxx,a[i]);
                if(a[i] < 0){
                    maxx = max(maxx,-a[i]);
                }
            }
            int cnt_positive[maxx + 1];
            int cnt_negative[maxx + 1];
            for(int i = 0;i <= maxx;++i){
                cnt_positive[i] =cnt_negative[i] = 0;
            }
            for(int i = 0;i < n;++i){
                if(a[i] >= 0){
                    ++cnt_positive[a[i]];
                } else {
                    ++cnt_negative[-a[i]];
                }
            }
            long long ans = 0;
            for(int i = 0;i <= maxx;++i){
                if(cnt_positive[i] > 1){
                    ans += cnt_positive[i] * (cnt_positive[i] - 1);
                }
                if(cnt_negative[i] > 1){
                    ans += cnt_negative[i] * (cnt_negative[i] - 1);
                }
            }
            cout<<ans / 2;
}

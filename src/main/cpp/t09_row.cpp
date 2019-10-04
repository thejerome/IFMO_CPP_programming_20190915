//Дана последовательность натуральных чисел, завершающаяся числом 0.
// Определите, какое наибольшее число подряд идущих элементов этой последовательности равны друг другу.
// Если не нашлось ни одной пары, тройки и т.д. элементов, равных друг другу, то программа должна вывести число 1.
//Формат входных данных
//        Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//7
//7
//9
//1
//0
//Sample Output:
//
//2

#include "t09_row.h"
#include <iostream>

using namespace std;

int t09_row() {
int x,pre_x = -1,cnt = 0,t = 0;
    	while(cin>>x){
            if(!x)break;
    		if(x == pre_x){
    			++cnt;
    			t = max(t,cnt);
    		} else {
    			cnt = 1;
    			pre_x = x;
    		}
    	}
    	cout<<max(t,cnt);
}
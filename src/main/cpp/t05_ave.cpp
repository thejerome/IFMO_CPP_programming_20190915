//Определите среднее значение всех элементов последовательности, завершающейся числом 0.
//
//Формат входных данных
//
//        Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу. Необходимую точность вычислите по тестам.
//Sample Input:
//
//1
//7
//9
//0
//Sample Output:
//
//5.66666666667

#include "t05_ave.h"
#include <iostream>
#include <iomanip>

using namespace std;

int t05_ave() {
            int cnt = 0,x;
            double sum = 0;
            while(cin>>x){
                if(!x)break;
                sum += (double)x;
                ++cnt;
            }
            cout<<fixed<<showpoint;
  	    cout<<setprecision(11);
	    cout<<sum / ((double)cnt);
}

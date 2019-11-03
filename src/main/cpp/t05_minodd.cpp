//Выведите значение наименьшего нечетного элемента списка, а если в списке нет нечетных элементов - выведите число 0.
//
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//5
//0 1 2 3 4
//Sample Output 1:
//
//1
//Sample Input 2:
//
//5
//2 4 6 8 10
//Sample Output 2:
//
//0

#include "t05_minodd.h"
#include <iostream>
#include <cmath>


using namespace std;

int t05_minodd() {
    int i;
    int m = 0;
    cin >> i;
    int A [i];
    int B [i];
    for ( int k = 0 ; k < i ; k++ ){
        cin >>  A [k];
    }
    for ( int k = 0 , h = 0; k < i ; k++ ){
        if( A [k] % 2 == 1 ){
            B [h] = A [k];
            h++;
        }
    }
    m = B [0];
    for ( int k = 1 , h ; k < h ; k++ ){
        if( B [k] < m ){
            m = B [k];
        }
    }
        cout << m << endl;
        return 0;
}

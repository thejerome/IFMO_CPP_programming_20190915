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
    int N, K;
    K = 0;
    cin >> N;
    int *mas = new int[N];
    for (int i = 0; i < N; ++i) {
        cin >> mas[i];
    }
    for (int i = 1; i < N; ++i) {
        if ((mas[i] < mas[i - 1]) & mas[i] % 2 != 0) {
            K = 1;
            cout << mas[i];
        }
    }
    if (K == 0)
        cout << 0;
    delete [] mas;
    return 0;
}

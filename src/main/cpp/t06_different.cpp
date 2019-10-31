//Дан список, упорядоченный по неубыванию элементов в нем. Определите, сколько в нем различных элементов.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//6
//1 2 2 3 3 3
//Sample Output:
//
//3

#include "t06_different.h"
#include <iostream>


using namespace std;

int t06_different() {
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, u = 0;
    cin >> n;
    vector <int> a(n);
    int t = 0;
    for(int i = 1; i < n; i++){
        u++;
        if(u <= 1) {
            i--;
            cin >> a[i];
            i++;
        }
        cin >> a[i];
        if(a[i] > a[i - 1]){
            t++;
        }
    }
    cout << t + 1;
    return 0;
}

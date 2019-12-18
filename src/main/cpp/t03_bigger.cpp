//Дан массив чисел. Выведите все элементы массива, которые больше предыдущего элемента .
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//5
//1 5 2 4 3
//Sample Output:
//
//5 4

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector <int> m;
    
    for (int i = 0; i < N; i++){
        int k;
        cin >> k;
        m.push_back(k);
    }
    
    for (int i = 1; i < N; i++) {
        if (m[i] > m[i-1]) 
            cout << m[i] << " ";
    }
    return 0;
}

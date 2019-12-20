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
#include <vector>


using namespace std;

int t09_equals() {
    int n;
    std::cin >> n;
    std::vector<int> v(n);
    for(auto& i:v)
        std::cin >> i;
 
    int count=0;
    for(auto i:v)
        for(auto j:v)
            if(i==j) count++;
    count -=n;
    count /=2;
    std::cout <<count;
}

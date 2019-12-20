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
#include <vector>
//using namespace std;

int t10_unique() {
    int n, c = 0;
    std::cin >> n;
    std::vector<int> vec(n);

    for(std::size_t i = 0; i < n; ++i)
        std::cin >> vec[i];

    for(std::size_t i = 0; i < n; ++i)
    {
        c = 0;
        for(std::size_t j = 0; j < n; ++j)
        {
            if(vec[i] == vec[j])
                ++c;
        }
        if(c == 1)
            std::cout << vec[i] << " ";
    }
    
  return 0;
}

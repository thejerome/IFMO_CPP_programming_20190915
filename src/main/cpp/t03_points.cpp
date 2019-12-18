//Выведите все исходные точки в порядке возрастания их расстояний от начала координат.
//
//Входные данные
//
//Программа получает на вход набор точек на плоскости. 
// Сначала задано количество точек n, затем идет последовательность из n строк,
// каждая из которых содержит два числа: координаты точки. 
// Величина n не превосходит 100, все исходные координаты – целые числа, не превосходящие 10^3.
//
//Выходные данные
//
//Необходимо вывести все исходные точки в порядке возрастания их расстояний от начала координат.
//
//Sample Input:
//
//2
//1 2
//2 3
//Sample Output:
//
//1 2
//2 3

#include "t03_points.h"
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <utility>


using namespace std;

bool va(std::pair<int, int> p1, std::pair<int, int> p2){
    return pow(p1.first, 2) + pow(p1.second, 2) < pow(p2.first, 2) + pow(p2.second, 2);
}
int t03_points() {
  int n, x, y;
    std::cin >> n;
    std::vector<std::pair<int, int>> v(n);
        while (n > 0){
            n--;
            std::cin >> x;
            std::cin >> y;
            v[n] = {x, y};
        }
   std::sort(v.begin(), v.end(), va);
    for (auto i : v){
        std::cout << i.first << " " << i.second << "\n";
     }
  return 0;    
}

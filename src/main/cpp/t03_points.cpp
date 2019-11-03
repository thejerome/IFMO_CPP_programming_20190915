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
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int t03_points() {
   int n;
   cin >> n; 
   vector<vector<int>> s(n, vector<int>(3));
   for(int i = 0; i < n; i++)
   {
       cin >> s[i][0] >> s[i][1];
       s[i][2] = pow(s[i][0], 2) + pow(s[i][1], 2);
   }
   sort(s.begin(), s.end(), [](const vector<int> & left, const vector<int> & right){ return left[2] < right[2];});
   for(int i = 0; i < n; i++)cout << s[i][0] << " " << s[i][1] << endl;
   return 0;
}

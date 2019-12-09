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

struct points
{
    double x, y;
};

double dist (points & a)
{
    return sqrt(a.x*a.x + a.y*a.y);
};

int t03_points() {
    vector<points> nums;
    points s{};
    int n;
    cin >> n;
    for (int i = 0 ; i < n ; i ++)
    {
        nums.push_back(s);
        cin >> nums.at(i).x >> nums.at(i).y;
    }
    for (int i = 0 ; i < nums.size() ; i ++)
    {
        for (int j = 0; j < nums.size(); ++j)
        {
            if (dist(nums[i]) < dist(nums[j]))
                swap(nums[i], nums[j]);
        }
    }
    for (auto i: nums)
        cout << i.x << " " << i.y << endl;
}

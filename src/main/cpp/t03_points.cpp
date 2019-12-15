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


using namespace std;

struct teeraps {
	int x, y;
	bool operator < (const teeraps& t) const {
		return x * x + y * y < t.x * t.x + t.y * t.y;
	}
	friend ostream& operator <<(ostream& stream, const teeraps& Point);
	friend istream& operator >>(istream& stream, const teeraps& Point);
};


ostream& operator <<(ostream& stream, teeraps& Point) {
	return stream << Point.x << " " << Point.y << endl;
};

istream& operator >>(istream& stream, teeraps& Point) {
	return stream >> Point.x >> Point.y;
};
int t03_points() {
	int lone;
	cin >> lone;
	vector<teeraps> Points(lone);
	for (auto& i : Points) cin >> i;
	sort(Points.begin(), Points.end());
	for (auto i : Points) cout << i;
}

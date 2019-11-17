//Дано число N. Определите, сколькими способами можно расставить на доске N×N N ферзей, не бьющих друг друга.
//
//Формат входных данных
//        Задано единственное число N. (N ≤ 10)
//
//Формат выходных данных
//        Выведите ответ на задачу.
//Подсказка
//        Напишите рекурсивную функцию, которая пытается поставить ферзя в очередной столбец. 
// Если на эту клетку ставить ферзя нельзя (он бьет предыдущих), 
// то такой вариант даже не стоит рассматривать. 
// Когда вы успешно поставили ферзя в последний столбец - увеличивайте счетчик.
//Sample Input:
//
//8
//Sample Output:
//
//92

#include <iostream>
#include <vector>

using namespace std;


int mx[10], my[10];

bool is(int d, int x, int y){
    return x == d || (abs(x - mx[d]) != abs(y - my[d])) && (my[d] != y) && is(d + 1, x, y);
}

int fun(int n, int x, int y){
    if (n > y){
        int cou = 0;
        if (is(0, x, y)){
            my[x] = y;
            if (x == (n - 1))
                cou = 1;
            else
                cou = fun(n, x + 1, 0);

        }

        return fun(n, x, y + 1) + cou;
    }
    return 0;
}


int t08_queen(){
	int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        mx[i] = i;

    cout << fun(n, 0, 0);
    return 0;
}

//int start1, start2, fin1, fin2;
//	int r1, r2;
//	bool is = 0;
//
//	cin >> start1 >> start2 >> fin1 >> fin2;
//
//	r1 = fin1 - start1;
//	r2 = fin2 - start2;
//
//	if(r1 * r1 == r2 * r2)
//		is = 1;
//
//	if(start1 == fin1 || start2 == fin2)
//		is = 1;
//
//    if(is)
//        cout << "YES" << endl;
//    else
//        cout << "NO" << endl;
//
//	return 0;

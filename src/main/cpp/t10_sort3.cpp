//Дано три числа. Упорядочите их в порядке неубывания.
//
//Формат входных данных
//        Вводятся три числа.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//1
//Sample Output:
//
//1 1 2

#include "t10_sort3.h"
#include <iostream>

using namespace std;

int t10_sort3() {
int A,B,C = 0;
cin >> A >> B >> C;

if (((A >= B) && (B >= C)) )
    cout << A << " " << B << " " << C;
else if (((A >= C) && (C >= B)))

    cout << A << " " << C << " " << B;

else if (((B >= A) && (A >= C)) )

    cout << B << " " << A << " " << C;

else if (((B >= C) && (C >= A)))

    cout << B << " " << C << " " << A;

else if (((C >= A) && (A >= B)))

    cout << C << " " << A << " " << B;

else if (((C >= B) && (B >= A)))

    cout << C << " " << B << " " << A;
};

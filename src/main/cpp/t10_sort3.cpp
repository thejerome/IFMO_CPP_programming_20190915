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
    cout << C << " " << B << " " << A;
else if (((A >= C) && (C >= B)))

    cout << B << " " << C << " " << A;

else if (((B >= A) && (A >= C)) )

    cout << C << " " << A << " " << B;

else if (((B >= C) && (C >= A)))

    cout << A << " " << C << " " << B;

else if (((C >= A) && (A >= B)))

    cout << B << " " << A << " " << C;

else if (((C >= B) && (B >= A)))

    cout << A << " " << B << " " << C;
};

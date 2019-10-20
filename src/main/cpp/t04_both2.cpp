//Даны два списка чисел, которые могут содержать до 100000 чисел каждый. 
// Выведите все числа, которые входят как в первый, так и во второй список в порядке возрастания.
//
//Входные данные
//
//Вводится число N - количество элементов первого списка, а затем N чисел первого списка.
//
//Затем вводится число M - количество элементов второго списка, а затем M чисел второго списка.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//3
//1 3 2
//3
//4 3 2
//Sample Output:
//
//2 3

#include "t04_both2.h"
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int t04_both2() {
    vector<int>ans;
    set<int> a;
    int n, in, cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> in;
        a.insert(in);
    }

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> in;
        int sz = a.size();
        a.insert(in);

        if (sz == a.size()) {
            ans.push_back(in);
            int k = ans.size() - 1;
            while (k > 0) {
                if (ans[k] < ans[k - 1]) {
                    int tmp = ans[k];
                    ans[k] = ans[k - 1];
                    ans[k - 1] = tmp;
                }
               k--;
            }
        }
        else {
            a.erase(in);
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << ' ';
    }
}

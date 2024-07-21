/**
 * <a href="https://oj.17ac.cn/problems/2103">所有水仙花数</a>
 */

#include <iostream>

using namespace std;

inline int pow3(int x) {
    return x * x * x;
}

int main() {
    for (int i = 100; i <= 999; i++)
        if (pow3(i % 10) + pow3(i / 10 % 10) + pow3(i / 100) == i)
            cout << i << '\n';

    return 0;
}

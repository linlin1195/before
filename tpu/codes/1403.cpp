/**
 * <a href="https://oj.17ac.cn/problems/1403">1403. 营业额统计</a>
 */

#include <cmath>
#include <iostream>
#include <set>

using namespace std;

int main() {
    int n, x;
    set<int> a;
    int ans;
    cin >> n >> x;
    ans = x;
    a.insert(x);

    for (int i = 1; i < n; i++) {
        cin >> x;
        auto geit = a.lower_bound(x);

        if (geit == a.end()) {
            ans += abs(x - * (--geit));
            a.insert(x);
            continue;
        }

        if (geit == a.begin()) {
            ans += abs(x - *geit);
            a.insert(x);
            continue;
        } else {
            ans += min(abs(x - * (--geit)), abs(x - *geit));
            a.insert(x);
        }
    }

    cout << ans << '\n';
    return 0;
}

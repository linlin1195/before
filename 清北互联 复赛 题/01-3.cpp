/*
 *  https://oj.17ac.cn/contests/1131/problems/2?group=2
 *
 */
 #include<bits/stdc++.h>
using namespace std;
const int N = 4 * 1e4;
int main(){
	int n;
    cin >> n;
    int a[N];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    int sum = a[1];
    for(int i=2;i<=n;i++){
        int minn = INT_MAX;
        for(int j=1;j<i;j++){
            if(abs(a[j] - a[i]) < minn)
                minn = abs(a[j] - a[i]);
		}
        sum += minn;
    }
    cout << sum << endl;
    return 0;
}
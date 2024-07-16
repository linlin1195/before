/*
 *  https://oj.17ac.cn/contests/1131/problems/0?group=2
 *  
 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int l = 100,r = 999;
    for(int i=l;i<=r;i++){
        int sum = pow(i/100,3) + pow(i/10%10,3) + pow(i%10,3);
        if(sum == i)
            cout << sum << endl;
    }
    return 0;
}
/*
 *  https://oj.17ac.cn/contests/1131/problems/1?group=2
 *
 */
#include<bits/stdc++.h>
using namespace std;
bool issushu(int x);
bool ishuiwen(int x);
int main(){
    int l=10,r=1000;
    for(int i=l;i<=r;i++){
        if(issushu(i) == true && ishuiwen(i) == true){
            cout << i << endl;
        }
    }
    return 0;
}
bool issushu(int x){
    if(x == 0 || x == 1) return false;
    for(int i=2;i<=sqrt(x);i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}
bool ishuiwen(int x){
    string s1 = to_string(x);
    string s2 = s1;
    reverse(s2.begin(),s2.end());
    if(s1 == s2) return true;
    else return false;
}
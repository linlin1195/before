#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <string> v;
    for(int i=0;i<=(1 << n) - 1;i++){
        string now = "";
        for(int j = 0;j<n;j++){
            if(i >> j & 1)
                now += (char)('a' + j);
        }
        v.push_back(now);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout << '(' << v[i] <<')' << endl;
    }
    return 0;
}

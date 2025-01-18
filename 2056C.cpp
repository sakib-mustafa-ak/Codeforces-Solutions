#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    cout<<1<<" "<<1<<" ";
    for (int i = 2; i < n-2; ++i)
        cout<<i<<" ";
    cout<<1<<" "<<2<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
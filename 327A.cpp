#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second

void solve(){
    int n,one = 0, zero = 0; cin>>n;
    vector<int> a(n);
    for(auto &i : a)
        cin>>i;
    int ans = -1;
    for(auto i : a){
        if(i == 1){
            one++;
            if(zero>0)
                zero--;
        }
        else
            ans = max(ans,++zero);
    }
    cout<<one + ans <<endl;
}

signed main(){
    Start
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}
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
    int x,y;
    cin>>x>>y;
    if(x>y){
        int d = x-y - 8;
        if(d>=0 && d%9 == 0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else{
        if(y - x == 1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
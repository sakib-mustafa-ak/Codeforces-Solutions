#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second
#define pb push_back
#define pr pair<int,int>

bool isp(int x) {
    for (int i = 2; i * i <= x; ++i)
        if (x % i == 0) return false;
    return true;
}

void solve(){
    int n,m;
    cin>>n>>m;
    ++n;
    while(!isp(n)){
    	++n;
    }
    cout<<(n==m? "YES\n":"NO\n");
}

signed main(){
    Start
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}
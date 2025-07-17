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

void solve(){
    int n; cin>>n;
    vector<int> a[4];
    for (int i = 1; i <= n; ++i)
    {
    	int x; cin>>x;
    	a[x].push_back(i);
    }
    int ans = min(a[1].size(),min(a[2].size(),a[3].size()));
    cout<<ans<<endl;
    for (int i = 0; i < ans; ++i)
    {
    	cout<<a[1][i]<<" "<<a[2][i]<<" "<<a[3][i]<<endl;
    }
}

signed main(){
    Start
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}
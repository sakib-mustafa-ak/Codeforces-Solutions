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
    int n,p; cin>>n>>p;
    std::vector<int> a(n),b(n);
    vector<pair<int,int>> aa(n);
    for(auto &i:a)
    	cin>>i;
    for(auto &i:b)
    	cin>>i;
    for (int i = 0; i < n; ++i)
    {
    	aa[i] = {min(b[i],p),a[i]};
    }
    sort(all(aa));
    int ans = p, idx = n-1;
    for (int i = 0; i < n; ++i)
    {
    	ans += min(idx,aa[i].ss)*aa[i].ff;
    	idx -= min(idx,aa[i].ss);
    }
    cout<<ans<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}

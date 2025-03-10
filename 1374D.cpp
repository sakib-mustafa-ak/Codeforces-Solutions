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
    int n,k; cin>>n>>k;
    vector<int> a(n);
    for(auto &i : a)
        cin>>i;
    map<int,int> mp;
    for(auto i : a){
        if(i%k)
            mp[k-(i%k)]++;
    }
    if(!mp.size()){
        cout<<0<<endl;
        return;
    }
    vector<pair<int,int>> v;
    for(auto i: mp)
        v.push_back({i.ss,i.ff});
    sort(rall(v));
    cout<<k*(v[0].ff-1)+v[0].ss+1<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}

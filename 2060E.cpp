//unfinished
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
    int n,m1,m2;
    cin>>n>>m1>>m2;
    vector<int> f[n],g[n];
    for (int i = 0; i < m1; ++i)3
    {
    	int x,y;
    	cin>>x>>y;
    	f[x].push_back(y);
    }
    for (int i = 0; i < m2; ++i)
    {
    	int x,y;
    	cin>>x>>y;
    	g[x].push_back(y);
    }

    for (int i = 0; i < n; ++i)
    {
    	
    }
}

signed main(){
    Start
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
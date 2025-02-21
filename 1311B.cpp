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
    int n,m; cin>>n>>m;
    map<int,int> mp;
    vector<int> a(n);
    for(auto &i: a)
    	cin>>i;
    for (int i = 0; i < m; ++i)
    {
    	int x; cin>>x;
    	mp[x-1]++;
    }

    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < n-i; ++j)
    	{
    		if(a[j] > a[j+1] and mp[j])
    			swap(a[j],a[j+1]);
    	}
    }
    cout<<((is_sorted(all(a)))? "YES\n":"NO\n");
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}

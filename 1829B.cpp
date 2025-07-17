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
    vector<int> a(n+1);
    for (int i = 1; i <= n; ++i)
    {
    	cin>>a[i];
    }
    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
    	if(a[i]==1) continue;
    	int j = i;
    	while(j+1 <= n && a[j+1] == 0) j++;
    	ans = max(ans, j - i+1);
    	i=j;
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
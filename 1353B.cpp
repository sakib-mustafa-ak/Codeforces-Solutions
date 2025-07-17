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
    int n,k;
    cin>>n>>k;
    int ans = 0;
    int a[55],b[55];
    for (int i = 1; i <= n; ++i)
    {
    	cin>>a[i];
    	ans+=a[i];
    }
    for (int i = 1; i <= n; ++i)
    {
    	cin>>b[i];
    }
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    for (int i = 1; i <= k; ++i)
    {
    	int d = b[n-i+1]-a[i];
    	ans+=max(0ll,d);
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
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
int a[1000005];
void solve(){
    int n; cin>>n;
    int now = 0, ans = 0;
    for (int i = 1; i <= n; ++i)
    {
    	cin>>a[i];
    	if(a[i]>a[i-1]) ++now;
    	else
    		now = 1;
    	ans=max(ans,now);
    }
    cout<<ans<<endl;
}

signed main(){
    Start
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}
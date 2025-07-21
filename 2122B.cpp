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
    int n; cin>>n;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
    	int a,b,c,d; cin>>a>>b>>c>>d;

    	if(b<=d)
    		ans+=max(0ll,a-c);
    	else
    		ans+=a+max(0ll,b-d);
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

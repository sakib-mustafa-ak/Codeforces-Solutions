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
    std::vector<int> a(n+2), mx(n+2);
    for (int i = 1; i <= n; ++i)
    {
    	cin>>a[i];
    }

    stack<int> sta;
    for (int i = 1; i <=n; ++i)
    {
    	while(!sta.empty() and a[sta.top()] < a[i]){
    		mx[sta.top()] = i;
    		sta.pop();
    	}
    	sta.push(i);
    }

    while(!sta.empty()){
    	mx[sta.top()] = n+1;
    	sta.pop();
    }

    int ans = 0;
    for (int i = 1; i <=n; ++i)
    {
    	ans+= i * (mx[i]-i);
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

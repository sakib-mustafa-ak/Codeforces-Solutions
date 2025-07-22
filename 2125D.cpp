#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second

int MOD = 998244353;

struct haha{
	int l,val;
};

int power(int base, int exp){
	int res = 1;
	for (base %= MOD; exp > 0; exp /= 2) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
    }
    return res;
}

void solve(){
    int n,m; cin>>n>>m;
    std::vector<vector<haha>> a(m+1);
    int tot=1;

    for (int i = 0; i < n; ++i)
    {
    	int l,r,p,q; cin>>l>>r>>p>>q;
    	int prime = p* power(q,MOD-2)%MOD;
    	int v = (1-prime +MOD)%MOD;
    	tot = (tot*v)%MOD;
    	a[r].push_back({l,prime*power(v,MOD-2)%MOD});
    }

    std::vector<int> dp(m+1,0);
    dp[0] = 1;

    for (int i = 1; i <=m; ++i)
    {
    	for(auto [l,val]:a[i]){
    		dp[i] = (dp[i] + val*dp[l-1])%MOD;
    	}
    }

    int ans = (dp[m]*tot)%MOD;
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

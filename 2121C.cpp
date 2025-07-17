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
    int mx = INT_MIN;
    vector<vector<int>> a(n+3);

    for (int i = 1; i <= n; ++i)
    {
    	a[i].push_back(0);
    	for (int j = 1; j <= m; ++j)
    	{
    		int x; cin>>x;
    		a[i].push_back(x);
    		mx = max(mx,x);
    	}
    }

    int c = 0;
    std::vector<int> x(n+2),y(m+2);
    for (int i = 1; i <= n; ++i)
    {
    	for (int j = 1; j <= m; ++j)
    	{
    		if(a[i][j] != mx)
    			a[i][j] = 0;
    		else{
    			c++;
    			a[i][j] = 1;
    			x[i]++;
    			y[j]++;
    		}
    	}
    }

    for (int i = 1; i <= n; ++i)
    {
    	for (int j = 1; j <= m; ++j)
    	{
    		int z = x[i] + y[j] - a[i][j];
    		if(z == c){
    			cout<<mx-1<<endl;
    			return;
    		}
    	}
    }
    cout<<mx<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}

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
    int n,m,ans=0; cin>>n;
    vector<int> b(n);
    for(auto &i : b)
    	cin>>i;
    cin>>m;
    vector<int> g(m);
    for(auto &i : g)
    	cin>>i;

    sort(all(b));
    sort(all(g));

    for(auto j: b){
    	for (int i = 0; i < m; ++i)
    	{
    		if(abs(j - g[i])<2){
    			g[i] = INT_MAX;
    			ans++;
    			break;
    		}
    	}
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
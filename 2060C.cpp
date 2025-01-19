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
    int n,k; cin>>n>>k;
    map <int,int> mp;
    for (int i = 0; i < n; ++i)
    {
    	int x;
    	cin>>x;
    	mp[x]++;
    }
    int ans = 0;
    for(auto v:mp){
    	int x = k-v.ff;
    	//cout<<v.ff<<" "<<x<<endl;
    	//cout<<v.ss<<" "<<mp[x]<<endl;
    	int y = min(v.ss,mp[x]);
    	if(v.ff == x)
    		y = v.ss/2; 
    	ans+=y;
    	mp[v.ff]-=y;
    	mp[x]-=y;
    	//cout<<y<<endl;
    }
    cout<<ans<<endl;
}

signed main(){
    Start
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
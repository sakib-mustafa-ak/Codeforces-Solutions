#include<bits/stdc++.h>
using namespace std;
//#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second
void solve(){
    int n; cin>>n;

    map<int, int> mp,fr;
    for (int i = 0; i < n; ++i)
    {
    	int x; cin>>x;
    	mp[x]++;
    }
    int mex = 0;
    for(auto x:mp){
    	if(x.ff == mex){
    		mex++;
    		fr[x.ss]++;
    	}
    	else
    		break;
    }

    vector<int> ans(n-mex+1);
    ans[0] = 1;
    for (int i = 1; i <= n-mex; ++i){
    	ans[i] = ans[i-1] + fr[i];
    }

    for(auto i : ans)
    	cout<<i<<" ";
    for (int i = mex; i > 0; --i)
    	cout<<i<<" ";
   	cout<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}

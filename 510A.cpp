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
    int n,m; cin>>n>>m;
    for (int i = 1; i <= n; ++i)
    {
    	for (int j = 1; j <= m; ++j)
    	{
    		if(i % 2 == 1){
    			cout<<"#";
    		}
    		else if(j == 1 && i/2%2 == 0)
    			cout<<"#";
    		else if(j == m && i/2%2 == 1)
    			cout<<"#";
    		else
    			cout<<".";
    	}
    	cout<<endl;
    }
}

signed main(){
    Start
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}
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
    int n;
    cin>>n;
    vector<string> v(n);
    map<pair<int,int>,bool> vis;
    for (int i = 0; i < n; ++i)
    	cin>>v[i];

    int  ans = 0;
    for (int i = 0; i < n; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		vector<pair<int , int>> a;
    		a.push_back({i,j});
    		a.push_back({j,n-i-1});
    		a.push_back({n-i-1,n-j-1});
    		a.push_back({n-j-1,i});
    		bool pos = 0;
    		for(auto x:a){
    			if(vis[x]){
    				pos = 1;
    				break;
    			}
    		}
    		if(!pos){
    			int c=0;
    			for(auto x:a){
    				if(v[x.first][x.second] == '1')
    					c++;
    			}
    			int k = min(c,4-c);
    			ans+=k;

    			for(auto x:a){
    				vis[x] = 1;
    			}
    		}
    	}
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
#include<bits/stdc++.h>
using namespace std;
//#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second
#define pb push_back
#define pr pair<int,int>

void solve(){
    int n; cin>>n;
    int ans = 0;
    for(char c = '1'; c <= '9'; c++){
    	for (int i = 1; i <= 9; ++i)
    	{
    		int x = stoi(string(i,c));
    		if(x<=n)
    			++ans;
    	}
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
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
    int k,r; cin>>k>>r;
    int ans = 1e9;
    for (int i = 1; i <= 10; ++i)
    {
    	int req = i * k;
    	if(req%10 == r or req % 10 == 0){
    		ans = i;
    		break;
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
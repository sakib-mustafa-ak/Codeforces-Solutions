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
    int k; cin>>k;
    for (int i = 1; ; ++i)
    {
    	if(i%3==0 or i%10 == 3){}
    	else
    		--k;
    	if(k==0){
    		cout<<i<<endl;
    		break;
    	}
    }
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
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
    int n,l,r,k; cin>>n>>l>>r>>k;
    if(n==1)
    	cout<<l<<endl;
    else if(n%2==0){
    	if(n==2)
    		cout<<"-1\n";
    	else{
    		int x = l;
    		while(1){
    			int flag = 1;
    			for (int i = 0; i < 64; ++i)
    			{
    				int bt = 1LL<<i;
    				if(l&bt and x&bt){
    					x+=bt;
    					x = x & ~(bt-1);
    					flag = 0;
    					break;
    				}
    			}
    			if(flag) 
    				break;
    		}
    		if(x>r)
    			cout<<"-1\n";
    		else
    			cout<<(k<=n-2? l:x)<<endl;
    	}
    }
    else{
    	if(k<=n)
    		cout<<l<<endl;
    	else
    		cout<<"-1\n";
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

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
    string x,y;
    cin>>x>>y;
    for(int i = 0;i<x.size();i++){
    	if(x[i]!=y[i]){
    		if(x[i]<y[i])
    			swap(x[i],y[i]);
    		i++;
    		for( ;i < x.size();i++){
    			if(x[i]>y[i])
    				swap(x[i],y[i]);
    		}
    	}
    }
    cout<<x<<endl<<y<<endl;
}

signed main(){
    Start
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
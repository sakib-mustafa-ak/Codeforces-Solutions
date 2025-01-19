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
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    	if(i>0){
    		int x = min(a[i],a[i-1]);
    		a[i]-=x;
    		a[i-1]-=x;
    	}
    }
    for(int i = 1 ; i < n ; i++){
    	if(a[i]<a[i-1]){
    		cout<<"NO\n";
    		return;
    	}
    }
    cout<<"YES\n";
}

signed main(){
    Start
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
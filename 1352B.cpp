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
    int n,k; cin>>n>>k;
    if((n-(k-1))%2==1 and (n-(k-1))>0){
    	cout<<"YES\n";
    	for (int i = 0; i < k-1; ++i)
    		cout<<1<<" ";
    	cout<<n-k+1<<endl;
    }
    else if((n-(k-1)*2)%2==0 and (n-(k-1)*2)>0){
    	cout<<"YES\n";
    	for (int i = 0; i < k-1; ++i)
    		cout<<2<<" ";
    	cout<<n-(k-1)*2<<endl;
    }
    else cout<<"NO\n";
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
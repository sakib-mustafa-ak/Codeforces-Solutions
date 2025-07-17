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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if((a+b+c+d)%3!=0){
    	cout<<"NO\n";
    	return;
    }
    if((a+b+c+d)/3<max(a,max(b,c))) cout<<"NO\n";
    else
    	cout<<"YES\n";
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
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
    vector<int> a(n);
    for(auto &i:a)
    	cin>>i;
    if(find(all(a),k) != a.end())
    	cout<<"YES\n";
    else
    	cout<<"NO\n";
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
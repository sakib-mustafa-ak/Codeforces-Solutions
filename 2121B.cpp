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
    int n; cin>>n;
    string s; cin>>s;
    std::map<char, int> mp;
    for(auto i:s){
    	mp[i]++;
    }
    for(int i = 1 ; i < n-1 ; i++){
    	if(mp[s[i]]>1){
    		cout<<"YES\n";
    		return;
    	}
    }
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

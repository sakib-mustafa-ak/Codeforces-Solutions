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
    string s; cin>>s;
    int a = (s[0]-'0')+(s[1]-'0')+(s[2]-'0');
    int b = (s[3]-'0')+(s[4]-'0')+(s[5]-'0');
    cout<<((a==b)? "YES\n":"NO\n");
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
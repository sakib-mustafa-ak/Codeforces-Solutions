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
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    vector<int> cnt(128),cnt2(128);
    for (char a : s1) cnt[a]++;
    for (char a : s2) cnt[a]++;
    for (char a : s3) cnt2[a]++;
    cout<<((cnt == cnt2)? "YES\n":"NO\n");
}

signed main(){
    Start
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}